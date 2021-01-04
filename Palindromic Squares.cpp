#include<bits/stdc++.h>
using namespace std;
int base;

bool pal(int num){
	int n;
	int a[101];
	bool flag=true;
	for(int i=0;;i++){
		if(num>=pow(10,i)&&num<pow(10,i+1)){
			n=i+1;
			break;
		}
	}
	for(int i=0;i<n;i++){
		a[i]=(num%int(pow(10,n-i+1)))/pow(10,n-i);
	}
	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-i-1]){
			flag=false;
			break;
		} 
	}
	return flag;
}

int trans(int num,int base){
	int n;
	int a[101];
	for(int i=0;;i++){
		if(num>=pow(10,i)&&num<pow(10,i+1)){
			n=i+1;
			break;
		}
	}
	int i=0;
	while(num>=base){
		a[i]=num%base;
		num%=base;
	}
	for(int j=0;j<i;j++){
		num+=a[j]*pow(10,j);
	}
	return num;
}

int main(){
	scanf("%d",&base);
	printf("help");
	for(int i=0;i<300;i++){
		printf("%d\n",trans(pow(i,2),base));
		if(pal(trans(pow(i,2),base))==true){
			printf("%d %d\n",trans(i,base),trans(pow(i,2),base));
		}
	}
	return 0;
}
