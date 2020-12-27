#include<bits/stdc++.h>
using namespace std;
int crossi=0;
int cnt=0;
char cross[10];
char a[53]; 
char abcd[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";



int main(){
	scanf("%s",a);
	int n=strlen(a);
	for(int x=0;x<26-1;x++){
		for(int y=x+1;y<26;y++){ 
			int crossi=0;
			for(int i=0;i<n;i++){
				if(a[i]==abcd[x]||a[i]==abcd[y]){
					cross[crossi]=a[i];
					crossi++; 
				}
			}
//			printf("%c,%c\n",abcd[x],abcd[y]);
			if(cross[0]==cross[1]||cross[2]==cross[1]){
			}else{
//				printf("%s\n",cross);
				cnt++;
			}
		}  
	}
	printf("%d",cnt);
	return 0;
}
 
