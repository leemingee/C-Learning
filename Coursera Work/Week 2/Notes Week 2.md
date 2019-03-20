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

int main(){
    int[] a = {1,2,3};
    double b ={1.5, 2.5, 4.5};
    cout << sum(a, 3) << endl;
    cout << sum(b, 3) << endl;
}
```
T s is the default value:     
So this means that I don't have to specify things when it's the usual case, ti's going to be assumed to be 0. But if it's not the usual case I will have to substitute an actual parameter for this formal parameter.

So far, the template are the templates of one meta argument. But there is actually no restriction about it.

# 2.2 Multiple Template Arguments

But keep in mind that most of what you wanna do is templates of one argument. Once you start multiple argumentative templates, you get into horrendous complexity, unneeded complexity in most cases.

