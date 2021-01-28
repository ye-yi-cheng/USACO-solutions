/*
ID: yeyiche1 
LANG: C++
TASK: skidesign
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int sum=0;
int miner=9999999;
int a[1001];


void calc(int available){
	sum=0;
	for(int i=0;i<n;i++){
		if(a[i]<available){
			sum+=(available-a[i])*(available-a[i]);
		}
		if(a[i]>available+17){
			sum+=(a[i]-available-17)*(a[i]-available-17);
		}
	}
	if(sum<miner){
		miner=sum;
	}
}

int main(){
//	freopen("skidesign.in","r",stdin);
//	freopen("skidesign.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<83;i++){
		calc(i);
	}
	printf("%d\n",miner);
	return 0;
} 
