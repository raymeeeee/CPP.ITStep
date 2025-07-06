#pragma once
#include <string>
#include "MyStack.h"

class RPNreader
{
protected:
	string RPN;
	myStack::Stack<int> rpnStack;
public:
	RPNreader(string RPN) {
		this->RPN = RPN;
	}

	float read() {
		string num = "";
		for (int i = 0; i < RPN.length(); i++)
		{
			
			if (isdigit(RPN[i])) {
				num += RPN[i];
				cout << num << endl;
			}
			else if (RPN[i] == ' ') {
				if (num != "") {
					rpnStack.push_back(stoi(num));
					rpnStack.showStack();
					num = "";
				}
			}
			else {
				int a = rpnStack.top();
				
				rpnStack.pop_back();
				int b = rpnStack.top();
				
				rpnStack.pop_back();
				float result = 0;
				switch (RPN[i])
				{
				case '+':
					result = b + a;
					rpnStack.push_back(result);
					rpnStack.showStack();
					
					break;
				case '-':
					result = b - a;
					rpnStack.push_back(result);
					rpnStack.showStack();
					
					break;
				case '*':
					result = b * a;
					rpnStack.push_back(result);
					rpnStack.showStack();
					
					break;
				case '/':
					result = b / a;
					rpnStack.push_back(result);
					rpnStack.showStack();
					
					break;
				}
				
			}
		}
		float result = rpnStack.top();
		rpnStack.pop_back();
		if (!rpnStack.isEmpty()) throw exception("Incorrect writing");
		return result;
	}
};

