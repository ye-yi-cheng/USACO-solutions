#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int gox[5]={-1,0,1,0},goy[5]={0,-1,0,1};
int walls[51][51];
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
		for(int i=0;i<4;i++){
			int yy=seed.y+goy[i],xx=seed.x+gox[i];
			if(yy>=0&&yy<n&&xx>=0&&xx<m&&visited[yy][xx]==false&&(walls[seed.y][seed.x]&pow2[i])==0){
				visited[yy][xx]=true;
				roomsize++;
				Node tmp;
				tmp.y=yy;
				tmp.x=xx;
				que.push(tmp);
			}
		}
	}
}
