#include "Stack.h"
#include<iostream>
using namespace std;

Stack::Stack(int m):List()
{
	maxstack = m;
	stacklength = 0;
}

void Stack::Add(string dat)
{
	if (!IsFull())
	{
		Elem* temp = new Elem();
		temp->data = dat;
		temp->next = NULL;
		if (head != NULL) {
			tail->next = temp;
			tail = temp;
		}
		else {
			head = tail = temp;
		}
		stacklength++;
	}
	else
		cout << "Stack list is full !" << endl;
}

string Stack::Extract()
{
	Elem* temp = head;
	Elem* temp2 = tail;
	if (!IsEmpty())
	{
		if (stacklength != 1)
		{
			stacklength--;
			string temp_val = temp2->data;
			delete temp2;
			for (int i = 0; i < stacklength - 1; i++)
			{
				temp = temp->next;
			}
			temp->next = NULL;
			tail->next = temp;
			tail = temp;
			return temp_val;
		}
		else
		{
			stacklength--;
			string temp_val = tail->data;
			delete temp2;
			head = tail = NULL;
			return temp_val;
		}
	}
	else
	{
		cout << "Stack list is empty" << endl;
		return "0";
	}
}

void Stack::Print()
{
	if (!IsEmpty())
	{
		int value = stacklength;
		Elem* temp = head;
		for (int i = 0; i < stacklength; i++)
		{
			value--;
			temp = head;
			for (int i = 0; i < value; i++)
			{
				temp = temp->next;
			}
			cout << "|" << temp->data << "|\t";
		}
	}
	else
		cout << "Stack list is empty!" << endl;
}

bool Stack::IsEmpty()
{
	return stacklength==0;
}

bool Stack::IsFull()
{
	return maxstack==stacklength;
}
