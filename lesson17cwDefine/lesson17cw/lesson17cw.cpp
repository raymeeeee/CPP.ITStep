#include <ctime>
#include "Client.h"
#include <algorithm>
#include "ArrayTemplate.h"
#define FILES 3

int main(){
    
    srand(time(0));
    

    FILE* file = nullptr;


#if FILES == 1
    fopen_s(&file, "bank.txt", "w");
    Client Bob{ "Bob Polson", "0000000000000000", 2500 };
    if (file != NULL) {
        Bob.saveText(file);
        fclose(file);
    }
#elif FILES == 2
    fopen_s(&file, "bank.txt", "r");
    Clieb Bob;
    Bob.showClient();
    cout << "**************************************************************" << endl << endl;
    if (file != NULL) {
        Bob.printFile(file);
        fclose(file);
    }
    Bob.showClient();

#elif FILES == 3
    int n = 3;
    Client* arr = new Client[n]{
        {"Bob Polson", "8457485741637245", 1000},
        {"Tyler Durden", "8657421723457123", 0},
        {"John Narrator", "3845918234717328", 12500}
    };
    Client newClient{"", "", 0};

    newClient.fillClient();
    addItemBack(arr, n, newClient);

    /*fopen_s(&file, "bank.txt", "r");

    if (file != NULL) {
        fscanf_s(file, "%d", &n);
        arr = new Client[n];
        for (int i = 0; i < n; i++) {
            arr[i].printFile(file);
        }
        fclose(file);
    }*/

    sort(arr, arr + n, [](Client a, Client b) {return a.cash > b.cash; });

    for (int i = 0; i < n; i++) {
        cout << "Client#" << i + 1 << endl;
        arr[i].showClient();    
    }
   

    fopen_s(&file, "bank.txt", "w");

    if (file != NULL) {
        fprintf(file, "%d", n);
        for (int i = 0; i < n; i++) {
            arr[i].saveText(file);
        }
        fclose(file);
    }
#endif
}
