# Don't Be Last!
## 代码实现
### Ⅰ
```c++
#include<bits/stdc++.h>
using namespace std;
int n;
char names[8][20]={"Bessie","Elsie","Daisy","Gertie","Annabelle","Maggie","Henrietta"};
char cows[101][20];
char milk[101];
map<string,int>maper;


int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",cows[i]);
		scanf("%d",&milk[i]);
	} 
	for(int i=0;i<n;i++){
		maper[cows[i]]+=milk[i];
	}
	
	for(int i=0;i<7-1;i++){
		for(int j=0;j<7-i-1;j++){
			if(maper[names[j+1]]<maper[names[j]]){
				int tmp=maper[names[j]];
				maper[names[j]]=maper[names[j+1]];
				maper[names[j+1]]=tmp;
			}
		}
	}
	int max=-9999;
	 int cnt=0;
	for(int i=0;i<7;i++){
		printf("%d\n",maper[names[i]]);
		if(maper[names[i]]>max){
			cnt++;
			max=maper[names[i]];
		}
		if(cnt==2){
			printf("%s\n",names[i]);
			exit(0);
		}
	}
	return 0;
}  
我检查了排序部分,没有发现任何错误,再检查了找第二大的值部分,发现了一个错误。
如果运行找第二大的值部分,输入和输出是不对的,找到第二个比前面最高值大的数就停了
----------
1 2 3 4 5

1 2 3 4 5
↑

1>-99999

1 2 3 4 5
  ↑

2>1

2
```
### Ⅱ
```c++
#include<bits/stdc++.h>
using namespace std;
int n;
char names[8][20]={"Bessie","Elsie","Daisy","Gertie","Annabelle","Maggie","Henrietta"};
char cows[101][20];
char milk[101];
map<string,int>maper;


int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",cows[i]);
		scanf("%d",&milk[i]);
	} 
	for(int i=0;i<n;i++){
		maper[cows[i]]+=milk[i];
	}
	
	for(int i=0;i<7-1;i++){
		for(int j=0;j<7-i-1;j++){
			if(maper[names[j+1]]<maper[names[j]]){
				int tmp=maper[names[j]];
				maper[names[j]]=maper[names[j+1]];
				maper[names[j+1]]=tmp;
			}
		}
	}
	int max=-99999;
	int maxi=0; 
	int cnt=0;
	for(int i=0;i<7;i++){
		if(maper[names[i]]>max){
			max=maper[names[i]];
			maxi=i;
		}
	}
	for(int i=0;i<7;i++){
		if(maper[names[i]]>max&&i!=maxi){
			max=maper[names[i]];
			maxi=i;
		}
	}
	printf("%s",names[maxi]);
	return 0;
}  

改进了找第二大的值部分
```