#include<bits/stdc++.h>
using namespace std;
int n;
int milk[101];
int namesnum[101];
int totalmilk[101];
//"Bessie","Elsie","Daisy","Gertie","Annabelle","Maggie","Henrietta"
char names[101][20];



int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",names[i]);
		if(names[i][0]=='B'){
			namesnum[i]=0;
		}else if(names[i][0]=='E'){
			namesnum[i]=1;
		}else if(names[i][0]=='D'){
			namesnum[i]=2;
		}else if(names[i][0]=='G'){
			namesnum[i]=3;
		}else if(names[i][0]=='A'){
			namesnum[i]=4;
		}else if(names[i][0]=='M'){
			namesnum[i]=5;
		}else if(names[i][0]=='H'){
			namesnum[i]=6;
		}
		scanf("%d",&milk[i]);
	} 
	//names [Bessie,Elsie,Daisy,Gertie,Bessie]
	//namesnum [0,1,2,3,0]
	//milk [1,1,1,1,1]
	for(int i=0;i<n;i++){
		printf("%s ",names[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d ",namesnum[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d ",milk[i]);
	}
	printf("\n"); 
	//totalmilk[2,1,1,1,2] 
	for(int i=0;i<n;i++){
		totalmilk[namesnum[i]]+=milk[namesnum[i]];
	}
	for(int i=0;i<n;i++){
		printf("%d",totalmilk[i]);
	}
	return 0;
}
/*
5
Bessie 1
Elsie 1
Daisy 1
Gertie 1
Bessie 1
*/
