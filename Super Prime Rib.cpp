#include<bits/stdc++.h>
using namespace std;
int n;
int solution[11];

bool prime(int num){
	if(num==2){
		return true;
	}
	if(num==1){
		return false;
	}
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

void search(int step){
	if(step==n){
		int num=0;
		int pow=1;
		for(int i=0;i<n;i++){
			num+=solution[step-i-1]*pow;
			pow*=10;
		}
		if(num>=pow/10&&prime(num)==true){
			printf("%d\n",num);
		}
		return;
	}
	for(int i=0;i<10;i++){
		int num=0;
		int pow=1;
		for(int j=0;j<step;j++){
			num+=solution[step-j-1]*pow;
			pow*=10;
		}
		if(prime(num)==false){
			continue;
		}
		solution[step]=i;
		search(step+1);
	}
}

int main(){
	scanf("%d",&n);
	search(0);
	return 0;
}
