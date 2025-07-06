#include "MyQueue.h"
#include <string>

int main()
{
    myQueue::Queue<string> nums;
    nums.push_back("one");
    nums.push_back("two");
    nums.push_back("three");
    nums.push_back("four");
    nums.push_back("five");
    nums.push_back("six");
    nums.show();

    nums.pop_front();
    nums.pop_front();

    nums.push_back("seven");
    nums.show();
    cout << endl;

    int f = 0;
    int t = 0;

    while (!nums.isEmpty()) {
        string num = nums.first();
        if (num[0] == 'f') {
            f++;
        }
        else if (num[0] == 't') {
            t++;
        }
        nums.pop_front();
    }

    cout << "f: " << f << endl;
    cout << "t: " << t << endl;
}

