# Race

## 题目描述
```c++
Bessie is running a race of length K (1≤K≤10^9) meters. She starts running at a speed of 0 meters per second. In a given second, she can either increase her speed by 1 meter per second, keep it unchanged, or decrease it by 1 meter per second. For example, in the first second, she can increase her speed to 1 meter per second and run 1 meter, or keep it at 0 meters per second and run 0 meters. Bessie's speed can never drop below zero.
Bessie will always run toward the finish line, and she wants to finish after an integer amount of seconds (ending either at or past the goal line at this integer point in time). Furthermore, she doesn’t want to be running too quickly at the finish line: at the instant in time when Bessie finishes running K meters, she wants the speed she has just been traveling to be no more than X (1≤X≤105) meters per second. Bessie wants to know how quickly she can finish the race for N (1≤N≤1000) different values of X.
SCORING:
Test cases 2-4 satisfy N=X=1.
Test cases 5-10 satisfy no additional constraints.
```

## 输入
```c++
The first line will contain two integers K and N.
The next N lines each contain a single integer X.
```

## 输出
```c++
Output N lines, each containing a single integer for the minimum time Bessie needs to run K meters so that she finishes with a speed less than or equal to X.
```

## 样例输入
```c++
10 5
1
2
3
4
5
```

## 样例输出
```c++
6
5
5
4
4
```

## 题目翻译
```c++
贝西正在进行一场长度为K（1≤K≤10^9）米的赛跑。她开始以每秒0米的速度跑步。在给定的一秒钟内，她可以将速度提高1米/秒，保持不变，也可以降低1米/秒。例如，在第一秒，她可以把速度提高到1米/秒，然后跑1米，或者保持在0米/秒的速度跑0米。贝西的速度永远不会低于零。
贝西总是朝着终点线跑，她想在整数秒后完成（在这个整数时间点结束或超过目标线）。此外，她不想在终点线前跑得太快：在贝西跑完K米的那一刻，她希望她刚刚跑的速度不超过每秒X（1≤X≤105）米。贝西想知道她能以多快的速度完成N（1≤N≤1000）个不同X值的比赛。
限制：
测试用例2-4满足N=X=1。
测试用例5-10不满足额外的约束。
```

## 转述
```c++
输出一个数组的长度，要求：长度尽量短，第1个数可以是1或者0，第i个数和第i+1个数的差≤1而且≥0，最后一个数≤x，所有数加起来=k
```

## 时间空间限制和数据范围
```c++
时间: 1 秒
空间: 128 兆
数据限制：
1≤K≤10^9
1≤X≤10^5
1≤N≤1000
```

## 样例
（1.符合题目要求，2.答案要算对，3.写出计算过程）
```c++
图例


2 1
1
(2)
1 1


3 2
1
2
(3)
1 1 1
(2)
1 2

6 3
1
2
3
(4)
1 2 2 1
(4)
1 1 2 2
(3)
1 2 3

7 2
1
3
(5)
1 1 2 2 1
(4)
1 1 2 3

8 3
1
2
3
(5)
1 2 2 2 1
(4)
1 2 3 2
(4)
1 2 2 3

12 5
1
2
3
4
5

(6)
1 2 3 3 2 1
(6)
1 2 3 2 2 2
(5)
1 2 3 3 3
(5)
1 2 3 3 3
(6)
1 2 3 3 3

20 7
1
2
3
4
5
6
7

(8)
1 2 3 4 4 3 2 1
(8)
1 2 3 4 4 3 2 1
(8)
1 2 3 4 4 3 2 1
(8)
1 1 2 3 4 5 4
(6)
1 2 3 4 5 5
(6)
1 2 3 4 5 5
(6)
1 2 3 4 5 5
```

## 总结规律方法
```python


```

## 规律验证的样例
```c++
15 1
10

(5)
1 2 3 4 5

20 1
7

(6)
1 2 3 4 5 5

29 1
7
1 1 2 3 4 5 6 7

35 1
6

(8)
1 2 3 4 5 6 7 6

48 1
6

(10)
1 2 3 4 5 6 7 7 7 6

60 1
7
1 2 3 4 5 6 7 8 9 8 7
```

## 算法步骤
```python
首先列出一个 1,2,3......x-1,x 的序列
要求序列中所有数的和必须≤K
如果序列中所有数的和=k
输出x-1+1

如果 k- 序列中所有数的和< x,x+1......X-1,X序列中所有数的和
那么把上面的序列改成 1,2......x-2,x-1 序列
重复直到 k- 序列中所有数的和≥ x,x+1......X-1,X序列中所有数的和

假设执行完上一部分的序列是1,2......,y-1,y
如果 K-(序列中所有数的和,x+1......X-1,X)=0
输出序列的长度+(X-x+1+1)
如果 K-(序列中所有数的和,x+1......X-1,X)≤y
输出序列的长度+(X-x+1+1)+1
如果 K-(序列中所有数的和,x+1......X-1,X)>y
输出序列的长度+(X-x+1+1)+2
```

## 时间空间复杂度
```c++

```

### 会不会超时
```c++
```

### 如果会，给一个超时例子
```c++  
```

### 会不会超空间
```c++
```

### 如果会，说明原因
```c++
```

## 代码实现
```c++
```

## 验证的样例
（阅读程序写结果）
```c++
```

## 上机用时
```c++
```

## 调试遇到的问题
```c++
```

## 提交前测试的样例和提交结果
```c++
```
