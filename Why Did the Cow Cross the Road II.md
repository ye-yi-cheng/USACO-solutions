## 题目描述
```c++
The layout of Farmer John s farm is quite peculiar, with a large circular road running around the perimeter of the main field on which his cows graze during the day. Every morning, the cows cross this road on their way towards the field, and every evening they all cross again as they leave the field and return to the barn.

As we know, cows are creatures of habit, and they each cross the road the same way every day. Each cow crosses into the field at a different point from where she crosses out of the field, and all of these crossing points are distinct from each-other. Farmer John owns exactly 26 cows, which he has lazily named A through Z (he is not sure what he will do if he ever acquires a 27th cow...), so there are precisely 52 crossing points around the road. Farmer John records these crossing points concisely by scanning around the circle clockwise, writing down the name of the cow for each crossing point, ultimately forming a string with 52 characters in which each letter of the alphabet appears exactly twice. He does not record which crossing points are entry points and which are exit points.

Looking at his map of crossing points, Farmer John is curious how many times various pairs of cows might cross paths during the day. He calls a pair of cows (a,b) a "crossing" pair if cow a's path from entry to exit must cross cow b's path from entry to exit. Please help Farmer John count the total number of crossing pairs.
```

## 输入
```c++
The input consists of a single line containing a string of 52 upper-case characters. Each letter of the alphabet appears exactly twice.
```

## 输出
```c++
Please print the total number of crossing pairs.
```

## 样例输入
```c++
ABCCABDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUVVWWXXYYZZ
```

## 样例输出
```c++
1
```

## 题目翻译
（重点，有用的句子标记）
```c++
农场主约翰的农场布局很奇特，一条很大的环形道路环绕着他的奶牛在白天吃草的主要农田周围。每天早晨，母牛都会穿过这条路去田野，每天晚上它们都会再次穿过这条路，离开田地回到谷仓。
我们知道，奶牛是有习性的动物，它们每天都以同样的方式穿过马路。每头母牛从一个不同的点穿过田野，而所有这些交叉点都是不同的。农夫约翰有26头奶牛，他懒洋洋地把它命名为A到Z（他不知道如果他得到了第27头牛他会怎么做…），所以道路周围正好有52个牛经过的位置。农夫约翰通过顺时针扫描圆圈，简洁地记录下这些交叉点，为每个交叉点写下奶牛的名字，最终形成一个由52个字符组成的字符串，字母表中的每个字母正好出现两次。他不记录哪些交叉点是入口点，哪些是出口点。
农夫约翰看着他的交叉点地图，很好奇一天中有多少对不同的奶牛会穿过小路。他称一对母牛（a，b）为“交叉”对，如果牛a从入口到出口的路径必须穿过牛b的路径从入口到出口。请帮助农夫约翰数一下交叉对的总数。
```

## 转述
（尽可能代数化）
```c++
求由两个a到z的字母围成的圈内选择两个字母,每个字母连线到和它一样的另一个字母,问有几种选择两个字母的方式使得两条线交叉
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
AABB
0
----------
ABBA
0
----------
BAAB
0
----------
BBAA
0
----------
ABAB
1
----------
BABA
1
----------
ACBABC
2
----------
ABACBDCD
3
----------
ABCDDCABEE
1
```

## 总结规律方法
```c++
设选中的两个字母为A和B
顺时针看如果是
ABAB BABA
就会出现交叉
如果不是就不会出现交叉
只要统计交叉数量就行
```

## 规律验证的样例
```c++
ABAB
1
----------
BABA
1
----------
ABBA
1
----------
AABB
1
----------
BAAB
1
----------
BBAA
1
```

## 算法步骤
```c++
生成那个"ABAB","BABA"的字符串
统计交叉就行
```

## 时间空间复杂度
```c++
时间复杂度:140608
空间复杂度:52
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
int crossi=0;
int cnt=0;
char cross[10];
char a[53]; 
char abcd[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";



int main(){
	scanf("%s",a);
	int n=strlen(a);
	for(int x=0;x<n-1;x++){
		for(int y=x+1;y<n;y++){
			int crossi=0;
			for(int i=0;i<n;i++){
				if(a[i]==abcd[x]||a[i]==abcd[y]){
					cross[crossi]=a[i];
					crossi++;
				}
			}
			printf("%c,%c\n",abcd[x],abcd[y]);
			if(cross[0]==cross[1]||cross[2]==cross[1]){
			}else{
				printf("%s\n",cross);
				cnt++;
			}
		} 
	}
	printf("%d",cnt);
	return 0;
}

```

## 验证的样例
（阅读程序写结果）
```c++
ABAB
1
----------
BABA
1
----------
ABBA
1
----------
AABB
1
----------
BAAB
1
----------
BBAA
1
```

## 上机用时
```c++
40分钟
```

## 调试遇到的问题
```c++
问题:输出了crossi
解决方案:输出cnt
```

## 提交前测试的样例和提交结果
```c++
ABAB
1
----------
BABA
1
----------
ABBA
1
----------
AABB
1
----------
BAAB
1
----------
BBAA
1
```
