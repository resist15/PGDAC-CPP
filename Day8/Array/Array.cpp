#include<iostream>
using namespace std;

class Array
{
	private:
		int *p;
		int size;
	public:
		// default constructor
		Array(int size)
		{
			cout<<"Constructor"<<endl;
			this->size = size;
			this->p =  new int[this->size];;
		}

		// parameterized constructor
		Array(const Array& x)
		{
			cout<<"Copy constructor"<<endl;
			this->size = x.size;
			this->p = new int [this->size];
			
			for(int i =0; i <this->size; i++)
			{
				this->p[i]= x.p[i];
			}
		}

		int& set(int index)
		{
			return 	p[index];
		}

		int display(int index)
		{
			return p[index];
		}

		// destructor
		~Array()
		{
			cout<<"Destructor"<<endl;
			delete []p;
		}
};

int main()
{
	Array a(2);
	a.set(0) = 79;
	a.set(1) = 60;
	cout<<"\n Value="<<a.display(0);
	cout<<"\n Value="<<a.display(1);
	return 0;
}
