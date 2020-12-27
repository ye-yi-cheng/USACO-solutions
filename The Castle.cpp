#include<bits/stdc++.h>
using namespace std;
int n,m,roomcnt=0,roomsize=1,maxer=-99999;
int walls[51][51];
int gox[5]={-1,0,1,0},goy[5]={0,-1,0,1};
int pow2[5]={1,2,4,8};
bool visited[51][51];

struct Node{
	int y,x;	
};

queue<Node>que;

void bfs(Node start){
	roomsize=1;
	while(!que.empty()){
		Node seed;
		seed=que.front();
		que.pop();
//		printf("seed.y:%d seed.x:%d\n",seed.y,seed.x);
		for(int i=0;i<4;i++){
			int yy=seed.y+goy[i],xx=seed.x+gox[i];
//			printf("%d %d->%d %d:",seed.y,seed.x,yy,xx);
//			printf("yy:%d xx:%d visited[%d][%d]:%d walls[%d][%d]&%d(pow2[%d])=%d\n",yy,xx,yy,xx,visited[yy][xx],seed.y,seed.x,pow2[i],i,walls[seed.y][seed.x]&pow2[i]);
//			
//			printf("%d %d %d %d %d %d\n",yy>=0,yy<n,xx>=0,xx<m,visited[yy][xx]==false,(walls[seed.y][seed.x]&pow2[i])==0);
			if(yy>=0&&yy<n&&xx>=0&&xx<m&&visited[yy][xx]==false&&(walls[seed.y][seed.x]&pow2[i])==0){
				visited[yy][xx]=true;
				roomsize++;
//				printf("%d %dÄÜµ½%d %d(roomsize:%d)\n",seed.y,seed.x,yy,xx,roomsize);
				Node tmp;
				tmp.y=yy;
				tmp.x=xx;
				que.push(tmp);
			}
		}
	}
	if(roomsize>maxer){
		maxer=roomsize;
	}
//	printf("roomsize:%d\n",roomsize);
	roomcnt++;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			printf("%d",visited[i][j]);
//		}
//		printf("\n");
//	}
}

int main(){
	scanf("%d%d",&n,&m);
//	printf("%d %d\n",n,m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&walls[i][j]);
		}
	}
	
	for(int i=0;i<51;i++){
		for(int j=0;j<51;j++){
			visited[i][j]=false;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(visited[i][j]==false){
				Node tmp;
				tmp.y=i;
				tmp.x=j;
				que.push(tmp); 
				visited[i][j]=true;
				bfs(tmp);
			}
		}
	}
	printf("%d\n",roomcnt);
	printf("%d",maxer);
	return 0;
}
/*
4
7
11 6 11  6  3 10  6
7  9  6 13  5 15  5
1 10 12  7 13  7  5
13 11 10 8 10 12 13
*/

