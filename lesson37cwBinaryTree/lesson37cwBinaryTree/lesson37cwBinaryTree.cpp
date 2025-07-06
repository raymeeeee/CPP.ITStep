#include "BinTree.h"

int main()
{
    BinTree<int> bin;
    bin.insert(12);
    bin.insert(52);
    bin.insert(8);
    bin.insert(17);
    bin.insert(42);
    bin.insert(10);
    bin.insert(28);
    //system("pause");

    //bin.search(30);
    bin.showTree();

    bin.~BinTree();
    cout << endl;
    bin.showTree();
}

