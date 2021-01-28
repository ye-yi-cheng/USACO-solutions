/*
ID: yeyiche1 
LANG: C++
TASK: ariprog
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int doublesquare[62501];
bool isdoublesquare[125001];

struct sequence{
	int start;
	int difference;
};

sequence result[62501];

bool cmp(sequence a,sequence b){
	if(a.difference!=b.difference){
		return a.difference<b.difference;
	}else{
		return a.start<b.start;
	}
}

int main(){
	//	freopen("skidesign.in","r",stdin);
	//	freopen("skidesign.out","w",stdout);
	scanf("%d",&n);
	scanf("%d",&m);
	int tmpi1=0;
	for(int i=0;i<m*m*2;i++){
		isdoublesquare[i]=false;
	}
	for(int i=0;i<=m;i++){
		for(int j=0;j<=m;j++){
			doublesquare[tmpi1]=i*i+j*j;
			isdoublesquare[doublesquare[tmpi1]]=true;
			tmpi1++;
		}
	}
	int tmpi2=0;
	sort(doublesquare,doublesquare+tmpi1);
	int uniquetmpi1=unique(doublesquare,doublesquare+tmpi1)-doublesquare;
	for(int i=0;i<uniquetmpi1;i++){
		printf("%d ",doublesquare[i]);
	}
	printf("\n");
	for(int i=0;i<uniquetmpi1;i++){
		for(int j=i+1;j<uniquetmpi1;j++){
			bool flag=true;
			int k=0;
			int l=i;
			for(;k<n-1;k++){
				l+=j-i;
				if(isdoublesquare[l]==false){
					flag=false;
					break;
				}
			}
			if(flag==true){
				result[tmpi2].start=i;
				result[tmpi2].difference=j-i;
				tmpi2++;
			}
		}
	}
	sort(result,result+tmpi2,cmp);
	for(int i=0;i<tmpi2;i++){
		printf("%d %d\n",result[i].start,result[i].difference);
	}
	return 0;
}
