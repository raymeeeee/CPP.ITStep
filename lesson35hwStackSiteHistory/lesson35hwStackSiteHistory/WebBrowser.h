#pragma once
#include "MyStack.h"

class WebBrowser
{
protected:
	myStack::Stack<string> historyCurrent; 
	myStack::Stack<string> historyPrev;
public:
	WebBrowser(string headBrowser) {
		historyCurrent.push_back(headBrowser); //https://somesite/ 
	    //example: https://www.google.com/
	}

	void visit(string url) {
		historyCurrent.push_back(url);
		while (!historyPrev.isEmpty()) {
			historyPrev.pop_back();
		}
	}

	void back() {
		if (historyCurrent.isEmpty()) {
			cout << "History is empty" << endl;
			return;
		}
		historyPrev.push_back(historyCurrent.top());
		historyCurrent.pop_back();
		
	}
	void forward() {
		if (historyPrev.isEmpty()) {
			cout << "History previous is empty" << endl;
			return;
		}
		historyCurrent.push_back(historyPrev.top());
		historyPrev.pop_back();
	}

	void getURL() {
		historyCurrent.showStack();
		cout << endl;
	}

};

