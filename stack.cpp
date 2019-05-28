#include <iostream>
#include <string>
#define SIZE 100 //?????? ?????

using namespace std;

struct stack 
{
	int storage[SIZE];
	int cursor = 0;    //????????? ?? ?????? ??????????? ??????? 
	void push(int n) 
	{
		storage[cursor] = n;
		cursor++;
	}
	int pop() 
	{
		return storage[--cursor];
	}
	int back() 
	{
		return storage[cursor - 1];
	}
	unsigned int size() 
	{
		return cursor;
	}
	void clear() {
		cursor = 0;
	}
}
;

int main() 
{
	stack s;
	string str;
	int n;
	while (cin >> str) 
	{
		if (str == "push") 
		{
			cin >> n;
			s.push(n);
			cout << "ok" << endl;
		}
		else if (str == "pop") cout << s.pop() << endl;
		else if (str == "back") cout << s.back() << endl;
		else if (str == "size") cout << s.size() << endl;
		else if (str == "clear") 
		{
			s.clear();
			cout << "ok" << endl;
		}
		else if (str == "exit") 
		{
			cout << "bye" << endl;
			break;
		}
	}
	return 0;
}

