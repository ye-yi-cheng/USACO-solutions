#include<bits/stdc++.h>
using namespace std;
int n;
int a[101];
int cnt=0;



int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			double sum=0;
			for(int k=i;k<=j;k++){
				sum+=a[k];
			}
//			printf("%d-%d %lf/%d==%lf\n",i,j,sum,(j-i+1),sum/(j-i+1));
			bool flag=false;
			for(int k=i;k<=j;k++){
				if(a[k]==sum/(j-i+1)){
					flag=true;
				}
			}
			if(flag==true){
				cnt++;
			}
		}
	}
	printf("%d",cnt);
	return 0;
} 

