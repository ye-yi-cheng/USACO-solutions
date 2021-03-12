#include<bits/stdc++.h>
using namespace std;
int n; 
int timemaxer=-99999;
int timeminer=1000001;
int continuousmaxer=-99999;
int idlemaxer=-99999;
int continuouscnt=0;
int idlecnt=0;
int s[5000],e[5000];
bool status[1000000];



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
		if(s[i]<timeminer){
			timeminer=s[i];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=s[i]-1+1;j<=e[i]-1;j++){
			status[j]=true;
		}
	}
	for(int i=timeminer;i<timemaxer;i++){
		printf("%d", status[i]);
	}
	printf("\n");
	for(int i=timeminer;i<timemaxer;i++){
		if(status[i]==true){
			continuouscnt++;
			if(continuouscnt>continuousmaxer){
				continuousmaxer=continuouscnt;
			}
		}else{
			if(continuouscnt>continuousmaxer){
				continuousmaxer=continuouscnt;
			}
			continuouscnt=0;
		}
	}
	for(int i=timeminer;i<timemaxer;i++){
		if(status[i]==false){
			idlecnt++;
			if(idlecnt>idlemaxer){
				idlemaxer=idlecnt;
			}
		}else{
			if(idlecnt>idlemaxer){
				idlemaxer=idlecnt;
			}
			idlecnt=0;
		}
	}
	printf("%d %d\n",continuousmaxer,idlemaxer);
	return 0;
}
