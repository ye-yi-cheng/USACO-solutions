#include<bits/stdc++.h>
using namespace std;
int a;
int b;
int solution[11];

bool prime(int num){
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

void search(int step,int end){
	if(end%2==0){
		if(step==(end+1)/2){
			for(int i=step;i<end;i++){
				solution[i]=solution[step-(i-step+1)];
			}
			int num=0;
			int pow1=1;
			for(int i=0;i<end;i++){
				num+=solution[i]*pow1;
				pow1*=10;
			}
			int pow2=1;
			for(int i=0;i<end-1;i++){
				pow2*=10;
			}
			if(num>=pow2&&num>=a&&num<=b/**/&&prime(num)==true){
				printf("%d\n",num);
			}
			return;
		}
	}else{
		if(step==(end+1)/2){
			for(int i=step;i<end;i++){
				solution[i]=solution[step-(i-step+2)];
			}
			int num=0;
			int pow1=1;
			for(int i=0;i<end;i++){
				num+=solution[i]*pow1;
				pow1*=10;
			}
			int pow2=1;
			for(int i=0;i<end-1;i++){
				pow2*=10;
			}
			if(num>=pow2&&num>=a&&num<=b/**/&&prime(num)==true){
				printf("%d\n",num);
			}
			return;
		}
	}
	for(int i=0;i<10;i++){
		solution[step]=i;
		search(step+1,end);
	}
}

int main(){
	scanf("%d%d",&a,&b);
	for(int i=1;i<=8;i++){
		search(0,i);
	}
	return 0;
}
