#include <iostream>
using namespace std;

struct Path {
    unsigned long long index = 0;
    char from[50] = "";
    char to[50] = "";
    float price = 0;
    float distance = 0;

    void fillPath() {
        cout << "Index:" << endl;
        cin >> index;
        cout << "From:" << endl;

        cin.ignore();
        cin.getline(from, 50);
        cout << "To:" << endl;
     
        cin.getline(to, 50);
        cout << "Price:" << endl;

        cin >> price;
        cout << "Distance:" << endl;
        cin >> distance;
        cout << endl;
    }

    void showPath() {
        cout << index << endl;
        cout << from << endl;
        cout << to << endl;
        cout << price << endl;
        cout << distance << endl << endl;
    }

};

void showPaths(Path* arr, int size) {
    for (int i = 0; i < size; i++){
        arr[i].showPath();
    }
}


void createPathArray(Path*& arr, int size) {
    arr = new Path[size];
    for (int i = 0; i < size; i++){
        arr[i].fillPath();
    }
}

int maxDistance(Path* arr, int size) {
    int find = 0;
    int tmp = arr[0].distance;
    for (int i = 0; i < size; i++){
        if (tmp < arr[i].distance) {
            find = i;
        }
    }
    return find;
}


template <typename T>
void sort_if(T* arr, int size, bool (*cmp)(T, T)) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (cmp(arr[j + 1], arr[j])) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void showPathName(Path* arr, int size, const char* name) {
    for (int i = 0; i < size; i++){
        if (strcmp(arr[i].from, name) == 0 || strcmp(arr[i].to, name) == 0) {
            arr[i].showPath();
        }
    }
}

void increasePrice(Path*& arr, int size, float distance) {
    for (int i = 0; i < size; i++) {
        if (arr[i].distance > distance) {
            arr[i].price += arr[i].price * 0.15;
        }
    }
}

template <typename T>
void deletePath(T*& arr, int& size, unsigned long long index) {
  
    T* tmp = new T[size - 1];
    for (int i = 0, j = 0; i < size; i++) {
        if (arr[i].index != index) {
            tmp[j] = arr[i];
            j++;
        }
    }

    if (arr != nullptr) delete[] arr;
    arr = tmp;
    size--;
}

int main()
{
    int size = 3;
    Path* array = nullptr;
    createPathArray(array, size);

    cout << "--------------------------------------------------------" << endl;

    int maxDist = maxDistance(array, size);
    cout << maxDist << endl;

    cout << "--------------------------------------------------------" << endl;
    
    sort_if<Path>(array, size, [](Path a, Path b) {return a.index < b.index; });
    showPaths(array, size);

    cout << "--------------------------------------------------------" << endl;

    char nameChoice[50] = "";
    cin.ignore();
    cin.getline(nameChoice, 50);
    cout << endl;
    showPathName(array, size, nameChoice);

    cout << "--------------------------------------------------------" << endl;

    float distanceChoice = 0;
    cin >> distanceChoice;
    cout << endl;
    increasePrice(array, size, distanceChoice);

    showPaths(array, size);

    cout << "--------------------------------------------------------" << endl;
    
    unsigned long long indexChoice = 0;
    cin >> indexChoice;
    cout << endl;

    deletePath(array, size, indexChoice);
    showPaths(array, size);

    delete[] array;
}
