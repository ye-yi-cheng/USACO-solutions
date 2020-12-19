# Square Pasture

## 题目内容
    Farmer John has decided to update his farm to simplify its geometry. Previously, his cows grazed in two rectangular fenced-in pastures. Farmer John would like to replace these with a single square fenced-in pasture of minimum size that still covers all the regions of his farm that were previously enclosed by the former two fences.
    Please help Farmer John figure out the minimum area he needs to make his new square pasture so that if he places it appropriately, it can still cover all the area formerly covered by the two older rectangular pastures. The square pasture should have its sides parallel to the x and y axes.
  
## 题目翻译
    以前，他的牛在两个长方形围栏的牧场上吃草。农场主约翰想用一个正方形的牧场来代替这些牧场，牧场的最小面积仍然覆盖着他农场的所有区域，这些区域以前都是由前两个围栏围起来的。
    请帮助农夫约翰计算出他需要的最小面积，以使他的新的方形牧场，如果他放置适当，它仍然可以覆盖所有的面积，以前覆盖的两个老矩形牧场。方形牧场的侧面应与x轴和y轴平行。

## 输入
    The first line in the input file specifies one of the original rectangular pastures with four space-separated integers x1 y1 x2 y2, each in the range 0…10. The lower-left corner of the pasture is at the point (x1,y1), and the upper-right corner is at the point (x2,y2), where x2>x1 and y2>y1.
    The second line of input has the same 4-integer format as the first line, and specifies the second original rectangular pasture. This pasture will not overlap or touch the first pasture.

## 输出
    The output should consist of one line containing the minimum area required of a square pasture that would cover all the regions originally enclosed by the two rectangular pastures.

## 样例输入
    6 6 8 8
    1 8 4 9

## 样例输出
    49

## 人工模拟
```c++

0 0 0 0 0 0 0 0  

0 0 0 0 0 0 0 0

0 0 0 0 0 0 0 0

0 0 0 0 0 0 0 0

0 0 0 0 0 0 0 0

0 0 0 0 0 a a a

0 0 0 0 0 a a a 

b b b b 0 a a a

b b b b 0 0 0 0

 (8-1)*(8-1)
=7*7
=49

```

## 解题思路
```c++
找出最左边的点(a)和最上边的点(b)的坐标

新建一个点(A)在(a.x,b.y)的位置

找出最右边的点(c)和最下边的点(d)的坐标

新建一个点(B)在(c.x,d.y)的位置

输出pow(max(A.x-B.x,A.y-B.y),2);
```

## 样例手算
```c++
图例
(y,x) y行x列
A     解题思路中的A
B     解题思路中的B

6 6 8 8
1 8 4 9
A(6,1)
B(9,8)
面积:
 pow(8-1,2)
=7*7
=49

6 1 2 10
4 6 6 7
A(1,2)
B(10,6)
面积:
 pow(10-1,2)
=9*9
=81


4 5 8 4
9 10 9 3
A(3,4)
B(10,9)
面积:
 pow(10-3,2)
=7*7
=49

10 5 10 10
6 7 6 4
A(4,6)
B(10,10)
面积:
 pow(10-4,2)
=6*6
=36

5 8 6 9
3 5 7 2
A(2,3)
B(9,7)
面积:
 pow(9-2,2)
=7*7
=49

2 3 6 1
2 5 6 7

4 1 10 3
6 8 9 9

7 4 10 6
9 3 6 9

2 6 8 10
3 7 3 6

10 7 1 8
8 9 1 9

2 3 6 5
10 6 4 4
```

## 程序
```c++
#include<bits/stdc++.h>
using namespace std;
int col[5],row[5];
int maxer=-99999;
int miner=99999;

struct Node{
	int y,x;
};

Node a,b;

int main(){
	for(int i=0;i<4;i++){
		scanf("%d%d",&col[i],&row[i]);
	}
	for(int i=0;i<4;i++){
		if(row[i]<miner){
			miner=row[i];
		}
	}
	a.y=miner;
	miner=99999;
	for(int i=0;i<4;i++){
		if(col[i]<miner){
			miner=col[i];
		}
	}
	a.x=miner;
	miner=99999;
	for(int i=0;i<4;i++){
		if(row[i]>maxer){
			maxer=row[i];
		}
	}
	b.y=maxer;
	maxer=-99999;
	for(int i=0;i<4;i++){
		if(col[i]>maxer){
			maxer=col[i];
		}
	}
	b.x=maxer;
	maxer=-99999;
	int sidelength=max(abs(a.x-b.x),abs(a.y-b.y));
	printf("%d",sidelength*sidelength);
	return 0;
}

```