#include<bits/stdc++.h> 
using namespace std;
int a,b,x,y,steps=0;

int main(){
	while(scanf("%d%d%d%d",&a,&b,&x,&y)!=EOF){
		if(x>y){
			int t;
			t=x;
			x=y;
			y=t;
		}
		if(a>b){
			int t;
			t=a;
			a=b;
			b=t;
		}
		if((abs(x-a)+abs(b-y))<abs(a-b)){
			steps=abs(x-a)+abs(b-y);
		}else{
			steps=abs(a-b);
		}
		printf("%d ",steps);
	}
	return 0;
}
//		a=abs(a-b)+1;
//		b=abs(b-b)+1;
//		x=abs(x-b)+1;
//		y=abs(y-b)+1;
