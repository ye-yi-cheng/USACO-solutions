#include<bits/stdc++.h> 
using namespace std;
int n;
int a[1001][1001];
int dp[1001][1001];
int maxer=-99999;



int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	dp[0][0]=a[0][0];
	for(int i=1;i<n;i++){
		for(int j=0;j<i+1;j++){
			if(j==0){
				dp[i][j]=dp[i-1][j]+a[i][j];
			}else{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+a[i][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		if(dp[n-1][i]>maxer){
			maxer=dp[n-1][i];
		}
	}
	printf("%d\n",maxer);
	return 0;
}
