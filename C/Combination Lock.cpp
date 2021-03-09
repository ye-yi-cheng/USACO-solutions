#include<bits/stdc++.h>
using namespace std;
int n;
int cnt=0;
int a,b,c,d,e,f;



int main(){
	scanf("%d",&n);
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(
				(
				(abs(i-a)<=2||n-abs(i-a)<=2)&&
				(abs(j-b)<=2||n-abs(j-b)<=2)&&
				(abs(k-c)<=2||n-abs(k-c)<=2)
				)
				||
				(
				(abs(i-d)<=2||n-abs(i-d)<=2)&&
				(abs(j-e)<=2||n-abs(j-e)<=2)&&
				(abs(k-f)<=2||n-abs(k-f)<=2)
				)
				){
					cnt++;
				}
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
} 
