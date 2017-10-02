#include <iostream>
using namespace std;
#define MAX 1000
class Stack
{
	int top;//contains the index of top element
public:
	int a[MAX];//maximum size of array

	Stack() //inline constructor
	{
		top=-1;
	}
	bool push(int x);//insert value x in the stack and it will return if it is possible to take value x or not
	int pop();//to remove an element from stack
	bool isEmpty();//check whether the stack is empty or not
};
bool Stack::push(int x)
{
	if(top>=MAX)
	{
		cout<<"Stack Overflow";
		return false;
	}
	else
	{
		a[++top]=x;
		return true;
	}
}
int Stack::pop()
{
	if(top<0)
	{
		cout << "Stack Underflow";
		return 0;
	}
	else
	{
		int x=a[top--];//different x from that of which is used in push
		return x;//returning pop value
	}
}
bool Stack::isEmpty()
{
	if(top<0)
	{
		return true;
	}
	else
		{return false;}
	
}
int main()
{
	struct Stack s;
	s.push(1);
	s.push(2);
	s.push(4);
	cout << s.pop() << " Popped from Stack"<<endl;
	return 0;
}