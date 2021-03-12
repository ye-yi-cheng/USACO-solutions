#include<bits/stdc++.h> 
using namespace std;
int n;
int a[1001];
int odd[1001];
int even[1001];
int evenn=0;
int oddn=0;
int cnt=0;



int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			even[evenn]=a[i];
			evenn++;
		}else{
			odd[oddn]=a[i];
			oddn++;
		}
	}
	cnt+=min(oddn,evenn)*2;
	if(oddn>evenn){
		cnt+=(oddn-evenn)/3*2;
		if((oddn-evenn)%3==2){
			cnt++;
		}
		if((oddn-evenn)%3==1){
			cnt--;
		}
	}else if(evenn>oddn){
		cnt++;
	}
	printf("%d\n",cnt);
	return 0;
} 

