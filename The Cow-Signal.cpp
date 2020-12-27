#include<bits/stdc++.h>
using namespace std;



int main(){
    int n,m,t;
    char a[20][20],b[200];
    scanf("%d%d%d",&n,&m,&t);
    for(int i=0;i<n;i++){
		scanf("%s",a[i]); 
	} 
    for(int i=0;i<n;i++){ 
        for(int j=0;j<200;j++)b[j]='!';
        for(int j=0;j<m;j++){
        	b[j*t]=a[i][j];
        	for(int k=1;k<t;k++){
				b[j*t+k]=b[j*t];
			}
        }
        for(int j=0;j<t;j++){
	        for(int k=0;k<m*t;k++){
	        	printf("%c",b[k]);
			}
        	printf("\n");
        }
    }
}

