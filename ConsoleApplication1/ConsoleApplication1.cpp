﻿#include <iostream>
#include "Object.h"
#include <list>
#include <conio.h>
#include <windows.h>
using namespace std;



int main()
{
	list<Product> list;

	int id;
	string name;
	double price;

	char ch;
	bool loop = true;

	cout << "-------------- Press esc to exit --------------" << endl;

	

	while (loop == true) {

		cout << endl;
		cout << "Input id: ";
		cin >> id;
		cout << "Input name: ";
		cin >> name;
		cout << "Input price: ";
		cin >> price;
		cout << endl;
		cout << "---- Press enter to next ----" << endl;

		Product product;
		product.setId(id);
		product.setName(name);
		product.setPrice(price);
		list.push_back(product);

		ch = _getch();

		if (ch == 27) {

			loop = false;
			std::list<Product> ::iterator it;

			for (it = list.begin(); it != list.end(); it++) {
				cout << endl;
				cout << "----------------------------------------------------" << endl;
				cout << "id: " << it->getId() << endl << "name: " << it->getName() << endl << "price: " << it->getPrice() << endl;
				cout << "----------------------------------------------------";
			}
		}
	}

	return 0;
}