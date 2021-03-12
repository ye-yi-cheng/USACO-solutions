#include<bits/stdc++.h> 
using namespace std;
int n;
int cnt=0;
int production[3]={7,7,7};
bool pictures[3]={false,false,false};
int maxer=-99999;

struct milking_cow{
	int time;
	int name;
	int change;
};

milking_cow a[101];

bool cmp(milking_cow a,milking_cow b){
	return a.time<b.time;
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char tmpname[11];
		scanf("%d %s %d",&a[i].time,tmpname,&a[i].change);
		if(tmpname[0]=='B'){
			a[i].name=0;
		}else if(tmpname[0]=='E'){
			a[i].name=1;
		}else if(tmpname[0]=='M'){
			a[i].name=2;
		}
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		production[a[i].name]+=a[i].change;
		printf("%d:%d %d %d\n",i,production[0],production[1],production[2]);
		for(int j=0;j<3;j++){     
			if(production[j]>maxer){
				maxer=production[j];
				if(pictures[0]<=production[j]||pictures[1]<=production[j]||pictures[2]<=production[j]){
					pictures[j]=true;
					printf("%dÉÏ°ñ\n",j);
					cnt++;
				}
			}
		}
		for(int j=0;j<3;j++){     
			if(production[j]<maxer){
				pictures[j]=false;
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
}
