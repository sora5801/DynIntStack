#pragma once
class DynIntStack
{
private:
	struct StackNode
	{
		int value;
		StackNode *next;
	};
	StackNode *top;
public:
	DynIntStack()
	{
		top = nullptr;
	}

	~DynIntStack();

	void push(int);
	void pop(int&);
	bool isEmpty();
};