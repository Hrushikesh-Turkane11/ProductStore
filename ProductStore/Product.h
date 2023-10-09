#ifndef PRODUCT_H
#define PRODUCT_H
#include <bits/stdc++.h>
using namespace std;
class Product
{
	private:
		int id;
		string title;
		string description;
		double unitPrice;
		int likes;
		
	public:
		Product();
		Product(int pid,string ttl,string desc,double price,int l);
		~Product();
	protected:
};

#endif
