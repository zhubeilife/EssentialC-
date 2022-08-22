# Essential C++

## Notebook

## TODO

+ 在网上搜索常见的C++的问题，应该大部分都是涉及智能指针，这些能够保证C++代码鲁棒性，更不容易出差的机制

+ 智能指针

+ 传参考，传值

reference to const vector

```c++
void display(const vector<int> &vec)
```

+ const 的使用方法

+ seq_array是可以持有六个函数指针的数组

```c++
const vector<int>* (*seq_array[]) (int) = {}
```

+ 2.9 setting up a header file
    可能需要再看看详细的介绍，头文件里应该放什么，可能要看google style?

+ 怎么debug c++程序，尤其是用clion

+ 怎么写cmake

+ 怎么用c++常用的 linter 、compiler 、test

+ Question P132

“function object实现了我们原本可能以独立函数加以定义的事物。但又何必如此呢？主要是为了效率。我们可以令call运算符成为inline，从而消除“通过函数指针来调用函数”时需付出的额外代价。”

+ Questions when and why should use iostream iterator

Section 3.10 iostream_iterator examples	

or I should call this questions what't iterator for? it's some good way to use poiter or somethings?

