#include<bits/stdc++.h>
using namespace std;
int n;
int fracercnt=0;

struct fracer{
	int up;
	int down;
};

fracer fracers[25601];

bool cmpfracer(fracer a,fracer b){
	if(a.down==b.down){
		return a.up<b.up;
	}else if(a.up==b.up){
		return a.down>b.down;
	}else{
		return a.up*b.down<b.up*a.down; 
	} 
}

int gcd(int num1,int num2){
	if(num1%num2==0){
		return num2;
	}
	return gcd(num2,num1%num2);
}

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(gcd(i,j)==1){
				fracers[fracercnt].up=j;
				fracers[fracercnt].down=i;
				fracercnt++;
			}
		}
	}
	sort(fracers,fracers+fracercnt,cmpfracer);
	printf("0/1\n");
	for(int i=0;i<fracercnt;i++){
		printf("%d/%d\n",fracers[i].up,fracers[i].down);
	}
	return 0;
} 
