#pragma once
#include "List.h"
//class Queue :public List
//{
//	int maxque;//������������ ���-�� �������� � �������
//	int quelength;//���-�� �������������� � �������
//public:
//	Queue(int m);//���������� ����������� �� ��������� ��������, ���������������� ����
//	void Add(string dat)override;//����� ���������� ���� � �������
//	string Extract()override;//����� ���������� �� �������
//	void Print()override;//������ �� ����� y
//	bool IsEmpty();//�������� �� �������
//	bool IsFull();//�������� �� �������
//};

//��������� ���������� �������\\
 
template<class t>
class Queue :public List<t>
{
	int maxque;
	int quelength;
	t temp;
public:
	Queue(int m);
	void Add(t dat)override;
	t Extract()override;
	void Print()override;
	bool IsEmpty();
	bool IsFull();
};

template<class t>
inline Queue<t>::Queue(int m):List<t>()
{
	maxque = m;
	quelength = 0;
}

template<class t>
inline void Queue<t>::Add(t dat)
{
	if (!IsFull())
	{
		quelength++;
		Elem<t>* _new = new Elem<t>;
		_new->data = dat;
		_new->next = NULL;
		if (head != NULL)
		{
			tail->next = _new;
			tail = _new;
		}
		else
			head = tail = _new;
	}
	else
		cout << "List is full !" << endl;
}

template<class t>
inline t Queue<t>::Extract()
{
	if (!IsEmpty())
	{
		Elem<t>* temp = head;
		head = head->next;
		t temp_val = temp;
		delete temp;
		return temp_val;
	}
	else
		cout << "List is clear!" << endl;
}

template<class t>
inline void Queue<t>::Print()
{
	Elem<t>temp = head;
	for (int i = 0; i < quelength; i++)
	{
		cout << "|" << temp->data << "|\t";
		temp=temp->next;
	}
}

template<class t>
inline bool Queue<t>::IsEmpty()
{
	return quelength==0;
}

template<class t>
inline bool Queue<t>::IsFull()
{
	return maxque==quelength;
}

