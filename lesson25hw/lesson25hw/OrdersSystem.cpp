#include "OrdersSystem.h"

OrdersSystem::OrdersSystem()
{	
	Order a;
	for (int i = 0; i < 5; i++) //default 5 orders
	{
		m_ordersSystem.push_back(a);
	}
}

void OrdersSystem::createNewOrder(Order order)
{
	m_ordersSystem.push_back(order);
}

void OrdersSystem::sortOrders()
{
	sort(m_ordersSystem.begin(), m_ordersSystem.end(), [](Order a, Order b) {return a.getCookingTime() < b.getCookingTime(); });
}

void OrdersSystem::doOrder()
{
	sort(m_ordersSystem.begin(), m_ordersSystem.end(), [](Order a, Order b) {return a.getCookingTime() > b.getCookingTime(); });
	m_ordersSystem.back().showOrder();
	m_ordersSystem.pop_back();
	sort(m_ordersSystem.begin(), m_ordersSystem.end(), [](Order a, Order b) {return a.getCookingTime() < b.getCookingTime(); });
}

void OrdersSystem::showOrders()
{

	for (int i = 0; i < m_ordersSystem.size(); i++) //default 5 orders
	{
		cout << "---------------------" << endl;
		m_ordersSystem[i].showOrder();
		cout << "---------------------" << endl;
	}
}
