# 2.1 C++ Generics and Functions

C++ new stuff in functions:   
1. default parameters, variable argument list
1. const parameteres
1. multiple types in a generic
1. operator overloading (like the bit operator overloading using <<)

generic sum of array:
```
template <class T>
T sum(const T data[], int size, T s = 0)
{
    for (int i = 0; i < size; ++i)
        s += data[i];
    return s;
}
```