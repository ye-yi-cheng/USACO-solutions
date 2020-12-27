#include<bits/stdc++.h>
using namespace std;
int n; 
int maxer=-99999;
int timemaxer=-99999;
int cnt=0;
int s[5000],e[5000];
bool status[1000000];


//000011110
//111000000
//001111000



int main(){
	scanf("%d",&n);
	for(int i=0;i<1000000;i++){
		status[i]=false;
	}
	for(int i=0;i<n;i++){
		scanf("%d%d",&s[i],&e[i]);
		if(e[i]>timemaxer){
			timemaxer=e[i];
		}
	}
	for(int i=0;i<n;i++){
		cnt=0;
		for(int j=0;j<=timemaxer;j++){
			status[j]=false;
		}
//		printf("\n");
		for(int j=0;j<n;j++){
			if(j!=i){
				for(int k=s[j];k<e[j];k++){
					status[k]=true;
				}
			}
		}
//		for(int k=0;k<timemaxer;k++){
//			printf("%d",status[k]);
//		}
//		printf("\n");
		for(int j=0;j<timemaxer;j++){
			if(status[j]==true){
				cnt++;
			}
		}
		if(cnt>maxer){
			maxer=cnt;
		}
	}
	printf("%d", maxer);
	return 0;
}
//000001111
//011100000
//000111100

//011111100
//000111111

//011101111

