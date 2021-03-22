#include<bits/stdc++.h>
using namespace std;
int n;
int a[101];
int cnt1=0,cnt2=0;
bool happen[101];



int main(){
	scanf("%d",&n);
	happen[0]=true;
	for(int i=1;i<n;i++){
		happen[i]=false;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]!=-1){
			happen[i-a[i]]=true;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]!=-1&&a[i]>i){
			printf("-1\n");
			exit(0);
		}
	}
	a[0]=0;
	for(int i=0;i<n;i++){
		if(happen[i]==true){
			cnt1++;
		}
	}
	printf("%d ",cnt1);
	cnt2=cnt1;
	for(int i=0;i<n;i++){
		if(happen[i]!=true){
			bool flag=true;
			for(int j=0;j<n;j++){
				if(a[j]!=-1&&(i<=j&&i>=j-a[j])){
					flag=false;
				}
			}
			if(flag==true){
				cnt2++;
				happen[i]=true;
			}
		}
	}
	printf("%d\n",cnt2);
	return 0;
}
