#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int roomcnt=0;
int maxer=-99999;
int pows[5]={1,2,4,8,0};
int a[51][51];
bool visited[51][51];

struct node{
	int y;
	int x;
};

node movement[5];
queue<node> que;

struct wall{
	node pos;
	int dir;
	int roomsize;
};

wall maxerwall;

void bfs(){
	int roomsize=0;
	if(visited[que.front().y][que.front().x]==false){
		roomcnt++;
	}
	roomsize++;
	while(que.empty()==false){
		node seed;
		seed=que.front();
		que.pop();
		node move;
		for(int i=0;i<4;i++){
			move.y=seed.y+movement[i].y;
			move.x=seed.x+movement[i].x;
			if(move.y>=0&&move.y<n&&
			move.x>=0&&move.x<m&&
			visited[move.y][move.x]==false&&
			(a[seed.y][seed.x]&pows[i])==false){
				roomsize++;
				visited[move.y][move.x]=true;
				que.push(move);
				visited[move.y][move.x]=false;
			}
		}
	}
}

int query(){
	maxer=-99999;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			node tmp={i,j};
			que.push(tmp);
			bfs();
		}
	}
}

void deletewall(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<2;k++){
				if(a[i][j]&pows[k]){
					if(k==0&&i!=0){
						a[i][j]-=pows[j];
						if(query()>maxerwall.roomsize){
							maxerwall={query(),k,i,j};
						}else if(query()==maxerwall.roomsize){
							if(i>maxerwall.pos.y&&
							j<maxerwall.pos.x){
								maxerwall={query(),k,i,j};
							}else if(i==maxerwall.pos.y&&
							j==maxerwall.pos.x){
								if(k==0){
									maxerwall={query(),k,i,j};
								}
							}
						}
					}else if(k==1&&j!=n-1){
						a[i][j]-=pows[j];
						if(query()>maxerwall.roomsize){
							maxerwall={query(),k,i,j};
						}else if(query()==maxerwall.roomsize){
							if(i>maxerwall.pos.y&&
							j<maxerwall.pos.x){
								maxerwall={query(),k,i,j};
							}else if(i==maxerwall.pos.y&&
							j==maxerwall.pos.x){
								if(k==0){
									maxerwall={query(),k,i,j};
								}
							}
						}
					}
				}
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
	maxerwall.roomsize=-99999;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	query();
	printf("%d\n%d\n",roomcnt,maxer);
	deletewall();
	printf("%d\n %d %d",maxerwall.roomsize,maxerwall.pos.y+1,maxerwall.pos.x+1);
	if(maxerwall.dir==0){
		printf("N\n");
	}else{
		printf("E\n");
	}
	return 0;
}
