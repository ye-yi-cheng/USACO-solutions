#include<bits/stdc++.h>
using namespace std;
int l,n,stx,sty,edx,edy,cnt=0,go_y[8]={2,1,-1,-2,-2,-1,1,2},go_x[8]={1,2,2,1,-1,-2,-2,-1};
char a[301][301];
int mark[301][301];

struct F{
	int y,x;
};

queue<F> que;

void bfs(int y,int x,int edy,int edx){
	a[y][x]='!';
	F f={y:y,x:x};
	que.push(f);
	while(!que.empty()){
		f=que.front();
		if(f.y==edy&&f.x==edx){
			printf("%d\n",mark[edy][edx]); 
			return;
		}
		que.pop();
		for(int i=0;i<8;i++){
			int yy=f.y+go_y[i],xx=f.x+go_x[i];
			if(a[yy][xx]!='!'&&mark[yy][xx]==-1&&yy>=0&&yy<=n&&xx>=0&&xx<=n){
				a[yy][xx]='!';
				mark[yy][xx]=mark[f.y][f.x]+1;
				F g={y:yy,x:xx};
				que.push(g);
			} 
		}
	}
}

int main(){
	scanf("%d",&l);
	for(int i=0;i<l;i++){
		for(int j=0;j<301;j++){
			for(int m=0;m<301;m++){
				a[j][m]='0';
				mark[j][m]=-1;
			}
		}
		que=queue<F>();
		scanf("%d",&n);
		scanf("%d%d",&sty,&stx);
		mark[sty][stx]=0;
		scanf("%d%d",&edy,&edx);
		bfs(sty,stx,edy,edx);
	}
	return 0;
}
