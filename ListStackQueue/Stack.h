#pragma once
#include "List.h"
class Stack :public List
{
	int maxstack;
	int stacklength;
public:
	Stack(int m);
	void Add(string dat)override;//����� ���������� ���� � ����
	string Extract()override;//����� ���������� �� �����
	void Print()override;//������ �� ����� 
	bool IsEmpty();//�������� �� �������
	bool IsFull();//�������� �� �������
};

