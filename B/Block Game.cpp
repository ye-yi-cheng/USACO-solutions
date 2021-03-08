#include<bits/stdc++.h>
using namespace std;
int n,m,solution[4];
char words[200][20];

void func(int row){
	if(row==n+1){
	 	for(int i=1;i<=n;i++){
			printf("%s ",words[solution[i]-1]);
		}
		printf("\n");
		return;
	}
	for(int i=solution[row-1]+1+;i<=n*2;i++){
		solution[row]=i;
		func(row+1); 
	}
}

int main(){
	solution[0]=0;
	scanf("%d",&n);
	for(int i=0;i<n*2;i++){
		scanf("%s",words[i]);
	}
	func(1);
	return 0;
}
