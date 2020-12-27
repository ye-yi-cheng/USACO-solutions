#include<bits/stdc++.h>
using namespace std;
int n,cnt=0; 

struct cow{
	int identity,position;
};

cow a[101];

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i].identity,&a[i].position);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			bool breaker=false;
			if(a[i].identity==a[j].identity&&a[i].position!=a[j].position){ 
				cnt++;
				break;
			}else if(a[i].identity==a[j].identity){
				break;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}

