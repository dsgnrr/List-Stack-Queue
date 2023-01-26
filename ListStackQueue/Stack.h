#pragma once
#include "List.h"
class Stack :public List
{
	int maxstack;
	int stacklength;
public:
	Stack(int m);
	void Add(string dat)override;//метод добавления узла в стэк
	string Extract()override;//метод извлечения из стэка
	void Print()override;//печать на экран 
	bool IsEmpty();//проверка на пустоту
	bool IsFull();//проверка на полноту
};

