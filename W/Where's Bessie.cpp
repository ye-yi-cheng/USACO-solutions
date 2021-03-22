#include<bits/stdc++.h>
using namespace std;
int n;
char colorcnt[257];
char a[21][21]; 



int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	
	for(int x1=0;x1<n;x1++){
		for(int y1=0;y1<n;y1++){
			for(int x2=0;x2<n;x2++){
				for(int y2=0;y2<n;y2++){
					for(int i=0;i<256;i++){
						colorcnt[i]=0;
					}
					for(int i=x1;i<x2;i++){
						for(int j=y1;j<y2;j++){
							colorcnt[int(a[i][j])]++;
						}
					}
					printf("x1:%d y1:%d x2:%d y2:%d \n",x1,y1,x2,y2);
					for(int i=0;i<256;i++){
						printf("%d ",colorcnt[i]);
					}
					printf("\n");
				}
			}
		}
	}
	
	return 0;
}
