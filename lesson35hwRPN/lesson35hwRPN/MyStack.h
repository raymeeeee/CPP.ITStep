#include <iostream>
using namespace std;

namespace myStack {
	template <typename T>
	class Node {
	public:
		T info;
		Node* next;
		Node* prev;

		Node(T value) { info = value; next = prev = nullptr; }
	};


	template <typename U>
	class Stack {
		Node<U>* head;
		Node<U>* current; //tail
	public:
		Stack() { head = current = nullptr; }
		~Stack() {
			while (!isEmpty()) {
				pop_back();
			}
		}

		bool isEmpty()const {
			/*if (head == nullptr) {
				return true;
			}
			else {
				return false;
			}*/
			return (head == nullptr);
		}
		U top()const {
			if (isEmpty()) throw "Stack is empty";
			return current->info;
		}
		void push_back(U value) {
			Node<U>* el = new Node<U>(value);
			if (isEmpty()) {
				head = el;
				current = el;
			}
			else {
				current->next = el;
				el->prev = current;
				current = el; //current = current->next;
			}
		}
		void pop_back() {
			if (!isEmpty()) {
				if (head != current) { //current delete
					current = current->prev; //previous object // 1 before end
					delete current->next; //delete last object
					current->next = nullptr; //previous object = last
				}
				else { //head delete
					delete head;
					head = current = nullptr;
				}
			}

		}
		void showStack()const {
			if (isEmpty()) {
				cout << "Stack is empty";
				return;
			}
			Node<U>* p = head;
			while (p != nullptr) {
				cout << p->info << " ";
				p = p->next;
			}
			cout << endl;
		}
	};
}
