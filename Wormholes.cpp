#include<bits/stdc++.h>
using namespace std;
int n;
int solution[15];
bool visited1[15];

struct hole{
	int y;
	int x;
};

hole a[15];
hole start[15];
hole end[15];
		
void search2(int x,int y){
	int nextstatus;
	int nexti;
	for(int i=0;i<n/2;i++){
		if(start[i].y==y&&start[i].x>=x){
			nextstatus=0;
			nexti=i;
		}
	}
}

void search1(int step){
	if(step==n){
		for(int i=0;i<n/2;i++){
			printf("(%d,%d)->(%d,%d)\n",a[solution[i]].x,a[solution[i]].y,a[solution[i+n/2]].x,a[solution[i+n/2]].y);
		}
		printf("\n");
		
		for(int i=0;i<n/2;i++){
			start[i].x=a[solution[i+n/2]].x;
			start[i].y=a[solution[i+n/2]].y;
		}
		for(int i=0;i<n/2;i++){
			end[i].x=a[solution[i+n/2]].x;
			end[i].y=a[solution[i+n/2]].y;
		}
		for(int i=0;i<n/2;i++){
			if(search(start[i].x,start[i].y)){
				cnt++;
			}
		}
		return;
	}
	for(int i=0;i<n;i++){
		if(step>=n/2&&i<solution[step-n/2]){
			continue;
		}
		if(visited1[i]==false){
			visited1[i]=true;
			solution[step]=i;
			search1(step+1);
			visited1[i]=false;
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i].x,&a[i].y);
	}
	search1(0);
	return 0;
}
