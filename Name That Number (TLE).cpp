#include<bits/stdc++.h>
using namespace std;
int n;
int cnt=0;
char names[4620][20];
char name[20];
char namenuminchar[20];
int namenum[20];
char numtoname[10][4];
int a[4];

void func(int row){
	if(row==n){
		for(int i=0;i<n;i++){
			name[i]=numtoname[namenum[i]][a[i]];
		}
		for(int i=0;i<4617;i++){
			if(name[0]!=names[i][0]){
				continue;
			}
			if(strlen(names[i])!=n){
				continue;
			}
			if(strcmp(name,names[i])==0){
				printf("%s\n",name);
				cnt++;
			}
		} 
		return;
	}
	for(int i=0;i<3;i++){
		a[row]=i;
		func(row+1);
	}
}

int main(){
	strcpy(numtoname[2],"ABC");
	strcpy(numtoname[3],"DEF");
	strcpy(numtoname[4],"GHI");
	strcpy(numtoname[5],"JKL");
	strcpy(numtoname[6],"MNO");
	strcpy(numtoname[7],"PRS");
	strcpy(numtoname[8],"TUV");
	strcpy(numtoname[9],"WXY");
	scanf("%s",namenuminchar);
	freopen("dict.txt","r",stdin);
	for(int i=0;i<4617;i++){
		scanf("%s",names[i]);
	} 
	n=strlen(namenuminchar);
	for(int i=0;i<n;i++){
		namenum[i]=namenuminchar[i]-'0';
	}
	func(0);
	if(cnt==0){
		printf("NONE\n");
	}
	return 0;
}
