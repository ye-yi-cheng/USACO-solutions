#include<bits/stdc++.h>
using namespace std;
int n;
int a[11];
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

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=100;i<1000;i++){
		for(int j=10;j<100;j++){
			bool flag1=true;
			for(int k=intlen(i*(j%10))-1;k>=0;k--){
				int num=i*(j%10)%pow(10,k+1)/pow(10,k);
				bool flag1tmp=false;
				for(int l=0;l<n;l++){
					if(num==a[l]){
						flag1tmp=true;
						break;
					}
				}
				if(intlen(i*(j%10))!=3){
					flag1tmp=false;
				} 
				if(flag1tmp==false){
					flag1=false;
					break;
				}
			}
			if(flag1==false){
				continue;
			}
			bool flag2=true;
			for(int k=intlen(i*(j/10))-1;k>=0;k--){
				int num=i*(j/10)%pow(10,k+1)/pow(10,k);
				bool flag2tmp=false;
				for(int l=0;l<n;l++){
					if(num==a[l]){
						flag2tmp=true;
						break;
					}
				}
				if(intlen(i*(j/10))!=3){
					flag2tmp=false;
				}
				if(flag2tmp==false){
					flag2=false;
					break;
				}
			}
			if(flag2==false){
				continue;
			}
			bool flag3=true;
			for(int k=intlen(i*j)-1;k>=0;k--){
				int num=i*j%pow(10,k+1)/pow(10,k);
				bool flag3tmp=false;
				for(int l=0;l<n;l++){
					if(num==a[l]){
						flag3tmp=true;
						break;
					}
				}
				if(intlen(i*j)!=4){
					flag3tmp=false;
				}
				if(flag3tmp==false){
					flag3=false;
					break;
				}
			}
			if(flag3==false){
				continue;
			}
			bool flag4=true;
			for(int k=intlen(i)-1;k>=0;k--){
				int num=i%pow(10,k+1)/pow(10,k);
				bool flag4tmp=false;
				for(int l=0;l<n;l++){
					if(num==a[l]){
						flag4tmp=true;
						break;
					}
				}
				if(flag4tmp==false){
					flag4=false;
					break;
				}
			}
			if(flag4==false){
				continue;
			}
			bool flag5=true;
			for(int k=intlen(j)-1;k>=0;k--){
				int num=j%pow(10,k+1)/pow(10,k);
				bool flag5tmp=false;
				for(int l=0;l<n;l++){
					if(num==a[l]){
						flag5tmp=true;
						break;
					}
				}
				if(flag5tmp==false){
					flag5=false;
					break;
				}
			}
			if(flag5==false){
				continue;
			}
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
} 
