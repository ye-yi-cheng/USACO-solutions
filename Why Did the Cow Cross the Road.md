# Why Did the Cow Cross the Road


## 题目描述
```PYTHON
While the age-old question of why chickens cross roads has been addressed in great depth by the scientific community, surprisingly little has been published in the research literature on the related subject of cow crossings. Farmer John, well-aware of the importance of this issue, is thrilled when he is contacted by a local university asking for his assistance in conducting a scientific study of why cows cross roads. He eagerly volunteers to help.

As part of the study, Farmer John has been asked to document the number of times each of his cows crosses the road. He carefully logs data about his cows locations, making a series of N observations over the course of a single day. Each observation records the ID number of a cow (an integer in the range 1…10, since Farmer John has 10 cows), as well as which side of the road the cow is on.

Based on the data recorded by Farmer John, please help him count the total number of confirmed crossings. A confirmed crossing occurs when a consecutive sightings of a cow place it on different sides of the road.
```

## 输入
```C++
The first line of input contains the number of observations, N, a positive integer at most 100. Each of the next N lines contains one observation, and consists of a cow ID number followed by its position indicated by either zero or one (zero for one side of the road, one for the other side).
```

## 输出
```Python
Please compute the total number of confirmed crossings.
```

## 样例输入
```python
8
3 1
3 0
6 0
2 1
4 1
3 0
4 0
3 1
```
## 样例输出
```c++
3
```

## 题目翻译
```c++
虽然科学界对鸡为什么要横穿马路这个古老的问题进行了深入的研究，但令人惊讶的是，有关奶牛横穿马路的相关主题的研究文献中却鲜有发表。农夫约翰深知这一问题的重要性，当当地一所大学联系他，要求他协助进行一项关于奶牛为什么要横穿马路的科学研究时，他很激动。他热心地自愿帮忙。
作为这项研究的一部分，农民约翰被要求记录下每头奶牛过马路的次数。他仔细记录了奶牛的位置数据，在一天的时间里进行了一系列的观察。每次观察都会记录一头牛的身份证号（1…10范围内的整数，因为农夫约翰有10头牛），以及奶牛在哪条路上。
根据农民约翰记录的数据，请帮助他统计确认的横穿马路总数。当看到一头牛把它放在道路的不同侧面时，就会出现确认的交叉。
```

## 转述
```c++
求出相同identity的position变化的次数
```

## 时间空间限制和数据范围
```c++
时间:1 秒
空间:128 兆
数据范围:1≤N≤10
```

## 样例
```c++
1
1 0

0
----------
2
1 0
7 1

0
----------
2
3 0
3 0

0
----------
2
3 0
3 1

1
----------
3
1 1
3 0
5 1

0
---------- 
5
1 0
3 1
6 0
3 1
1 1

1
----------
7

1 1
6 0
3 1
5 0
3 1
5 1
2 0

1
----------
10
4 0
3 0
2 0
1 1
2 1
3 1
4 1
7 0
3 1
7 1

4
----------
15
3 1
5 0
2 1
8 1
5 0
3 1
9 0
2 0
7 1
3 0
6 1
3 0
5 0
2 1
8 1

3
----------
```

## 总结规律方法
```c++

```

## 规律验证的样例
```c++
```

## 算法步骤
```c++
```s
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
