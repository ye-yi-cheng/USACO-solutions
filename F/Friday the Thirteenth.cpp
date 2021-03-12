F/*
ID: yeyiche1
TASK: friday
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;
int n,year,daysinamonth[14]={0,31,28,31,30,31,30,31,31,30,31,30,31},dateofweek=1,cnt[8];




int main(){
//	freopen("friday.in","r",stdin);
//	freopen("friday.out","w",stdout);	
	scanf("%d",&n);
	for(int i=1;i<=7;i++){
		cnt[i]=0;
	}
	for(int i=1;i<=n;i++){
		if((1900+i-1)%400==0||((1900+i-1)%4==0&&(1900+i-1)%100!=0)){
			daysinamonth[2]=29;
//			printf("__________%d年是闰年__________\n",1900+i-1); 
		} 
		else daysinamonth[2]=28;
		for(int j=1;j<=13;j++){
			for(int m=1;m<=daysinamonth[j];m++){
//				if(dateofweek<7)printf("%4d年 %2d月 %2d号是星期 %d\n",i+1900-1,j,m,dateofweek);
//				else printf("%4d年 %2d月 %2d号是星期日\n",i+1900-1,j,m);

				if(m==13){
					cnt[dateofweek]++;
				}
				dateofweek+=1;
