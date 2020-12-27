#include<bits/stdc++.h>
using namespace std;
int n,cnt=0;
char a[11][11];

void tip(int y,int x){
	for(int i=0;i<=y;i++){
		for(int j=0;j<=x;j++){
			if(a[i][j]=='1'){
				a[i][j]='0';
			}else if(a[i][j]=='0'){
				a[i][j]='1';
			}
		}
	}
//	printf("%d %d\n",y,x);
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	printf("\n");
	cnt++; 
}

void downsize(int n){
	for(int i=n-1;i>=0;i--){
		if(a[i][n-1]=='1')tip(i,n-1);
	}
	for(int i=n-2;i>=0;i--){
		if(a[n-1][i]=='1')tip(n-1,i);
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	printf("\n");
	for(int i=n;i>=0;i--){
		downsize(i);
	}
	printf("%d",cnt);
	return 0;
} 
