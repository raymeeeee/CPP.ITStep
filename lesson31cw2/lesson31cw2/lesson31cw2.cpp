#include "Lottery.h"
#include <typeinfo>
int main()
{
	srand(time(0));
	Lottery lottery;
	lottery.addProduct(new Products::Fun::Toy("Dinosaur", "ToysAB", 359.9, 3, "NN#9438"));
	lottery.addProduct(new Products::Fun::Toy("Lego Set: Death Star", "Lego", 10000, 12, "NN#1254"));
	lottery.addProduct(new Products::Sport::Clothing("Backpack", "JackWolfskin", 4220, 16, "Traveling", "M"));

	lottery.generateWinner();

	//Products::Fun::Toy a("Lego Set: Death Star", "Lego", 10000, 12, "NN#1254");
	//cout << string(typeid(a).name()) << endl;
}
