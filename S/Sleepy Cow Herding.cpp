#include<bits/stdc++.h>
using namespace std;
 


int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		swap(a,b);
	}
	if(a>c){
		swap(a,c);
	}
	if(b>c){
		swap(b,c);
	}
	if(abs(a-b)==1&&abs(b-c)==1){
		printf("0\n0\n");
		exit(0);
	}else if(abs(a-b)==2||abs(b-c)==2){
		printf("1\n");
	}else printf("2\n");
	int sort=0;
	printf("%d\n",max(b-a-1,c-b-1));
	return 0;
}
