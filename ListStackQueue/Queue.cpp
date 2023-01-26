#include "Queue.h"

Queue::Queue(int m) :List()
{
	maxque = m;
	quelength = 0;
}

void Queue::Add(string dat)
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
		quelength++;
	}
	else
		cout << "Queue list is full !" << endl;
}
string Queue::Extract()
{
	if (quelength != 0)
	{
		quelength--;
		Elem* temp = head;
		head = head->next;
		string temp_val = temp->data;
		delete temp;
		return temp_val;
	}
	else
	{
		cout << "Queue list is clear!" << endl;
		return "0";
	}
}
void Queue::Print()
{
	Elem* temp = head;
	for (int i = 0; i < quelength; i++)
	{
		cout << "|" << temp->data << "|\t";
		temp = temp->next;
	}
}

bool Queue::IsEmpty()
{
	return quelength == 0;
}
bool Queue::IsFull()
{
	return maxque == quelength;
}