# Cow Tipping


## 题目描述
```python
Farmer John occasionally has trouble with bored teenagers who visit his farm at night and tip over his cows. One morning, he wakes up to find it has happened again -- his N2 cows began the night grazing in a perfect N×N square grid arrangement (1≤N≤10), but he finds that some of them are now tipped over.
Fortunately, Farmer John has used parts from his tractor and forklift to build a glorious machine, the Cow-Untipperator 3000, that can flip over large groups of cows all at once, helping him put all his cows back on their feet as quickly as possible. He can apply the machine to any "upper-left rectangle" in his grid of cows -- a rectangular sub-grid that contains the upper-left cow. When he does so, the machine flips over every cow in this rectangle, placing tipped cows back on their feet, but unfortunately also tipping over cows that were already on their feet! In other words, the machine "toggles" the state of each cow in the rectangle.
Farmer John figures that by applying his machine sufficiently many times to the appropriate collection of rectangles, he can eventually restore all the cows to their rightful, un-tipped states. Please help him determine the minimum number of applications of his machine needed to do this.
Note that applying the machine to the same rectangle twice would be pointless, since this would have no net impact on the cows in the rectangle. Therefore, you should only consider applying the machine to each upper-left rectangle possibly only once.
```
## 输入
```python
The first line of the input is the integer N.
Each of the N subsequent lines contains a string of N characters, each either 0(representing an up-tipped cow) or 1(representing a tipped cow).
```
## 输出
```python
Please output the minimum number of times Farmer John needs to apply the Cow-Untipperator 3000 to restore all his cows to their feet.
```
## 样例输入
```c++
3
001
111
111
```
## 样例输出 
```python
2
```
## 题目翻译
```python
农场主约翰偶尔也会遇到一些无聊的青少年的麻烦，他们晚上去他的农场翻牛。一天早上，他醒来发现事情又发生了——他的N2头母牛开始了一个完美的N×N方格布局（1≤N≤10）的夜间放牧，但他发现其中一些牛已经翻过来了。
幸运的是，农夫约翰用拖拉机和铲车上的零件制造了一台光荣的机器，奶牛翻转3000，它可以一下子把一大群奶牛翻过来，帮助他尽快把所有的牛都放回原处。他可以将这台机器应用到他的奶牛网格中的任何“左上矩形”——一个包含左上角奶牛的矩形子网格。当他这样做的时候，机器会翻转矩形区域内的每一头奶牛，让倒下的奶牛重新站起来，但不幸的是，它也会翻倒已经站起来的奶牛！换句话说，机器“切换”矩形中每个奶牛的状态。
农场主约翰认为，通过将他的机器多次应用到适当的矩形集合中，他最终可以将所有奶牛恢复到正确的、未倾斜的状态。请帮助他确定完成此操作所需的机器应用程序的最小数量。
请注意，将机器应用于同一个矩形两次是没有意义的，因为这不会对矩形中的奶牛产生净影响。因此，你应该只考虑对每个左上角的矩形应用一次机器。
```

## 转述
```c++
求一个N*N的0,1矩阵经过多少次操作可以变成全部是0的矩阵
操作要求:每次操作使得左上角为(0,0),右下角随意矩阵内部位置的子矩阵里面的0变成1,1变成0
```

## 时间空间限制和数据范围
```c++
时间:1 秒
空间:128 兆
数据范围:1≤N≤10
``` 

## 样例
```c++
----------
3
100
000
000

000
000
000

1
----------
3
000
000
001

111
111
110

000
000
110

110
110
000

000
000
000

4
----------
3
000
010
000

111
101
111

001
011
111

111
011
111

011
111
111

111
111
111

5
----------
3
101
011
001

10
100
110

100
010
000

100
010
000

010
100
000

100
100
000

000
000
000
----------
5
11100
00011
00111
11000
11111

00011
11100
11000
00111
00000

11100
00011
00111
11000
00000

00011
11100
11000
11000
00000

11100
11100
11000
11000
00000

00100
00100
00000
00000
00000

11000
11000
00000
00000
00000

00000
00000
00000
00000
00000

7
----------
4
0000
0100
0000
0000

1100
1000
0000
0000

0000
1000
0000
0000

1000
0000
0000
0000

0000
0000
0000
0000

4
----------

4
0000
0000
0000
0001

1111
1111
1111
1110

0000
0000
0000
1110

1110
1110
1110
0000

0000
0000
0000
0000

4
----------
5
10101
01010
10101
01010
10101

01010
10101
01010
10101
01010

10101
01010
10101
01010
01010

01010
10101
01010
01010
01010

10101
01010
01010
01010
01010

01010
01010
01010
01010
01010

10100
10100
10100
10100
10100

01000
01000
01000
01000
01000

10000
10000
10000
10000
10000

00000
00000
00000
00000
00000

9
```       

## 总结规律方法
```c++
特殊情况
全是0:0
左上角是1,其他是0:1
全是1:1
不在边上,只有一个1:4 
```
```c++
可以把一个0,1矩阵分成四部分,以下被称为第①,②,③和④部分
第①部分是一"块"(n*m大小)
第②部分是一"条"(n*1大小)
第④部分是一"点"(1*1大小)
```
![](imgs/2020-08-03_2.jpg)
```c++
```
```c++
首先把第④部分变成0(是零不用管,是1把直左上角到右下角反过来)
再按顺序从下到上反转②,从右到左反转③部分(可能反转的时候回影响别的0变回1,这种情况重新给影响到的1反转)
当第②,③和④部分是0时,问题规模缩小了
继续对第一部分分成4部分,继续反转
```
## 规律验证的样例
![_](imgs/2020-08-06_1.jpg)
```c++
```
![_](imgs/2020-08-06_2.jpg)
```c++
```
![_](imgs/2020-08-06_3.jpg)
```c++
```

## 算法步骤
```c++
把②,③和④部分变成0
问题规模缩小
继续对第①部分重复执行以上步骤直到都是0
```

## 时间空间复杂度
```c++
时间复杂度:n^3
空间复杂度:n*n
```

### 会不会超时
```c++
不会
```

### 如果会，给一个超时例子
```c++
无  
```
     
### 会不会超空间
```c++
不会
```

### 如果会，说明原因
```c++
无
```

## 代码实现
### Ⅰ
```c++
#include<bits/stdc++.h>
using namespace std;
int n,cnt=0;
char a[11][11];

void tip(int y,int x){
	for(int i=0;i<=y;i++){
		for(int j=0;j<=x;j++){
			if(a[i][j]=='1'){
				a[i][j]='0';
			}else if(a[i][j]=='0'){
				a[i][j]='1';
			}
		}
	}
	printf("%d %d\n",y,x);
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	printf("\n");
	cnt++; 
}

void downsize(int n){
	for(int i=n-1;i>=0;i--){
		if(a[i][n-1]=='1')tip(i,n-1);
	}
	for(int i=n-2;i>=0;i--){
		if(a[n-1][i]=='1')tip(n-1,i);
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	printf("\n");
	for(int i=n;i>=0;i--){
		downsize(i);
	}
	printf("%d",cnt);
	return 0;
} 
```

## 验证的样例
```c++
```

## 上机用时
```c++
30分钟
```

## 调试遇到的问题
### Ⅰ
```c++
问题:调用downsize的参数i出现了错误
解决方案:循环分最小值应该不是1而是0
```

### Ⅱ
```c++
问题:tip函数反转的数字有些少
解决方案:两个循环的最大值应该不是y-1和x-1而是y和x
```

## 提交前测试的样例和提交结果
```c++
```

