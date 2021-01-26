#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int loops=0;
char cowphabet[30];
char heard[1001]; 



int main(){
	scanf("%s",cowphabet);
	scanf("%s",heard);
	for(;true;){
//		printf("%d\n",cnt);
		for(int i=0;i<26;i++){
			if(heard[cnt]==cowphabet[i]){
				cnt++;
			}
			if(cnt==strlen(heard)){
				printf("%d",loops+1);
				exit(0);
			}
		}
		loops++;
	}
	return 0;
}
