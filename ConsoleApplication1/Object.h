#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{

private:
	int id;
	string name;
	double price;

public:
	Product() {
		id;
		name;
		price;
	}

	Product(int product_id, string product_name, double product_price) {
		id = product_id;
		name = product_name;
		price = product_price;
	}

	void setId(int prod_id) {
		id = prod_id;
	}

	void setName(string prod_name) {
		name = prod_name;
	}

	void setPrice(double prod_price) {
		price = prod_price;
	}

	int getId() {
		return id;
	}

	string getName() {
		return name;
	}

	double getPrice() {
		return price;
	}

	
	
	void get(){
		cout << "id: " << id << "\nname: " << name << "\nprice: " << price << "\n";
}

};


