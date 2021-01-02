#include<bits/stdc++.h>
using namespace std;
char numnameinchar[20];
int n;
char names[4617][20];
char numnames[4617][20];
int cnt=0;



int main(){
	scanf("%s",numnameinchar);
	freopen("dict.txt","r",stdin);
	for(int i=0;i<4617;i++){
		scanf("%s",names[i]);
	} 
	n=strlen(numnameinchar);
	for(int i=0;i<4617;i++){
		for(int j=0;j<strlen(names[i]);j++){
			if(names[i][j]=='A'||names[i][j]=='B'||names[i][j]=='C'){
				numnames[i][j]='2';
			}else if(names[i][j]=='D'||names[i][j]=='E'||names[i][j]=='F'){
				numnames[i][j]='3';
			}else if(names[i][j]=='G'||names[i][j]=='H'||names[i][j]=='I'){
				numnames[i][j]='4';
			}else if(names[i][j]=='J'||names[i][j]=='K'||names[i][j]=='L'){
				numnames[i][j]='5';
			}else if(names[i][j]=='M'||names[i][j]=='N'||names[i][j]=='O'){
				numnames[i][j]='6';
			}else if(names[i][j]=='P'||names[i][j]=='R'||names[i][j]=='S'){
				numnames[i][j]='7';
			}else if(names[i][j]=='T'||names[i][j]=='U'||names[i][j]=='V'){
				numnames[i][j]='8';
			}else{ 
				numnames[i][j]='9';
			}
		}
	}
	for(int i=0;i<4617;i++){
		if(strcmp(numnameinchar,numnames[i])==0){
			printf("%s\n",names[i]);
			cnt++; 
		}
	} 
	if(cnt==0){
		printf("NONE\n");
	}
	return 0;
}
