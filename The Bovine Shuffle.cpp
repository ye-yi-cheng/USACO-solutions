/*
ID: yeyiche1
TASK: 
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include<bits/stdc++.h>
using namespace std;
int n;
int a[101];
int names1[101];
int names2[101];
int names3[101];
int names4[101];



int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&names1[i]);
	}
	for(int i=0;i<n;i++){
		names2[i]=names1[a[i]-1];
	}
	for(int i=0;i<n;i++){
		names3[i]=names2[a[i]-1];
	}
	for(int i=0;i<n;i++){
		names4[i]=names3[a[i]-1];
	}
	for(int i=0;i<n;i++){
		printf("%d",names4[i]);
		if(i!=n-1){
			printf("\n");
		} 
	}
	return 0;
}
