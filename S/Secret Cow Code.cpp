#include<bits/stdc++.h>
using namespace std;
long long n;
long long m;
char a[10001];

void func(long long num){
	if(num<=strlen(a)){
		printf("%c\n",a[num-1]);
		exit(0);
	}
	long long pow=1;
	for(;strlen(a)*pow+1<=num;){
		if(strlen(a)*pow+1==num){
			func(num-1);
			return;
		}
		pow*=2;
	}
	func(num-(strlen(a)*pow/2+1));
	return;
}

int main(){
	scanf("%s",a);
	scanf("%lld",&m);
	func(m);
	return 0;
} 
