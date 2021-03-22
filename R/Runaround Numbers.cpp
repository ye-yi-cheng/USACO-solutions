#include <bits/stdc++.h>
using namespace std;
int n;

bool check(int num){
	int numlen=0;
	int bin[11];
	int dispnum[11];
	bool visited[11];
	while(num!=0){
		dispnum[numlen]=num%10;
		num/=10;
		numlen++; 
	}
	for(int i=0;i<10;i++){
		bin[i]=0;
	}
	for(int i=0;i<numlen;i++){
		visited[i]=false; 
	}
	for(int i=0;i<numlen;i++){
		bin[dispnum[i]]++;
	}
	for(int i=0;i<10;i++){
		if(bin[i]>1){
			return false;
		}
	}
	for(int i=0;i<numlen/2;i++){
		swap(dispnum[i],dispnum[numlen-i-1]);
	}
	for(int i=0;i<numlen;i++){
		if(dispnum[i]%numlen==0){
			return false;
		}
	}
	int pointer=0;
	while(visited[pointer]==false){
		visited[pointer]=true;
		pointer=(pointer+dispnum[pointer])%numlen;
	}
	if(pointer!=0){
		return false;
	}
	for(int i=0;i<numlen;i++){
		if(visited[i]==false){
			return false;
		}
	}
	return true;
}

int main(){
	scanf("%d",&n);
	for(int i=n+1;;i++){
		if(check(i)==true){
			printf("%d\n",i);
			exit(0);
		}
	}
	return 0;
} 
