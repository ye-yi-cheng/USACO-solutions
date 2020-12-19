# Sleepy Cow Sorting

## 题目描述
```c++
Farmer John is attempting to sort his N cows (1≤N≤100), conveniently numbered 1…N, before they head out to the pastures for breakfast.
Currently, the cows are standing in a line in the order p1,p2,p3,…,pN, and Farmer John is standing in front of cow p1. He wants to reorder the cows so that they are in the order 1,2,3,…,N, with cow 1 next to Farmer John.
The cows are a bit sleepy today, so at any point in time the only cow who is paying attention to Farmer John s instructions is the cow directly facing Farmer John. In one time step, he can instruct this cow to move k paces down the line, for any k in the range 1…N−1. The k cows whom she passes will amble forward, making room for her to insert herself in the line after them.
For example, suppose that N=4 and the cows start off in the following order:
 FJ: 4, 3, 2, 1 
The only cow paying attention to FJ is cow 4. If he instructs her to move 2 paces down the line, the order will subsequently look like this:
 FJ: 3, 2, 4, 1 
Now the only cow paying attention to FJ is cow 3, so in the second time step he may give cow 3 an instruction, and so forth until the cows are sorted.
Farmer John is eager to complete the sorting, so he can go back to the farmhouse for his own breakfast. Help him find the minimum number of time steps required to sort the cows.
```

## 输入
```c++
The first line of input contains N.
The second line contains N space-separated integers, p1,p2,p3,…,pN, indicating the starting order of the cows.
```
## 输出
```c++
A single integer: the number of time steps before the N cows are in sorted order, if Farmer John acts optimally.
```

## 样例输入
```c++
4
1 2 4 3
```
## 样例输出
```c++
3
```

## 题目翻译
（重点，有用的句子标记）
```c++
农夫约翰正在尝试对他的N头母牛（1≤N≤100）进行排序，方便地编号为1…N，然后再去牧场吃早餐。
当前，母牛以p1，p2，p3，…，pN的顺序排成一排，农夫约翰正站在母牛p1的前面。他想对母牛进行重新排序，以使它们处于1,2,3，…，N的顺序，其中母牛1位于农夫约翰旁边。
今天的母牛有点困，因此在任何时间点，唯一关注农夫约翰的指示的母牛就是直接面对农夫约翰的母牛。在一个时间步中，他可以指示这头母牛将k沿线下移，对于范围在1…N-1内的任何k。她经过的k头母牛会向前走，为她腾出空间让自己排在后面。
例如，假设N = 4，并且母牛按以下顺序开始：
4、3、2、1 
唯一关注农夫约翰的母牛是母牛4。如果他指示她将线下移2步，那么订单将如下所示：
3、2、4、1 
现在，唯一关注农夫约翰的母牛是母牛3，因此在第二步中，他可以给母牛3一条指令，依此类推，直到对母牛进行排序。
农夫约翰很想完成排序，因此他可以回到农家吃早餐。帮助他找到对奶牛进行分类所需的最少时间步骤。
```

## 转述
```c++
把一个长度为n，且里面的数是1~n的数组排序
要求：
每次移动只能移动数组的第一项
输出最少需要移动多少次
```

## 时间空间限制和数据范围
```c++
时间: 1 秒
空间: 128 兆
数据范围: 1≤n≤100
```

## 样例
```python
图例
(a) 答案
[a 1,a 2……] 移动后的数组

0
(0)

1
1
(0)

2
1 2
(0)

2
2 1
[1 2]
(1)

3
1 2 3
(0)

3
1 3 2
1=>2
[3 1 2]
[1 2 3]
(2)

3
2 1 3
[1 2 3]
(1)

3
2 3 1
[3 1 2]
[1 2 3]
(2)

3
3 1 2
[1 2 3]
(1)

3
3 2 1
[2 1 3]
[1 2 3]
(2)

4
1 2 3 4
(0)

4
1 2 4 3
[2 4 3 1]
[4 3 1 2]
[3 1 2 4]
[1 2 3 4]
(4)

4
1 3 2 4
[3 2 4 1]
[2 4 1 3]
[4 1 2 3]
[1 2 3 4]
(4)

4
1 3 4 2
[3 4 2 1]
[4 2 1 3]
[2 1 3 4]
[1 2 3 4]
(4)

4
1 4 2 3
[4 2 3 1]
[2 3 1 4]
[3 1 2 4]
[1 2 3 4]
(4)

4
2 1 4 3
[1 4 3 2]
[4 3 1 2]
[3 1 2 4]
[1 2 3 4]
(4)

5
2 3 1 5 4
[3 1 5 4 2]
[1 5 4 2 3]
[5 4 1 2 3]
[4 1 2 3 5]
[1 2 3 4 5]
(5)

5
3 5 4 2 1
[5 4 2 1 3]
[4 2 1 3 5]
[2 1 3 4 5]
[1 2 3 4 5]
{4}

6
6 3 2 4 1 5
[3 2 4 1 5 6]
[2 4 1 3 5 6]
[4 1 2 3 5 6]
[1 2 3 4 5 6]
(4)

10
9 1 4 3 2 5 7 6 8 10
[1 4 3 2 5 7 6 8 9 10]
[4 3 2 5 7 1 6 8 9 10]
[3 2 5 7 1 4 6 8 9 10]
[2 5 7 1 3 4 6 8 9 10]
[5 7 1 2 3 4 6 8 9 10]
[7 1 2 3 4 5 6 8 9 10]
[1 2 3 4 5 6 7 8 9 10]
(7)
```

## 总结规律方法
```c++
在整个数组里找到最后一个有序升序序列，把要移动的数放在升序序列的适当位置，使得又形成一个升序序列
重复执行此操作直到排序完毕。
```

## 规律验证的样例
```c++
```

## 算法步骤
```c++
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
