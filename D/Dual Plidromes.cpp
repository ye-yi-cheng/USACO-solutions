#include<bits/stdc++.h>
using namespace std;
int n;
int start;
int cnt=0;
char chara[101];

void trans(int num,int base){
	int a[101];
	int n=0;
	while(num>=base){
		a[n]=num%base;
		num/=base;
		n++;
	}
	a[n]=num%base;
	n++;
	if(n>1){
		for(int i=0;i<n/2;i++){
			swap(a[i],a[n-i-1]);
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]<10){
			chara[i]='0'+a[i];
		}else{
			chara[i]='A'+a[i]-10;
		}
	}
}

bool pal(){
	int n=strlen(chara);
	bool flag=true;
	for(int i=0;i<n/2;i++){
		if(chara[i]!=chara[n-i-1]){
			flag=false;
			break;
		}
	}
	return flag;
}

int main(){
	scanf("%d%d",&n,&start);
	for(int i=start+1;cnt<n;i++){
		int palcnt=0;
		for(int j=2;j<=10;j++){
			for(int k=0;k<100;k++){
				chara[k]='\0';
			}
			trans(i,j);
			if(pal()){
				palcnt++;
			}
			if(palcnt==2){
				cnt++;
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}
