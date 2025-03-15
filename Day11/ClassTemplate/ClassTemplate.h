#ifndef __CLASS_TEMPLATE__
#define __CLASS_TEMPLATE__
#include <iostream>

using namespace std;

template <class T>
class Array
{
	private:
	T *p;
	int size;

	public:
	Array(T size)
	{
	this->size = size;
	this->p =  new T[this->size];;
	}
	Array(const Array& x)
	{
		this->size = x.size;
		this->p = new T [this->size];
		for(int i =0; i <this->size; i++)
		{
			this->p[i]= x.p[i];
		}
	}
	T& operator[](int index)
	{
		return p[index];
	}
	~Array()
	{
		delete []p;
	}
};

#endif
