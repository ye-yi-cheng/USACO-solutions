/*
ID: yeyiche1
TASK: transform
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;
int n;
char a[11][11];
char b[11][11];

void equal(){
	bool flag=true;
	for(int i=0;i<n;i++){
		bool breaker=false;
		for(int j=0;j<n;j++){
			if(a[i][j]!=b[i][j]){
				flag=false;
				breaker=true;
				break;
			}
		}
		if(breaker==true){
			break;
		}
	}
	if(flag==true){
		printf("6\n");
		exit(0);
	}
}



void clockwise180(){
	bool flag=true;
	for(int i=0;i<n;i++){
		bool breaker=false;
		for(int j=0;j<n;j++){
			if(b[i][j]!=a[n-i-1][n-j-1]){
				flag=false;
				breaker=true;
				break;
			}
		}
		if(breaker==true){
			break;
		}
	}
	if(flag==true){
		printf("2\n");
		exit(0);
	}
}

void clockwise90(){
	bool flag=true;
	for(int i=0;i<n;i++){
		bool breaker=false;
		for(int j=0;j<n;j++){
			if(b[i][j]!=a[n-j-1][i]){
				flag=false;
				breaker=true;
				break;
			}
		}
		if(breaker==true){
			break;
		}
	}
	if(flag==true){
		printf("1\n");
		exit(0);
	}
}

void clockwise270(){
	bool flag=true;
	for(int i=0;i<n;i++){
		bool breaker=false;
		for(int j=0;j<n;j++){
			if(b[i][j]!=a[j][n-i-1]){
				flag=false;
				breaker=true;
				break;
			}
		}
		if(breaker==true){
			break;
		}
	}
	if(flag==true){
		printf("3\n");
		exit(0);
	}
}

void reflection(){
	bool flag=true;
	for(int i=0;i<n;i++){
		bool breaker=false;
		for(int j=0;j<n;j++){
			if(b[i][j]!=a[i][n-j-1]){
				flag=false;
				breaker=true;
				break;
			}
		}
		if(breaker==true){
			break;
		}
	}
	if(flag==true){
		printf("4\n");
		exit(0);
	}
}

void turnreflection(){
	for(int j=0;j<n/2;j++){
		for(int i=0;i<n;i++){
			swap(a[i][j],a[i][n-j-1]);
		}
	}
	bool flag=true;
	for(int i=0;i<n;i++){
		bool breaker=false;
		for(int j=0;j<n;j++){
			if(a[i][j]!=b[i][j]){
				flag=false;
				breaker=true;
				break;
			}
		}
		if(breaker==true){
			break;
		}
	}
	if(flag==true){
		printf("5\n");
		exit(0);
	}
	flag=true;
	for(int i=0;i<n;i++){
		bool breaker=false;
		for(int j=0;j<n;j++){
			if(b[i][j]!=a[n-i-1][n-j-1]){
				flag=false;
				breaker=true;
				break;
			}
		}
		if(breaker==true){
			break;
		}
	}
	if(flag==true){
		printf("5\n");
		exit(0);
	}
	flag=true;
	for(int i=0;i<n;i++){
		bool breaker=false;
		for(int j=0;j<n;j++){
			if(b[i][j]!=a[n-j-1][i]){
				flag=false;
				breaker=true;
				break;
			}
		}
		if(breaker==true){
			break;
		}
	}
	if(flag==true){
		printf("5\n");
		exit(0);
	}
	flag=true;
	for(int i=0;i<n;i++){
		bool breaker=false;
		for(int j=0;j<n;j++){
			if(b[i][j]!=a[j][n-i-1]){
				flag=false;
				breaker=true;
				break;
			}
		}
		if(breaker==true){
			break;
		}
	}
	if(flag==true){
		printf("5\n");
		exit(0);
	}
	flag=true;
	for(int i=0;i<n;i++){
		bool breaker=false;
		for(int j=0;j<n;j++){
			if(b[i][j]!=a[i][n-j-1]){
				flag=false;
				breaker=true;
				break;
			}
		}
		if(breaker==true){
			break;
		}
	}
	if(flag==true){
		printf("5\n");
		exit(0);
	}
} 

void check(){
	clockwise90();
	clockwise180();
	clockwise270();
	reflection();
	turnreflection();
	equal();
	printf("7\n");
	exit(0);
}




int main(){
	freopen("transformx.in","r",stdin);
	freopen("transform.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%s",b[i]);
	}
	check();
	return 0;
}

