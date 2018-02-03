//this is my first project//#include<iostream>
using namespace std;
# ifndef L_Test
# define L_Test

template<class T>
class stack
{
	private:
		int stacksize;
		int top;
		T * astack;
	public:
		stack (int size=10);
		~stack(){delete[] astack;}
		int isfull();
		int isempty();
		int peek()
		{
		return astack[top];
		}

		void push(T num);
		void pop();
		void display();
};

template<class T>
stack<T>::stack(int size)
{
	stacksize=size;
	astack=new T[stacksize];
	top=-1;
}

template<class T>
int stack<T>::isfull()
{
	if(top==stacksize-1)
		return 1;
	else
		return 0;
}

template<class T>
int stack<T>::isempty()
{
	if (top==-1)
		return 1;
	else
		return 0;
}
template<class T>
void stack<T>::push(T num)
{
	if(isfull())
		cout<<"\n stack is full"<<endl;
	else 
	{
		astack[++top]=num;
		cout<<"\n num"<<"\n has been inserted \n"<<endl;
	}
}

template<class T>
void stack<T>::pop()
{
	if(isempty())
		cout<<"\n stack is empty \n"<<endl;
	else
		{
			T x;
			x=astack[top];
			top--;
			cout<<"\n deleted element is :"<<x;
		}
}
template<class T>
void stack<T>::display()
{
	int i;
	if(isempty())
	{
		cout<<"\n stack is empty \n"<<endl;
	}
	cout<<"\n the entered stack is: \n\n\t";
		for(i=0;i<=top;i++)
		{
			cout<<astack[i]<<"\n\t";
		}
	cout<<"\n\n";
		cout<<endl;
}
#endif
