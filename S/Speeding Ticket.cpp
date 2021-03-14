#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[101];
int b[101];
int position;
int maxer=-99999;

struct drive{
	int next;
	int speed;
};

drive limit[101];
drive journey[101];

int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d%d",&limit[i].next,&limit[i].speed);
	}
	for(int i=0;i<m;i++){
		scanf("%d%d",&journey[i].next,&journey[i].speed);
	}
	position=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<limit[i].next;j++){
			a[position]=limit[i].speed;
			position++;
		}
	}
	position=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<journey[i].next;j++){
			b[position]=journey[i].speed;
			position++;
		}
	}
	for(int i=0;i<100;i++){
		if(b[i]>a[i]){
			
			if((b[i]-a[i])>maxer){
				maxer=b[i]-a[i];
			}
		}
	}  
	if(maxer==-99999){
		printf("0\n");
	}else{
		printf("%d\n",maxer);
	}
	return 0;
} 
