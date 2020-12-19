# Teleportation



## 题目内容
    One of the farming chores Farmer John dislikes the most is hauling around lots of cow manur. In order to streamline this process, he comes up with a brilliant invention: the manure teleporter! Instead of hauling manure between two points in a cart behind his tractor, he can use the manure teleporter to instantly transport manure from one location to another.

    Farmer John's farm is builst along a single long straight road, so any location on his farm can be described simply using its position along this road (effectively a point on the number line). A teleporter is described by two numbers x and y, where manure brought to location x can be instantly transported to location y, or vice versa. 

    Farmer John wants to transport manure from location a to location b, and he has built a teleporter that might be helpful during this process (of course, he doesn't need to use the teleporter if it doesn't help). Please help him determine the minimum amount of total distance he needs to haul the manure using his tractor.

## 题目翻译
    农场主约翰最不喜欢的农活之一是搬运大量牛粪。为了简化这个过程，他想出了一个绝妙的发明：粪肥传送机！他不用拖拉机后面的手推车在两点之间运送肥料，而是可以使用肥料传送机将肥料从一个地方运送到另一个地方。

    在农场的任何一条直线上，都可以简单地描述约翰农场的位置。传送机用两个数字x和y来描述，其中带到位置x的肥料可以立即传送到位置y，反之亦然。

    农夫约翰想把粪便从a地运到b地，他建造了一个传送机，在这个过程中可能会有帮助（当然，如果传送机没有帮助，他就不需要使用它）。请帮助他确定用拖拉机拖运肥料所需的最小总距离。


## 题目分析
```c++
这道题的题意非常简单。
在一条直线上有若干个位置,一个人在位置k(初始为位置a),输出他到位置b所需的步骤。

当k≠x而且k≠y时，k只能加一或者减一(前进和后退)。

当k==x时,k可以选择设为y,也可以继续加一或者减一。

当k==y时,k可以选择设为x,也可以继续加一或者减一。
```

## 输入 
    The first and only line of input contains four space-separated integers: a and b, describing the start and end locations, followed by x and y, describing the teleporter. All positions are integers in the range 0…100, and they are not necessarily distinct from each-other.

## 输出
    Print a single integer giving the minimum distance Farmer John needs to haul manure in his tractor.

## 样例输入
    3 10 8 2

## 样例输出
    3
## 人工模拟
```c++
0 x a 0 0 0 0 y 0 b

最优的方案是首先将a(位置3)从位置3移到位置2,也就是teleporter(位置2)的位置。

然后被teleporter传送到位置8。

再前进两步即可到达b(位置10)
```

## 解题思路
```c++
如果teleporter的传送方向是对于a来说的b方向

而且离那个人近的teleporter的一端在对于a来说的b的方向

比如说:
0 0 0 0 a 0 0 x 0 0 y b

传送方向:>

那就一步一步到达离那个人近的teleporter的一端,然后传送到另一端,最后再一步一步走到b

如果teleporter的传送方向对于a来说的b的方向

而且teleporter在对于a来说的b的方向的反方向

而且那个人离离那个人近的teleporter的一端的距离小于teleporter的传送长度

那就一步一步倒退至teleporter
```

## 样例手算
```c++
图例
(n)  n=步数
n->m 从n到m用tractor运输
n=>m 从n到m用teleporter传送

1 10 3 6(6)
1->3(2)
3=>6
6->10(4)

3 8 1 7(3)
3->1(2)
1=>7
7->8(1)

3 7 1 8(3)
3->1(2)
1=>8
8->7(1)

3 7 1 6(3)
3->1(2)
1=>6
6->7(1)

10 1 3 6(6)
10->6(4)
6=>3
3=>1(2)

8 3 1 7(3)
8->7(1)
7=>1
1->3(2)

7 3 1 8(3)
7->8(1)
8=>1
1->3(2)

7 3 1 6(3)
7->6(1)
6=>1
1->3(2)
```

## 题解代数化
```c++
以下4种a,b,x,y分布情况都适用的对应代数化公式(int 类型函数)

- a≤x≤y≤b

- x≤a≤y≤b

- x≤a≤b≤y

- a≤x≤b≤y
``` 

## 程序
```c++
#include<bits/stdc++.h> 
using namespace std;
int a,b,x,y,steps=0;

int main(){
	scanf("%d%d%d%d",&a,&b,&x,&y);
	if(x>y){
		int t;
		t=x;
		x=y;
		y=t;
	}
	if(a>b){
		int t;
		t=a;
		a=b;
		b=t;
	}
	if((abs(x-a)+abs(b-y))<abs(a-b)){
		steps=abs(x-a)+abs(b-y);
	}else{
		steps=abs(a-b);
	}
	printf("%d",steps);
	return 0;
}
```