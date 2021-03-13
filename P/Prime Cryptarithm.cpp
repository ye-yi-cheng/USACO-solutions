#include<bits/stdc++.h>
using namespace std;
int n;
int a[11];
int solution[11];
int cnt=0;

int pow(int num,int times){
	int sum=1;
	for(int i=0;i<times;i++){
		sum*=num;
	}
	return sum;
}

int intlen(int num){
	for(int i=0;i<10;i++){
		if(num>=pow(10,i)&&num<pow(10,i+1)){
			return i+1;
		}
	}
} 

bool contain(int num,int len){
	bool flag=true;
	for(int i=intlen(num)-1;i>=0;i--){
		int numtmp=num%pow(10,i+1)/pow(10,i);
		bool flagtmp=false;
		for(int j=0;j<n;j++){
			if(numtmp==a[j]){
				flagtmp=true;
			}
		}
		if(flagtmp==false){
			flag=false;
			break;
		}
	}
	if(intlen(num)!=len){
		flag=false;
	}
	return flag;
}

void func(int step){
	if(step==5){
		if(
		contain((solution[0]*100+solution[1]*10+solution[2])*(solution[3]*10+solution[4]),4)==true&&
		contain((solution[0]*100+solution[1]*10+solution[2])*(solution[3]),3)==true&&
		contain((solution[0]*100+solution[1]*10+solution[2])*(solution[4]),3)==true
		){
			cnt++;
		}
		return;
	}
	for(int i=0;i<n;i++){
		solution[step]=a[i];
		func(step+1);
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	func(0);
	printf("%d\n",cnt);
	return 0;
} 
