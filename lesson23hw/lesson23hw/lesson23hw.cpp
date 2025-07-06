#include "Computer.h"

int main()
{
	vector<Computer> ITstep;

	ITstep.push_back(Computer("LG05x1", 4.5, 4096, true, 5600));
	ITstep.push_back(Computer("Lenovo10x9", 6, 16384, true, 12100));
	ITstep.push_back(Computer("HP2000h", 3, 2048, false, 3990));
	for (auto item : ITstep) // for i in items (python)
	{
		item.showInfo();

	}cout << "-----------------------------------------------" << endl << endl;

	//1
	/*string name = "LG05x1";
	auto it = find_if(ITstep.begin(), ITstep.end(), [name](Computer a) {return name == a.getName(); });
	it->showInfo();*/

	//2
	//auto it = min_element(ITstep.begin(), ITstep.end(), [](Computer a, Computer b) {return a.getFrequency() < b.getFrequency(); });

	//it->showInfo();
	//cout << "-----------------------------------------------" << endl << endl;
	//ITstep.erase(it);

	//for (auto item : ITstep) // for i in items (python)
	//{
	//	item.showInfo();

	//}cout << "-----------------------------------------------" << endl << endl;

	//3
	/*auto it = count_if(ITstep.begin(), ITstep.end(), [](Computer a) {return a.getDVDROM() == true; });
	cout << it << endl;*/

	//4 ???????
	//for_each(ITstep.begin(), ITstep.end(), [](Computer &a) {
	//	if (a.getRAM() >= 16384) {
	//		a.setPrice(a.getPrice() + 2000);
	//	}
	//});
	//cout << "-----------------------------------------------" << endl << endl;
	//for (auto item : ITstep) // for i in items (python)
	//{
	//	item.showInfo();
	//}cout << "-----------------------------------------------" << endl << endl;


	//5
	//sort(ITstep.begin(), ITstep.end(), [](Computer a, Computer b) {return a.getPrice() < b.getPrice(); });
	//for (auto item : ITstep) // for i in items (python)
	//{
	//	item.showInfo();

	//}cout << "-----------------------------------------------" << endl << endl;

	//sort(ITstep.begin(), ITstep.end(), [](Computer a, Computer b) {return a.getPrice() > b.getPrice(); });
	//for (auto item : ITstep) // for i in items (python)
	//{
	//	item.showInfo();

	//}cout << "-----------------------------------------------" << endl << endl;
}

