#include "RPNreader.h"

int main()
{
    RPNreader rpn("85 123 + 5 * 91 -");
    try {
        float result = rpn.read();
        cout << "---result---" << endl;
        cout << result << endl;
    }
    catch (const exception& e){
        cout << e.what() << endl;
    }
    //не всегда работает exception
}

