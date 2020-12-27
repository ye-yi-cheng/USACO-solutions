#include<bits/stdc++.h>
using namespace std;
char a[11][11];

struct landmark{
	int y;
	int x;
};

landmark barn;
landmark lake;

int func(){
	if(barn.y!=lake.y&&barn.x!=lake.x){
		return abs(barn.y-lake.y)-1+abs(barn.x-lake.x)-1+1;
	}else if(barn.x==lake.x){
		return abs(barn.y-lake.y)-1+2; 
	}else if(barn.y==lake.y){
		return abs(barn.x-lake.x)-1+2;
}

int main(){
	for(int i=0;i<10;i++){
		scanf("%s",a[i]);
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(a[i][j]=='B'){
				barn.y=i;
				barn.x=j;
			} 
			if(a[i][j]=='L'){
				lake.x=j;
			}
		}
	}
	printf("%d\n",func());
	return 0;
}
