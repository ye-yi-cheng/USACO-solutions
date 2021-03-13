#include<bits/stdc++.h>
using namespace std;
int base;
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
	scanf("%d",&base);
	for(int i=0;i<300;i++){
		for(int j=0;j<100;j++){
			chara[j]='\0';
		}
		trans(pow(i,2),base); 
		if(pal()==true){
			for(int j=0;j<100;j++){
				chara[j]='\0';
			}
			trans(i,base);
			printf("%s ",chara);
			for(int j=0;j<100;j++){
				chara[j]='\0';
			}
			trans(i*i,base);
			printf("%s\n",chara);
		}
	}
	return 0;
}
