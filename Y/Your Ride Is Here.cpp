#include<bits/stdc++.h>
int main(){
	int x=1,y=1;   
	char a[7],b[7];
	scanf("%s%s",&a,&b); 
	int i=0;
	for (;a[i]!=0;i++)x*=(a[i]-64);
	for (i=0;b[i]!=0;i++)y*=(b[i]-64);
	if(x%47==y%47)printf("GO\n");
	else printf("STAY\n");
	return 0;
}
