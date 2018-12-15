#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	const int MAX = 8;
	int count;

	stack < int, vector<int> > iStack;

	for (count = 2; count < MAX; count += 2)
	{
		cout << "Pushing " << count << endl;
		iStack.push(count);
	}

	cout << "The size of the stack is ";
	cout << iStack.size() << endl;

	for (count = 2; count < MAX; count += 2)
	{
		cout << "Popping " << iStack.top() << endl;
		iStack.pop();
	}
	system("pause");
}