#ifndef ___TEMPLATEDAY11_H___
#define ___TEMPLATEDAY11_H___

template<typename T>
void Swap(T &x, T &y)
{
     T temp = x;
     x = y; 
     y = temp;
}

template<class T>
T Add(T x, T y)
{
     return x + y;
}

template<class T>
T Subtract(T x, T y)
{
     return x - y;
}

template<class T>
T Divide(T x, T y)
{
     return x / y;
}

template<class T>
T Multiply(T x, T y)
{
     return x * y;
}

#endif

