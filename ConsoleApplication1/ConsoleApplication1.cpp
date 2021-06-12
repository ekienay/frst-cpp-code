#include <iostream>
#include "Object.h"
#include <list>
using namespace std;



int main()
{
	list<Product> list;

	Product cola;
	cola.setId(1);
	cola.setName("Cola");
	cola.setPrice(87.00);
	list.push_back(cola);

	Product bread;
	bread.setId(2);
	bread.setName("bread");
	bread.setPrice(36.90);
	list.push_back(bread);

	std:: list<Product> :: iterator it;

	for (it = list.begin(); it != list.end(); it++) {
		cout << endl;
		cout << it -> getId() << endl << it -> getName() << endl << it -> getPrice() << endl;
	}


	return 0;
}