#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int roomcnt=0;
int maxer1=-99999;
int pows[4]={2,4,8,1};
int roomsize[2501];
int a[51][51];
int roomid[51][51];
char poses[4]={'^','>','v','<'};
bool visited[51][51];
 
struct node{
	int y;
	int x;
};

node movement[5];
queue<node> que;

struct wall{
	int size;
	int y;
	int x;
	int dir;
};

wall maxer2;

void bfs(){
	roomsize[roomcnt]++; 
	while(que.empty()==false){
		node seed=que.front();
		visited[seed.y][seed.x]=true;
		roomid[seed.y][seed.x]=roomcnt;
		que.pop();
		for(int i=0;i<4;i++){
			node move={seed.y+movement[i].y,seed.x+movement[i].x};
			if(
			move.y>=0&&
			move.y<n&&
			move.x>=0&&
			move.x<m&&
			visited[move.y][move.x]==false&&
			(a[seed.y][seed.x]&pows[i])==false
			){
				visited[move.y][move.x]=true;
				roomid[move.y][move.x]=roomcnt;
				roomsize[roomcnt]++;
				que.push(move);
			}
		}
	}
}

void update(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(visited[i][j]==false){
				node tmp={i,j};
				que.push(tmp);
				bfs();
				roomcnt++;
			}
		}
	}
}

int main(){
	movement[0].y=-1;
	movement[0].x=0;
	movement[1].y=0;
	movement[1].x=1;
	movement[2].y=1;
	movement[2].x=0;
	movement[3].y=0;
	movement[3].x=-1;
	maxer2.size=-99999;
	scanf("%d%d",&m,&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	update();
	for(int i=0;i<roomcnt;i++){
		if(roomsize[i]>maxer1){
			maxer1=roomsize[i];
		}
	}
	printf("%d\n%d\n",roomcnt,maxer1);
	for(int j=0;j<m;j++){
		for(int i=n-1;i>=0;i--){
			for(int k=0;k<2;k++){
				node move={i+movement[k].y,j+movement[k].x};
				if(
				move.y>=0&&
				move.y<n&&
				move.x>=0&&
				move.x<m
				){
					int newsize=roomsize[roomid[i][j]]+roomsize[roomid[move.y][move.x]];
					if(roomid[i][j]!=roomid[move.y][move.x]){
						if(newsize>maxer2.size){
							maxer2.size=newsize;
							maxer2.y=i;
							maxer2.x=j;
							maxer2.dir=k; 
						}else if(newsize>maxer2.size){
							maxer2.size=newsize;
							maxer2.y=i;
							maxer2.x=j;
							maxer2.dir=k;
						}
					}
				}
			}
		} 
	}
	printf("%d\n%d %d ",maxer2.size,maxer2.y+1,maxer2.x+1);
	if(maxer2.dir==0){
		printf("N\n");
	}else{
		printf("E\n");
	}
}
