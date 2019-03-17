# Notes Week 1

https://github.com/niaokedaoren/Coursera_c2cpp

## 1.1 Overview and Course Organization

margarines 人造黄油.  
cholesterol 胆固醇.   

tradition c --> Dennis Ritchie & Ken
"type as little as possible" --> the idea

ANSI/ISO C standard 1985

I just jumped here.

## 1.2 Getting Started

type, the methods can be native or user defined, in this way, we will not make the language itself too large to be learnable, like the PIL project in IBM, is a big fail.


## 1.3 Converting a C Program to C++
we don't want to use preprocess more, we want them less.

One interesting and meaningful question, how to generate randomness from deterministic

in C program, we get libraries (std.*) / # define macros / main


# 1.5 C++ improvement
inline replaces code macro    
// comments   
some minor like cout, cin   
cout <<: << is the overloaded, meaning, has a new meaning   
So cout has this syntax that uses this operator. This operator in the C community is a bit shift. But in C++, it retains bit shift, only when the arguments to it make it the bit shift. And these arguments, cout, is what's called an o scream. So we have an ostream.  
backslash, \, is an escape 


# 1.6 C++ advantages
However, when you're writing longer programs, it's useful to have your declaration nearer to where it's used. That just makes the program a little more readable. So, if the code is a small amount of code, I would say, stay with the idea of putting all of your declarations at the head of the block, and common thing in right there.

the use of new:   
new is a memory management, and the memory it's getting is heap based on memory. 

"When you are running a program in which, for example you have main, and you're allocating variables. You're allocate them off the stack. So when you declare a simple int, the head of main, that memory allocation is automatic. And the allocation's automatic, it comes off what you call the stack. However, when you don't know what kind of memory you need yet, it has to be part of a calculation at runtime, then we use an alternate memory allocation strategy. And that's called memory allocation off the heap. And there's separate memory, a global chunk of memory that can be used to take memory off the heap, and return memory to the heap. And there in C, if you remember, there was a term or a standard function called malloc_( ). And there was also a function called free. These are replaced by new, and delete." Really important to understand.

中文的教程：[内存管理](https://chenqx.github.io/2014/09/25/Cpp-Memory-Management/)    
640K ought to be enough for everybody — Bill Gates 1981