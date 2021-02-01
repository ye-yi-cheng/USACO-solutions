#include<bits/stdc++.h>
using namespace std;
int a;
int b;
int solution[11];

bool prime(int num){
	for(int i=0;i*i<num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

void search(int step,int end){
//			printf("%d\n",end);
//	if(step==(end+1)/2){
//		for(int i=step;i<end;i++){
//			solution[i]=solution[step-(i-step+1)];
//		}
//		for(int i=0;i<end;i++){
//			printf("%d ",solution[i]);
//		}
//		printf("\n");
		
//		printf("%d\n",num);
//		if(prime(num)==true&&num>=a&&num<=b){
//			printf("%d\n",num);
//		}
//		printf("sad");
//		return;
//	}
	if(end%2==0){
		if(step==(end+1)/2){
			for(int i=step;i<end;i++){
				solution[i]=solution[step-(i-step+1)];
			}
	//		for(int i=0;i<end;
			int num=0;
			int pow=1;
			for(int i=0;i<end;i++){
				num+=solution[i]*pow;
				pow*=10;
			}
			printf("%d\n",num);
			return;
		}
	}else{
		if(step==(end+1)/2-1){
			for(int i=step;i<end;i++){
				solution[i]=solution[step-(i-step)];
			}
	//		for(int i=0;i<end;
			int num=0;
			int pow=1;
			for(int i=0;i<end;i++){
				num+=solution[i]*pow;
				pow*=10;
			}
			printf("%d\n",num);
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
//	for(int i=1;i<=8;i++){
		search(0,5);
//	}
	return 0;
} 
