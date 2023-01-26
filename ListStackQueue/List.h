#pragma once
#include<iostream>
using namespace std;
//неудачная попытка с шаблоном

template<class t>
struct elem
{
public:
	t data;
	elem* next;
};

template<class t>
class list abstract
{
protected:
	elem<t>* head;
	elem<t>* tail;
public:
	list();
	virtual ~list();
	void del();
	void delall();
	virtual void add(string dat)abstract;
	virtual string extract()abstract;
	virtual void print()abstract;
};

template<class t>
inline list<t>::list()
{
	head = tail = NULL;
}

template<class t>
inline list<t>::~list()
{
	delall();
}

template<class t>
inline void list<t>::del()
{
	elem<t>* temp = head;
	head = head->next;
	delete temp;
}

template<class t>
inline void list<t>::delall()
{
	while (head != 0)
		del();
}

//struct Elem//узел
//{
//public:
//	string data;
//	Elem* next;
//};
////абстрактынй список
// class List abstract 
//{
//protected:
//	Elem* head;//голова
//	Elem* tail;//хвост
//public:
//	List();//конструктор по умолчанию
//	virtual ~List();//вирт. дестркутор
//	void Del();//удаление одного элемента
//	void DelAll();//удаление всех(вызывается в деструкторе)
//	//абстрактные методы
//	virtual void Add(string dat)abstract;
//	virtual string Extract()abstract;
//	virtual void Print()abstract;
//};
//
// inline List::List()
// {
//	 head = tail = NULL;
// }
//
// inline List::~List()
// {
//	 cout << "\nDESTRUCTOR" << endl;
//	 DelAll();
// }
//
// inline void List::Del()
// {
//	 cout<<"\nDel_elem"<<endl;
//	 Elem* temp = head;
//	 head = head->next;
//	 delete temp;
// }
//
// inline void List::DelAll()
// {
//	 while (head != NULL)
//		 Del();
// }
