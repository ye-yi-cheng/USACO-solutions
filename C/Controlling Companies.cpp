#include<bits/stdc++.h> 
using namespace std;
int visited[101];
int solution[101];
int stock[101][101];
int n,m;

void dfs(int v){
	visited[v]=1;
	for(int i=1;i<=m;i++){
		solution[i]+=stock[v][i];
		if(solution[i]>50&&visited[i]==false){
			dfs(i);
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int from;
		int to;
		int num;
		scanf("%d%d%d",&from,&to,&num);
		stock[from][to]=num;
		if(from>m){
			m=from;
		}
		if(to>m){
			m=to;
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m;j++){
			visited[j]=false;
		}
		for(int j=1;j<=m;j++){
			solution[j]=0;
		}
		dfs(i);
		for(int j=1;j<=m;j++){
			if(visited[j]==true&&i!=j){
				printf("%d %d\n",i,j);
			}
		}
	}
	return 0;
}
