#include<bits/stdc++.h>
using namespace std;
int a[5];
int maxer=-999999;
int miner=999999;



int main(){
	for(int i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1]){
		int tmp=a[0];
		a[0]=a[1];
		a[1]=tmp;
	}
	if(a[2]>a[3]){
		int tmp=a[2];
		a[2]=a[3];
		a[3]=tmp;
	}
	if(a[0]>a[2]){
		int tmp=a[0];
		a[0]=a[2];
		a[2]=tmp;
		tmp=a[1];
		a[1]=a[3];
		a[3]=tmp;
	}
//	printf("%d %d\n",a[0],a[1]);
//	printf("%d %d\n",a[2],a[3]);
	if((a[0]<a[2]&&a[2]<a[3]&&a[3]<a[1])||(a[0]<a[2]&&a[2]<a[1]&&a[1]<a[3])){
		for(int i=0;i<4;i++){
			if(a[i]>maxer){
				maxer=a[i];
			}
			if(a[i]<miner){
				miner=a[i];
			}
		}
		printf("%d",maxer-miner);
		exit(0);
	}else if(a[0]==a[2]||a[1]==a[3]){
		for(int i=0;i<4;i++){
			if(a[i]>maxer){
				maxer=a[i];
			}
			if(a[i]<miner){
				miner=a[i];
			}
		}
		printf("%d",maxer-miner);
		exit(0);
	}else{
		printf("%d",a[1]-a[0]+a[3]-a[2]);
		exit(0);
	}
	return 0;
} 
