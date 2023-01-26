#include<iostream>
#include "_list_.h"
#include<conio.h>
#include<string>
using namespace std;

int main()
{
	List* ptr=nullptr;
	cout << "Enter max number elements for list: ";
	int num;
	cin >> num;
	system("cls");
	cout << "Create list bassed on:\n1. Stack\n2. Queue" << endl;
	char choice = _getch();
	switch (choice)
	{
	case '1':
		ptr = new Stack(num);
		break;
	case '2':
		ptr = new Queue(num);
		break;
	default:
		cout << "error" << endl;
		break;
	}
	system("cls");
	string *str=nullptr;
	int size = 5;
	str = new string[size];
	for (int i = 0; i < size; i++)
	{
		cin >> str[i];
		ptr->Add(str[i]);
	}
	cout << "Extract: " << ptr->Extract() << endl;
	ptr->Print();
	delete[]str;
	delete ptr;
	
}