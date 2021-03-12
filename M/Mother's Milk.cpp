#include<bits/stdc++.h>
using namespace std;
int totala;
int totalb;
int totalc;
int resulti=0;
int result[21];
bool visited[21][21][21];

void search(int a,int b,int c){
	if(visited[a][b][c]==true){
		return;
	}
	if(a==0){
		result[resulti]=c;
		resulti++;
	}
	visited[a][b][c]=true;
	if(a+b<=totalb){
		search(0,a+b,c);
	}else{
		search(a-totalb+b,totalb,c);
	}
	if(a+c<=totalc){
		search(0,b,a+c);
	}else{
		search(a-totalc+c,b,totalc);
	}
	if(b+c<=totalc){
		search(a,0,b+c);
	}else{
		search(a,b-totalc+c,totalc);
	}
	if(a+b<=totala){
		search(a+b,0,c);
	}else{
		search(totala,b-totala+a,c);
	}
	if(a+c<=totala){
		search(a+c,b,0);
	}else{
		search(totala,b,c-totala+a);
	}
	if(b+c<=totalb){
		search(a,b+c,0);
	}else{
		search(a,totalb,c-totalb+b);
	}
}

int main(){
	scanf("%d%d%d",&totala,&totalb,&totalc);
	search(0,0,totalc);
	sort(result,result+resulti);
	for(int i=0;i<resulti;i++){
		printf("%d",result[i]);
		if(i!=resulti-1){
			printf(" "); 
		}
	}
	printf("\n");
	return 0;
}
