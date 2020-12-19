## 题目描述
```c++
Farmer John, in his old age, has unfortunately become increasingly grumpy and paranoid. Forgetting the extent to which bovine diversity helped his farm truly flourish over the years, he has recently decided to build a huge fence around the farm, discouraging cows from neighboring farms from visiting, and completely prohibiting entry from a handful of neighboring farms. The cows are quite upset by this state of affairs, not only since they can no longer visit with their friends, but since it has caused them to cancel participation in the International Milking Olympiad, an event to which they look forward all year.

Neighboring cows that still have the ability to enter Farmer John s property find the process has become more arduous, as they can enter only through a single gate where each cow is subject to intense questioning, often causing the cows to queue up in a long line.

For each of the N cows visiting the farm, you are told the time she arrives at the gate and the duration of time required for her to answer her entry questions. Only one cow can be undergoing questioning at any given time, so if many cows arrive near the same time, they will likely need to wait in line to be processed one by one. For example, if a cow arrives at time 5 and answers questions for 7 units of time, another cow arriving at time 8 would need to wait until time 12 to start answering questions herself.

Please determine the earliest possible time by which all cows are able to enter the farm.
```

## 输入
```c++
The first line of input contains N, a positive integer at most 100. Each of the next N lines describes one cow, giving the time it arrives and the time it requires for questioning; each of these numbers are positive integers at most 1,000,000.
```

## 输出
```c++
Please determine the minimum possible time at which all the cows could have completed processing.
```

## 样例输入
```c++
3
2 1
8 3
5 7
```

## 样例输出
```c++
15
```

## 题目翻译
（重点，有用的句子标记）
```c++
不幸的是，农场主约翰在年老时变得越来越暴躁和偏执。多年来，他忘记了牛的多样性在多大程度上帮助他的农场真正繁荣起来，他最近决定在农场周围修建一个巨大的围栏，阻止邻近农场的奶牛前来参观，并完全禁止少数邻近农场进入。奶牛们对这种状况感到非常不安，不仅因为它们不能再和朋友们一起去了，而且还因为它使它们取消了参加国际挤奶奥林匹克运动会的资格，这是他们全年都期待的一项活动。
邻近的奶牛仍有能力进入农场主约翰的财产，发现这一过程变得更加艰难，因为它们只能通过一个大门进入，每一头牛都要受到严格的盘问，常常导致奶牛排成长队。
对于每一头参观农场的N头牛，你会被告知她到达大门的时间以及她回答进入问题所需的时间。在任何给定的时间内，只有一头牛可以接受问话，因此，如果多头牛几乎同时到达，它们可能需要排队等待，以便逐一接受处理。例如，如果一头牛在时间5到达并回答了7个单位的问题，那么另一个在时间8到达的牛需要等到时间12才能自己开始回答问题。
请确定所有奶牛能进入农场的最早时间。
```

## 转述
（尽可能代数化）
```c++
```

## 时间空间限制和数据范围
```c++
时间: 1 秒
空间: 128 兆
数据范围: 字符串长度=52
```

## 样例
（1.符合题目要求，2.答案要算对，3.写出计算过程）
```c++
3
1 2
3 2
1 1
6
----------
4
1 2
3 4
3 2
9
---------
5
1 2
1 3
2 3
2 2
1 4
15
---------
7
1 2
3 2
3 4
2 1
3 1
4 1
1 1
13
---------

---------
```

## 总结规律方法
```c++
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
