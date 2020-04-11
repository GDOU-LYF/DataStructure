# 数据结构

## 第一章 概论 (算法和复杂度)

**实例1.1 最大子列和问题 (20分)**

给定*K*个整数组成的序列{ *N*1, *N*2, ..., *N**K* }，“连续子列”被定义为{ *N**i*, *N**i*+1, ..., *N**j* }，其中 1≤*i*≤*j*≤*K*。“最大子列和”则被定义为所有连续子列元素的和中最大者。例如给定序列{ -2, 11, -4, 13, -5, -2 }，其连续子列{ 11, -4, 13 }有最大的和20。现要求你编写程序，计算给定整数序列的最大子列和。

本题旨在测试各种不同的算法在各种数据情况下的表现。各组测试数据特点如下：

- 数据1：与样例等价，测试基本正确性；
- 数据2：102个随机整数；
- 数据3：103个随机整数；
- 数据4：104个随机整数；
- 数据5：105个随机整数；

### 输入格式:

输入第1行给出正整数*K* (≤100000)；第2行给出*K*个整数，其间以空格分隔。

### 输出格式:

在一行中输出最大子列和。如果序列中所有整数皆为负数，则输出0。

### 输入样例:

```in
6
-2 11 -4 13 -5 -2

      
    
```

### 输出样例:

```out
20
```

**习题1.8 二分查找 (20分)**

本题要求实现二分查找算法。

### 函数接口定义：

```c++
Position BinarySearch( List L, ElementType X );

      
    
```

其中`List`结构定义如下：

```c++
typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

      
    
```

`L`是用户传入的一个线性表，其中`ElementType`元素可以通过>、==、<进行比较，并且题目保证传入的数据是递增有序的。函数`BinarySearch`要查找`X`在`Data`中的位置，即数组下标（注意：元素从下标1开始存储）。找到则返回下标，否则返回一个特殊的失败标记`NotFound`。

### 裁判测试程序样例：

```c++
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标1开始存储 */
Position BinarySearch( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    Position P;

    L = ReadInput();
    scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

/* 你的代码将被嵌在这里 */

      
    
```

### 输入样例1：

```in
5
12 31 55 89 101
31

      
    
```

### 输出样例1：

```out
2

      
    
```

### 输入样例2：

```
3
26 78 233
31

      
    
```

### 输出样例2：

```
0

      
    
```

**鸣谢宁波大学 Eyre-lemon-郎俊杰 同学修正原题！**



**习题1.9 有序数组的插入 (20分)**

本题要求将任一给定元素插入从大到小排好序的数组中合适的位置，以保持结果依然有序。

### 函数接口定义：

```c++
bool Insert( List L, ElementType X );

      
    
```

其中`List`结构定义如下：

```c++
typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

      
    
```

`L`是用户传入的一个线性表，其中`ElementType`元素可以通过>、==、<进行比较，并且题目保证传入的数据是递减有序的。函数`Insert`要将`X`插入`Data[]`中合适的位置，以保持结果依然有序（注意：元素从下标0开始存储）。但如果`X`已经在`Data[]`中了，就不要插入，返回失败的标记`false`；如果插入成功，则返回`true`。另外，因为`Data[]`中最多只能存`MAXSIZE`个元素，所以如果插入新元素之前已经满了，也不要插入，而是返回失败的标记`false`。

### 裁判测试程序样例：

```c++
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
typedef enum {false, true} bool;
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标0开始存储 */
void PrintList( List L ); /* 裁判实现，细节不表 */
bool Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;

    L = ReadInput();
    scanf("%d", &X);
    if ( Insert( L, X ) == false )
        printf("Insertion failed.\n");
    PrintList( L );

    return 0;
}

/* 你的代码将被嵌在这里 */

      
    
```

### 输入样例1：

```in
5
35 12 8 7 3
10

      
    
```

### 输出样例1：

```out
35 12 10 8 7 3
Last = 5

      
    
```

### 输入样例2：

```in
6
35 12 10 8 7 3
8

      
    
```

### 输出样例2：

```out
Insertion failed.
35 12 10 8 7 3
Last = 5
```