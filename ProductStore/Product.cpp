#include "Product.h"

Product::Product()
{

}
Product::Product(int pid,string ttl,string desc,double price,int l)
{
	this->id=pid;
	this->title=ttl;
	this->description=desc;
	this->unitPrice=price;
	this->likes=l;
}

Product::~Product()
{
}
