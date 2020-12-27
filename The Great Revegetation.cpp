#include<bits/stdc++.h>
using namespace std;
bool flag[200][5];
int n,m;

struct Node{
	int x,y;
};

Node grass[200];

int cmp(Node A,Node B){
	return A.x<B.x;
}


void dfs(int row,int side){
	int ans;
    if(row>n){
    	return;
	}
    for(int i=1;i<=4;i++){
        if(flag[row][i]==true){
			ans=i;
			break;
		}
	}
	printf("%d",ans);
    int i;
	for(i=side;grass[i].x==row;i++){
        flag[grass[i].y][ans]=false;
    }
    dfs(row+1,i);
}

int main(){
    scanf("%d%d",&n,&m);
    memset(flag,true,sizeof(flag));
    for(int i=1;i<=m;i++){
        scanf("%d%d",&grass[i].x,&grass[i].y);
        if(grass[i].x>grass[i].y){
			swap(grass[i].x,grass[i].y);	
		}
    }
    sort(grass+1,grass+m+1,cmp);
    dfs(1,1);
    return 0;
}
