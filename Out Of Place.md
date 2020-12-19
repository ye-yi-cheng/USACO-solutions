# Out Of Place

## 题目描述
```
Feeling ambitious, Farmer John plans to attempt something that never seems to go quite right: he wants to take a photograph of his entire herd of cows.
To make the photograph look nice, he wants the cows to line up in a single row from shortest to tallest. Unfortunately, right after he has the cows line up this way, Bessie the cow, always the troublemaker, steps out of line and re-inserts herself at some other location in the lineup!
Farmer John would like to swap pairs of cows so the entire herd is again lined up properly. Please help him determine the minimum number of swaps he needs to make between pairs of cows in order to achieve this goal.
```

## 输入
```
The first line of input contains N (2≤N≤100). The next N lines describe the heights of the cows as they are lined up after Bessie makes her move. Each cow height is an integer in the range 1…1,000,000. Cows may have the same height.
```

## 输出
```
Please output the minimum number of times Farmer John needs to swap pairs of cows in order to achieve a proper ordering. Swaps do not necessarily need to involve adjacent cows in the ordering.
```

## 样例输入
``` 
6
2
4
7
7
9
3
```

## 样例输出
```
3
```

## 题目翻译
```
农场主约翰感到雄心勃勃，打算尝试一种似乎从来都不太对劲的事情：他想给他的整个牛群拍张照片。
为了让照片看起来好看，他希望奶牛从最矮到最高排成一行。不幸的是，就在他用这种方式让奶牛排队之后，牛贝西，总是麻烦制造者，走出队伍，重新插入到其他位置！
农场主约翰想交换一对母牛，这样整个牛群就会重新排列整齐。请帮助他确定为实现这一目标，他需要在两头母牛之间进行的最小互换数量。
```

## 转述
```
求给一个数组排序最少需要多少次交换,每一次交可以和相邻和不相邻的数交换
```

## 时间空间限制和数据范围
```
时间: 1 秒
空间: 128 兆
数据范围: 
```

## 样例
```c++
----------
2
2
1

1 2

1
---------
3
2
3
1

2 1 3
1 2 3

2
----------
4
1 
3 
5 
7 
2

1 3 5 2 7
1 3 2 5 7
1 2 3 5 7

3
----------
5
1 
3 
4 
4 
1

1 3 1 4 4
1 1 3 4 4

2
----------
6
1
3
4
4
5
1

1 3 4 4 1 5
1 3 1 4 4 5
1 1 3 4 4 5

3
----------
7
1
2
4
4
5
5
1

1 2 4 4 1 5 5
1 2 1 4 4 5 5
1 1 2 4 4 5 5
----------
8
1
1
2
2
3
3
4
2

1 1 2 2 3 3 2 4
1 1 2 2 2 3 3 4

2
----------
9
3
5
7 
9 
9 
9 
10
11
2

3 5 7 9 9 9 10 2 11
3 5 7 9 9 9 2 10 11
3 5 7 2 9 9 9 10 11
3 5 2 7 9 9 9 10 11
3 2 5 7 9 9 9 10 11
2 3 5 7 9 9 9 10 11

6
----------
10
1
2
3
4
4
4
4
5
5
1



----------
```

## 总结规律方法
```
最少交换的次数就是从错位的位置到应该所处的位置之间不同数字的数量
```

## 规律验证的样例
```
4
1 
3 
5 
7 
2

1 3 5 2 7
1 3 2 5 7
1 2 3 5 7

3
```

## 算法步骤
```
寻找哪个数是错位的
找到应该所处的位置
将计步器加一
不断地看下一个数,直到找到和上一个数不一样的
重复执行直到计步器在错位的数应该所处的位置
输出计步器

```


## 时间空间复杂度
```
时间复杂度:O()
空间复杂度:
```

### 会不会超时
```
不会
```

### 如果会，给一个超时例子
``` 
无
```

### 会不会超空间
```
不会
```

### 如果会，说明原因
```
无
```

## 代码实现
```
```

## 验证的样例
```
```

## 上机用时
```
```

## 调试遇到的问题
```
```

## 提交前测试的样例和提交结果
```
```