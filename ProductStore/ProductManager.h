#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H
#include "Product.h"
class ProductManager
{
	public:
		ProductManager();
		bool Insert (Product p);
		bool Delete (int id);
		bool Update(Product p);
//		Product retreive(int id);
		
		
		~ProductManager();
	protected:
};

#endif
