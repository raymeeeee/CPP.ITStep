#pragma once
#include <iostream>
using namespace std;

namespace myList {

	template<typename Type>
	class Node {
	public:
		Type info; // save
		Node* next; //address to the next node

		Node(Type value) {
			info = value;
			next = nullptr;
		}
	

		void show() {
			cout << "Info: " << info << endl;
			cout << "\tNext: " << next << endl << endl;
		}
	};
	
	template<typename TypeList>
	class MyList {
		Node<TypeList>* head; //address of first element
		Node<TypeList>* tail; //address of last element
	public:
		MyList() {
			head = nullptr;
			tail = nullptr;
		};
		~MyList() {
			Node<TypeList>* p = head;
			Node<TypeList>* pDel = head;
			while (p != nullptr) {
				pDel = p;
				cout << "Delete: "; pDel->show();

				p = p->next;
				delete pDel;

			};
		};

		void push_back(TypeList value) {
			//create new node
			Node<TypeList>* el = new Node<TypeList>(value);
			if (head == nullptr) { //if first element
				head = el;
				tail = el;
			}
			else { //if NOT first
				//tail saves address of new node
				tail->next = el;
				//new value of tail
				tail = el;
			}
		}
		void show() {
			if (head == nullptr) cout << "List is empty!\n";

			Node<TypeList>* p = head;
			while (p != nullptr) {
				//cout << p->info << " "; 
				p->show();
				p = p->next;
			}

		}

	};
}