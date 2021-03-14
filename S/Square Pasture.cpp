#include<bits/stdc++.h>
using namespace std;
int col[5],row[5];
int maxer=-99999;
int miner=99999;

struct Node{
	int y,x;
};

Node a,b;

int main(){
	for(int i=0;i<4;i++){
		scanf("%d%d",&col[i],&row[i]);
	}
	for(int i=0;i<4;i++){
		if(row[i]<miner){
			miner=row[i];
		}
	}
	a.y=miner;
	miner=99999;
	for(int i=0;i<4;i++){
		if(col[i]<miner){
			miner=col[i];
		}
	}
	a.x=miner;
	miner=99999;
	for(int i=0;i<4;i++){
		if(row[i]>maxer){
			maxer=row[i];
		}
	}
	b.y=maxer;
	maxer=-99999;
	for(int i=0;i<4;i++){
		if(col[i]>maxer){
			maxer=col[i];
		}
	}
	b.x=maxer;
	maxer=-99999;
	int sidelength=max(abs(a.x-b.x),abs(a.y-b.y));
	printf("%d",sidelength*sidelength);
	return 0;
}

