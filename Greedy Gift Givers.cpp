
/*
ID: yeyiche1
TASK: gift1
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;
int n,money,recivers;
string names[11],giver,reciversname;
map<string,int>accounts;



int main(){
//	freopen("gift1.in","r",stdin);
//	freopen("gift1.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>names[i];
		accounts[names[i]]=0;
	}
	for(int i=1;i<=n;i++){
		cin>>giver;
		scanf("%d%d",&money,&recivers);
		if(recivers!=0){ 
			accounts[giver]+=money%recivers;
			accounts[giver]-=money;
			for(int j=1;j<=recivers;j++){
				cin>>reciversname;
				accounts[reciversname]+=money/recivers;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<names[i];
		printf(" %d\n",accounts[names[i]]);
	}
	return 0;
}

