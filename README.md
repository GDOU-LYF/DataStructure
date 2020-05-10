# 数据结构

[TOC]



## 第一章 概论 (算法和复杂度)

![image-20200407181812695](picture/README/image-20200407181812695.png)

printN1循环 printN2递归(在100000内存溢出,程序异常退出)

※核心:

​	1.学会用"在线处理"找最大子列和(找最大值和最小值)

​	2.二分查找 (⚠从小到大Right=mid-1;Left=mid+1) [1.1.c]

时间复杂度和空间复杂度的计算 [1.8.c]

## 第二章 链表,基础语法,递归

## 第三章 线性,多重链,广义表 堆栈 队列



### 堆栈(线性,链式):

定义

插入:入栈

删除:出栈

栈空 top=-1

一个元素 top=0

栈满 top=Maxsize-1

**利用数组实现两个堆栈**

##### **链式:栈顶指针Top在链表头上.**

### C函数

[enum利用-菜鸟教程]: https://www.runoob.com/cprogramming/c-enum.html

<img src="picture/README/image-20200419112536014.png" alt="image-20200419112536014" style="zoom: 67%;" />

[C 标准库 - <ctype.h>]: https://www.runoob.com/cprogramming/c-standard-library-ctype-h.html

##### isdigit():判断是否为数字

##### isalpha():判断是否为字母

toupper():**将小写转换为大写字母**

#####  **atof()  <stdio.h>:**

C 库函数 **double atof(const char \*str)** 把参数 **str** 所指向的字符串转换为一个浮点数（类型为 double 型）。



### 队列:先进先出

队列为空:Front=Rear

队列中只有一个元素,Rear-Front=1

队列满:Rear+1=Front(对于少用一个元素空间: (Rear+1)%数组长度=Front)

