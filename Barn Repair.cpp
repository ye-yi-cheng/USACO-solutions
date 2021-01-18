#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int line;
int a[2001];
int sum=0;

struct barn{
	int s;
	int e;
};

barn space[2001];

bool cmp(barn a,barn b){
	return a.e-a.s+1>b.e-b.s+1;
}

int main(){
	freopen("barn1.in","r",stdin);
	freopen("barn1.out","w",stdout);
	scanf("%d%d%d",&line,&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+m);
	if(line>=m){
		printf("%d\n",m);
		exit(0);
	}
	for(int i=0;i<m;i++){
		space[i].s=a[i];
		space[i].e=a[i+1];
	}
	sort(space,space+m-1,cmp);
	for(int i=0;i<line-1;i++){
		sum+=space[i].e-space[i].s+1-2; 
	}
	printf("%d\n",a[m-1]-a[0]+1-sum);
	return 0;
} 
