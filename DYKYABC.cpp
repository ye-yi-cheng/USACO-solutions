#include<bits/stdc++.h>
using namespace std;
int a[8];



int main(){ 
	for(int i=0;i<7;i++){
		scanf("%d",&a[i]);
	}
	for(int a1=0;a1<7;a1++){
		for(int b1=0;b1<7;b1++){
			for(int c1=0;c1<7;c1++){
				for(int ab1=0;ab1<7;ab1++){
					for(int ac1=0;ac1<7;ac1++){
						for(int bc1=0;bc1<7;bc1++){
							for(int abc1=0;abc1<7;abc1++){
								if(a[a1]+a[b1]==a[ab1]&&a[a1]+a[c1]==a[ac1]&&a[b1]+a[c1]==a[bc1]&&a[a1]+a[b1]+a[c1]==a[abc1]&&
								b1!=a1&&
								c1!=a1&&c1!=b1&&
								ab1!=a1&&ab1!=b1&&ab1!=c1&&
								ac1!=a1&&ac1!=b1&&ac1!=c1&&ac1!=ab1&&
								abc1!=a1&&abc1!=b1&&abc1!=c1&&abc1!=ab1&&abc1!=ac1&&
								a[a1]<=a[b1]&&a[b1]<=a[c1]
								){
//									printf("%d %d %d %d %d %d %d \n",a[a1],a[b1],a[c1],a[ab1],a[ac1],a[bc1],a[abc1]);
									printf("%d %d %d\n",a[a1],a[b1],a[c1]);
									exit(0);
								}
							}	
						}	
					}	
				}
			}
		}
	}
	return 0;
}
