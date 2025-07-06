#include "MovieDVD.h"

int main()
{
	MusicCD item1("New Planet", "Ivoxygen", 2021, 150, 2.37);
	item1.showMusicCD();

	MovieDVD item2("Interstellar", "USA", 2018, 239, 2.30, "Drama");
	cout << item2.getPrice() << endl;
	item2.showMovieDVD();
	item2.getPrice();
}

