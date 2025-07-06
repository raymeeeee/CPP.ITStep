#include "OrdersSystem.h"

int Order::ms_orderID = 0;

int main()
{
	Order a, b(10, "Chiken Burger Menu", 359), c;

	OrdersSystem abc;
	
	abc.createNewOrder(b);
	abc.sortOrders();
	abc.showOrders();
	cout << endl << endl;;
	abc.doOrder();
	cout << endl << endl;
	abc.showOrders();
}

