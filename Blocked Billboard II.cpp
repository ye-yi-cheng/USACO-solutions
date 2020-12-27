#include<bits/stdc++.h>
using namespace std;
int l_1,r_1,l_2,r_2;
int x_1,y_1,x_2,y_2 ;
int sum,a,b,c,d;
 
int abs(int x){
	if(x<0){
		return -x;
	}
	return x;
}
 
int main(){
	scanf("%d%d%d%d%d%d%d%d",&l_1,&r_1,&l_2,&r_2,&x_1,&y_1,&x_2,&y_2);
	if(x_1<=l_1&&y_1<=r_1&&x_2>=l_2&&y_2>=r_2){
		printf("%d",0);//割草机广告被"呗"了 
	}else if(x_1>l_1&&y_1<=r_1&&x_2>=l_2&&y_2>=r_2&&x_1<l_2){
		printf("%d",abs(r_2-r_1)*abs(x_1-l_1));
	}else if(y_2<r_2&&r_2>r_1&&x_2>=l_2&&x_1<=l_1&&y_1<=r_1){
		printf("%d",abs(l_2-l_1)*abs(r_2-y_2));
	}else if(x_2>l_1&&x_2<l_2&&y_2>=r_2&&x_1<=l_1&&y_1<=r_1){
		printf("%d",abs(r_2-r_1)*abs(l_2-x_2));
	}else if(y_1<r_2&&y_1>r_1&&x_1<=l_1&&x_2>=l_2&&y_2>=r_2){
		printf("%d",abs(l_2-l_1)*abs(y_1-r_1));
	}else{
		printf("%d",abs(l_2-l_1)*abs(r_2-r_1));
	}
	return 0;
}

