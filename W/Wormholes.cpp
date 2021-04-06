#include<bits/stdc++.h>
#define walk 0
#define teleport 1
using namespace std;
int n;
int cnt=0;
int solution[15];
int nextpoint[15];
int connect[15];
int visited2[15];
bool visited1[15];

struct wormhole{
	int x;
	int y;
};

wormhole a[15];

bool cmp(wormhole a,wormhole b){
	if(a.y!=b.y){
		return a.y<b.y;
	}else{
		return a.x<b.x;
	}
}

bool search2(int pos,int status){
	if(visited2[pos]==2){
		return true;
	}
	if(nextpoint[pos]==-1&&status==teleport){
		return false;
	}
	if(status==walk){
		visited2[pos]++;
		return search2(connect[pos],teleport);
	}else{
		return search2(nextpoint[pos],walk);
	}
}

void search1(int step){
	if(step-1>0&&step-1<n/2){
		if(solution[step-1]<solution[step-2]){
			return;
		}
	}
	if(step-1>=n/2){
		if(solution[step-1]<solution[step-1-n/2]){
			return;
		}
	}
	if(step==n){
		for(int i=0;i<n/2;i++){
			if(solution[i+n/2]<solution[i]){
				return;
			}
		}
		for(int i=1;i<n/2;i++){
			if(solution[i]<solution[i-1]){
				return;
			}
		}
		for(int i=0;i<n/2;i++){
			connect[solution[i]]=solution[i+n/2];
			connect[solution[i+n/2]]=solution[i];
		}
		bool flag=false;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				visited2[j]=0;
			}
			if(search2(i,walk)==true){
				flag=true;
				break;
			}
		} 
		if(flag==true){
			cnt++;
		}
		return;
	}
	for(int i=0;i<n;i++){
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
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		bool flag=false;
		for(int j=0;j<n;j++){
			if(a[i].y==a[j].y&&a[j].x>a[i].x){
				nextpoint[i]=j;
				flag=true;
				break;
			}
		}
		if(flag==false){
			nextpoint[i]=-1;
		}
	}
	search1(0);
	printf("%d\n",cnt);
	return 0;
} 
