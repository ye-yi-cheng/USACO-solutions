#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int g;
int solution[65];

int hamdist(int a,int b){
	int binacnt=0;
	int binbcnt=0;
	int bina[21];
	int binb[21];
	while(a>=2){
		bina[binacnt]=a%2;
		a/=2;
		binacnt++;
	}
	bina[binacnt]=a;
	binacnt++;
	while(b>=2){
		binb[binbcnt]=b%2;
		b/=2;
		binbcnt++;
	}
	binb[binbcnt]=b;
	binbcnt++;
	for(int i=0;i<binacnt/2;i++){
		swap(bina[i],bina[binacnt-i-1]);
	}
	for(int i=0;i<binbcnt/2;i++){
		swap(binb[i],binb[binbcnt-i-1]);
	}
	int cnt=0;
	for(int i=0;i<abs(binacnt-binbcnt);i++){
		if(binacnt>binbcnt){
			if(bina[i]!=0){
				cnt++;
			} 
		}else if(binb[i]!=0){
			cnt++;
		}
	}
	for(int i=0;i<min(binacnt,binbcnt);i++){
		if(binacnt>binbcnt){
			if(bina[i+binacnt-binbcnt]!=binb[i]){
				cnt++;
			}
		}else if(bina[i]!=binb[i+binbcnt-binacnt]){
			cnt++;
		}
	}
	return cnt;
}

void dfs(int step){
	if(step==n){
		for(int i=0;i<n;i++){
			printf("%d",solution[i]);
			if(i!=n-1&&(i+1)%10!=0){
				printf(" ");
			}
			if((i+1)%10==0&&i!=n-1){
				printf("\n");
			}
		}
		printf("\n");
		exit(0);
	}
	int tmp;
	if(step==0){
		tmp=0;
	}else{
		tmp=solution[step-1]+1;
	}
	for(int i=tmp;i<pow(2,m);i++){
		bool flag=true;
		for(int j=0;j<step;j++){
			if(hamdist(i,solution[j])<g){
				flag=false;
				break;
			}
		}
		if(flag==true){
			solution[step]=i;
			dfs(step+1);
		}
	}
}

int main(){
	scanf("%d%d%d",&n,&m,&g);
	dfs(0);
	return 0;
}
