#include "Stack.h"
#include <stack>
#include <string>
using namespace myStack;

bool isPalindrome(string text) {
    Stack<char> palindrome;
    for (int i = 0; i < text.length(); i++)
    {
        palindrome.push_back(text[i]);
    }

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != palindrome.top()) {
            return false;
        };
        palindrome.pop_back();
    }
    return true;
}

bool correctBrackets(string line) {
    Stack<char> brackets; //[]{}()
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == '[' || line[i] == '(' || line[i] == '{'){
            brackets.push_back(line[i]);
        }
        else if (line[i] == ']' || line[i] == ')' || line[i] == '}') {
            if (brackets.isEmpty()) {
                return false;
            }
            if ((brackets.top() == '[' && line[i] == ']') || (brackets.top() == '(' && line[i] == ')') || (brackets.top() == '{' && line[i] == '}')) {
                brackets.pop_back();
            }
            else {
                return false;
            }
        }
    }
    return brackets.isEmpty();
}

//stl stack
string reversePolishNotation(string math) {
    std::stack<char> operation;
    string reversePN;
    for (int i = 0; i < math.length(); i++){
        if (math[i] == '(') {
            operation.push(math[i]);
        }
        else if (isdigit(math[i])) {
            //reversePN += to_string(atof(math.c_str()));
            //reversePN += " ";
            //i++;
            //while (isdigit(math[i]) && i < math.length()) {
            //    i++;
            //}
            //math.erase(0, i);
            //i = 1;
            ////cout << math << endl;

            reversePN += math[i];
        }
        else if (math[i] == '+' || math[i] == '-' || math[i] == '*' || math[i] == '/') {
            if (operation.empty()) {
                operation.push(math[i]);
            }
            else {
                if ((operation.top() == '*' || operation.top() == '/')
                    && (math[i] == '+' || math[i] == '-')) {
                    reversePN += operation.top();
                    operation.pop();
                    operation.push(math[i]);
                }
                else if ((operation.top() == '*' || operation.top() == '/')
                    && (math[i] == '*' || math[i] == '/')) {
                    reversePN += operation.top();
                    operation.pop();
                    operation.push(math[i]);
                }
                else if ((operation.top() == '+' || operation.top() == '-')
                    && (math[i] == '+' || math[i] == '-')) {
                    reversePN += operation.top();
                    operation.pop();
                    operation.push(math[i]);
                }
                else {
                    operation.push(math[i]);
                }
            }
            //math.erase(0, 1);
        }
        else if (math[i] == ')') {
            while (!operation.empty() && operation.top() != '(') {
                reversePN += operation.top();
                operation.pop();
            }
            operation.pop();
        }
    }

    while (!operation.empty()) {
        reversePN += operation.top();
        operation.pop();
    }
    return reversePN;
}

int main()
{
    //Stack<string> p;
    //p.push_back("Students");
    //p.push_back("of");
    //p.push_back("the");
    //p.push_back("group");
    //p.push_back("P32");
    //p.showStack();
    //cout << "==================================" << endl;
    //cout << "Top: " << p.top() << endl; //P32
    //cout << "==================================" << endl;
    //p.pop_back();
    //p.showStack();
    //cout << "==================================" << endl;
    //while (!p.isEmpty()) {
    //    if (p.top().length() == 2) cout << p.top() << endl;
    //    p.pop_back();
    //}
    //cout << "==================================" << endl;

    //p.showStack();
    
//==============================================================================

    /*cout << "level: " << isPalindrome("level") << endl;
    cout << "hello: " << isPalindrome("hello") << endl;
    cout << "aabbaa: " << isPalindrome("aabbaa") << endl;*/
//==============================================================================

    /*cout << "[()]{}: " << correctBrackets("[()]{}") << endl;
    cout << "][: " << correctBrackets("][") << endl;
    cout << "[({)]}: " << correctBrackets("[({)]}") << endl;
    cout << "((print(a[1])): " << correctBrackets("((print(a[1]))") << endl;*/
//==============================================================================

    cout << reversePolishNotation("2+5*3") << endl;
    cout << reversePolishNotation("2*5+3") << endl;
    cout << reversePolishNotation("(12+25)*3") << endl;
}

