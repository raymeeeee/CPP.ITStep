#pragma once
#include <vector>
#include <algorithm>
#include "Order.h"
class OrdersSystem
{
	vector<Order> m_ordersSystem;

public:
	OrdersSystem();

	void createNewOrder(Order order);
	void sortOrders();
	void doOrder();

	void showOrders();
};

