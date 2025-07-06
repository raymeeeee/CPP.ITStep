#include "Bird.h"
#include "Artiodactyl.h"

int main()
{
    Bird a("Rook", "Corvidae", "Corvus", 1.1, 1);
    Artiodactyl b("Pig", "Suidae", "Sus", 35.2, "East");
    a.showBird();
    cout << "==========" << endl;
    b.showArtiodactyl();
}

