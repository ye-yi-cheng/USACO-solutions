#include<bits/stdc++.h>
using namespace std;
int n;
int r; 

struct disease{
	int position;
	bool infect;
};
 
disease a[1000];
 
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a[i].position,&a[i].infect);
	}
	int min=99999;
	for(int i=0;i<n;i++){
		if(a[i].infect==0){			
			for(int j=0;j<n;j++){
				if(j!=i&&abs(a[i].position-a[j].position)<min){
					min=abs(a[i].position-a[j].position);
				}
			}
		}
	}
	r=min-1;
	
	return 0;
}
` 
