# Sleepy Cow Hearding

## 题目内容
    Farmer John's 3 prize cows, Bessie, Elsie, and Mildred, are always wandering off to the far reaches of the farm! He needs your help herding them back together.
    The main field in the farm is long and skinny -- we can think of it as a number line, on which a cow can occupy any integer location. The 3 cows are currently situated at different integer locations, and Farmer John wants to move them so they occupy three consecutive locations (e.g., positions 6, 7, and 8).
    Unfortunately, the cows are rather sleepy, and Farmer John has trouble getting their attention to make them move. At any point in time, he can only make a cow move if she is an "endpoint" (either the minimum or maximum position among all the cows). When he moves a cow, he can instruct her to move to any unoccupied integer location as long as in this new location she is no longer an endpoint. Observe that over time, these types of moves tend to push the cows closer and closer together.
    Please determine the minimum and maximum number of moves possible before the cows become grouped in three consecutive locations.
## 题目翻译
    农夫约翰的三头母牛，贝西，埃尔西和米尔德里德，总是在农场的远处徘徊！他需要你帮忙把他们赶回来。
    农场里的主要田地又长又瘦——我们可以把它想象成一条数字线，在这条线上奶牛可以占据任何整数位置。这3头牛目前位于不同的整数位置，农夫约翰想移动它们，使它们占据三个连续的位置（例如，位置6、7和8）。
    不幸的是，这些牛很困，农夫约翰很难引起它们的注意，使它们移动。在任何时候，他只能让一头母牛移动，前提是她是一个“终点”（所有牛中的最小或最大位置）。当他移动一头母牛时，他可以指示她移动到任何未占用的整数位置，只要在这个新位置她不再是端点。观察到，随着时间的推移，这些类型的动作往往会把母牛推得越来越近。
    请确定奶牛在三个连续地点分组之前可能的最小和最大移动次数。

## 输入
    The input file contains one line with three space-separated integers, giving the locations of Bessie, Elsie, and Mildred. Each location is an integer in the range 1…10^9.

## 输出
    The first line of output should contain the minimum number of moves Farmer John needs to make to group the cows together. The second line of output should contain the maximum number of such moves he could conceivably make before the cows become grouped together.

## 样例输入
    4 7 9

## 样例输出
    1
    2
## 人工模拟
```c++
000400709
123456789
少
4->8
多
9->5
4->6
```
## 解题思路
### 最少
```c++
如果三个数已经相邻，那么答案就是0
如果三个数有两个数差2，那么答案就是1
不是以上两种情况，答案就是2
```
### 最多
```c++
答案是使得三个数分成两组
一组一个数,另一组两个数,1加上两组的距离
有四种方式
假设三个数从小到大分别是a,b,c 
abs(一个数的组的下标-另外一个组离一个数的组近的那个数的下标)-1
最优(最长)距离max(max(abs((b+1)-c)-1,abs((c-1)-b)-1),max(abs((b-1)-a)-1,abs((a+1)-b)-1))
``` 
## 样例手算
```c++
图例
a->b 从a移动到b

4 7 9

少
1

多
9->6
7->5
2

1 9 20

少
2

多
1->19
20->18
19->17
18->16
17->15
16->14
15->13
14->12
13->11
12->10
10
```

## 调试遇到的问题
### Ⅰ
```c++
#include<bits/stdc++.h>
using namespace std;
 
 
 
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        swap(a,b);
    }
    if(a>c){
        swap(a,c);
    }
    if(b>c){
        swap(b,c);
    }
    if(abs(a-b)==1&&abs(b-c)==1){
        printf("0\n");
    }else if(abs(a-b)==2||abs(b-c)==2||abs(a-c)==2){
        printf("1\n");
    }else printf("2\n");
    int cnt=0;
    if(!(abs(a-b)==1||abs(b-c)==1||abs(a-c)==1)){
        cnt++;
    } 
    cnt+=max(max(abs((b+1)-c)-1,abs((c-1)-b)-1),max(abs((b-1)-a)-1,abs((a+1)-b)-1));
    printf("%d\n",cnt);
    return 0;
}
多的步数%70都是比答案大1
实际上解题思路里的距离等于abs(一个数的组的下标-另外一个组离一个数的组近的那个数的下标)-1
而不是abs(一个数的组的下标-另外一个组离一个数的组近的那个数的下标)
```
### Ⅱ
```c++

#include<bits/stdc++.h>
using namespace std;



int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		swap(a,b);
	}
	if(a>c){
		swap(a,c);
	}
	if(b>c){
		swap(b,c);
	}
	if(abs(a-b)==1&&abs(b-c)==1){
		printf("0\n0\n");
		exit(0);
	}else if(abs(a-b)==2||abs(b-c)==2){
		printf("1\n");
	}else printf("2\n");
	int cnt=0;
	if(!(abs(a-b)==1||abs(b-c)==1)){
		cnt++;
	} 
	cnt+=max(max(abs((b+1)-c)-1,abs((c-1)-b)-1),max(abs((b-1)-a)-1,abs((a+1)-b)-1));
	printf("%d\n",cnt);
	return 0;
}

对了%80
改进了已经排好序直接输出两个0然后exit(0);


```

### Ⅲ
```c++
#include<bits/stdc++.h>
using namespace std;



int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		swap(a,b);
	}
	if(a>c){
		swap(a,c);
	}
	if(b>c){
		swap(b,c);
	}
	if(abs(a-b)==1&&abs(b-c)==1){
		printf("0\n0\n");
		exit(0);
	}else if(abs(a-b)==2||abs(b-c)==2){
		printf("1\n");
	}else printf("2\n");
	int sort=0;
	if(!(abs(a-b)==1||abs(b-c)==1)){
		sort=1;
	} 
	int max=-99999;
	if(a!=b+1&&c!=b+1&&abs((b+1)-c)-1>max){ 
		max=abs((b+1)-c)-1;
	}
	if(a!=c-1&&b!=c-1&&abs((c-1)-b)-1>max){
		max=abs((c-1)-b)-1; 
	}
	if(a!=b-1&&c!=b-1&&abs((b-1)-a)-1>max){
		max=abs((b-1)-a)-1;
	}
	if(b!=a+1&&c!=a+1&&abs((a+1)-b)-1>max){
		max=abs((a+1)-b)-1;
	}
	printf("%d\n",max+sort);
	return 0;
}
加了目标位置是否有其他奶牛的判断
```

### Ⅳ

```c++
#include<bits/stdc++.h>
using namespace std;



int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		swap(a,b);
	}
	if(a>c){
		swap(a,c);
	}
	if(b>c){
		swap(b,c);
	}
	if(abs(a-b)==1&&abs(b-c)==1){
		printf("0\n0\n");
		exit(0);
	}else if(abs(a-b)==2||abs(b-c)==2){
		printf("1\n");
	}else printf("2\n");
	int sort=0;
	printf("%d\n",max(b-a-1,c-b-1));
	return 0;
}
直接简化为max(b-a-1,c-b-1)
答案正确
```