#include<bits/stdc++.h>
using namespace std;
int n;
int maxer=-99999;

struct cow{
	int x,y;
};

cow a[101];

bool cmp(cow a,cow b){
	return a.x<b.x;
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i].x,&a[i].y);
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		if(a[i].x>=maxer){
			maxer=a[i].x+a[i].y;
		}else{
			maxer+=a[i].y;
		}
	}
	printf("%d",maxer);
	return 0;
}

