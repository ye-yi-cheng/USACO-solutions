#include<bits/stdc++.h>
using namespace std;
int n=0;
char a[351];
int maxer=-99999;

int l(int i){
	int cnt=0;
	bool flag=false;
	char prev;
	for(int j=i-1;;j--){
		j=(j+n)%n;
		char now=a[j];
		if(cnt==n){
			break;
		}
		if(flag==true&&prev=='r'&&now=='r'){
			cnt++;
		}
		if(flag==true&&prev=='r'&&now=='b'){
			break;
		}
		if(flag==true&&prev=='r'&&now=='w'){
			cnt++;
		}
		if(flag==true&&prev=='b'&&now=='r'){
			break;
		}
		if(flag==true&&prev=='b'&&now=='b'){
			cnt++;
		}
		if(flag==true&&prev=='b'&&now=='w'){
			cnt++;
		}
		if(flag==false&&now=='r'){
			cnt++;
			prev='r';
			flag=true;
		}
		if(flag==false&&now=='b'){
			cnt++;
			prev='b';
			flag=true;
		}
		if(flag==false&&now=='w'){
			cnt++;
		}
	}
	return  cnt;
}

int r(int i){
	int cnt=0;
	bool flag=false;
	char prev;
	for(int j=i;;j++){
		j%=n;
		char now=a[j];
		if(cnt==n){
			break;
		}
		if(flag==true&&prev=='r'&&now=='r'){
			cnt++;
		}
		if(flag==true&&prev=='r'&&now=='b'){
			break;
		}
		if(flag==true&&prev=='r'&&now=='w'){
			cnt++;
		}
		if(flag==true&&prev=='b'&&now=='r'){
			break;
		}
		if(flag==true&&prev=='b'&&now=='b'){
			cnt++;
		}
		if(flag==true&&prev=='b'&&now=='w'){
			cnt++;
		}
		if(flag==false&&now=='r'){
			cnt++;
			prev='r';
			flag=true;
		}
		if(flag==false&&now=='b'){
			cnt++;
			prev='b';
			flag=true;
		}
		if(flag==false&&now=='w'){
			cnt++;
		}
	}
	return  cnt;
}

int main(){
	scanf("%d",&n);
	scanf("%s",a);
	for(int i=0;i<n;i++){
		int beads=l(i)+r(i);
		if(beads>maxer){
			maxer=beads;
		}
	}
	if(maxer>n){
		printf("%d\n",n);
	}else{
		printf("%d\n",maxer);
	}
	return 0;
}
