#pragma once
#include <iostream>
using namespace std;

namespace myList {

	template<typename Type>
	class DNode {
	public:
		Type info; // save
		DNode* next; //address to the next node
		DNode* prev; //address to the prev node

		DNode(Type value) {
			info = value;
			next = nullptr;
			prev = nullptr;
		}


		void show() {
			cout << "Info: " << info << endl;
			cout << "\tPrev: " << prev << endl;
			cout << "\tNext: " << next << endl << endl;

		}
	};

	template<typename TypeList>
	class DList {
		DNode<TypeList>* head; //address of first element
		DNode<TypeList>* tail; //address of last element
	public:
		DList() {
			head = nullptr;
			tail = nullptr;
		};
		~DList() {
			DNode<TypeList>* p = head;
			DNode<TypeList>* pDel = head;
			while (p != nullptr) {
				pDel = p;
				cout << "Delete: "; pDel->show();

				p = p->next;
				delete pDel;

			};
		};

		void push_back(TypeList value) {
			//create new node
			DNode<TypeList>* el = new DNode<TypeList>(value);
			if (head == nullptr) { //if first element
				head = el;
				tail = el;
			}
			else { //if NOT first
				//tail saves address of new node
				tail->next = el;
				el->prev = tail; //new node points at tail
				//new value of tail
				tail = el;
			}
		}
		void show() {
			if (head == nullptr) cout << "List is empty!\n";

			DNode<TypeList>* p = head;
			while (p != nullptr) {
				//cout << p->info << " "; 
				p->show();
				p = p->next;
			}

		}

		void showReverse() {
			if (head == nullptr) cout << "List is empty!\n";

			DNode<TypeList>* p = tail;
			while (p != nullptr) {
				//cout << p->info << " "; 
				p->show();
				p = p->prev;
			}
		}
		DNode<TypeList>* search(TypeList value) {

			DNode<TypeList>* p = head;
			while (p != nullptr) {
				//cout << p->info << " "; 
				p->show();
				if (p->info == value) {
					return p;
				}
				p = p->next;
			}
			return nullptr;
		}

		void push_front(TypeList value) {
			
			//create new node
			DNode<TypeList>* el = new DNode<TypeList>(value);
			if (head == nullptr) { //if first element
				head = el;
				tail = el;
			}
			else { //if NOT 
				el->next = head;
				head->prev = el;
				head = el;

			}
		}
		void insertBefore(TypeList before, TypeList value) {
			DNode<TypeList>* p = head;
			DNode<TypeList>* el = new DNode<TypeList>(value);
			while (p != nullptr) {
				//cout << p->info << " "; 
				//p->show();
				if (p->info == before) {
					DNode<TypeList>*  prevEl = p->prev;
					prevEl->next = el;
					el->prev = prevEl;
					el->next = p;
					p->prev = el;
					return;
				}
				p = p->next;
			}
			
		}
		void insertAfter(TypeList after, TypeList value) {
			DNode<TypeList>* p = head;
			DNode<TypeList>* el = new DNode<TypeList>(value);
			while (p != nullptr) {
				//cout << p->info << " "; 
				//p->show();
				if (p->info == after) {
					DNode<TypeList>* nextEl = p->next;
					nextEl->prev = el;
					el->next = nextEl;
					el->prev = p;
					p->next = el;
					return;
				}
				p = p->next;
			}
		}
		void erase(TypeList value) {

			DNode<TypeList>* p = head;
			while (p != nullptr) {
				//cout << p->info << " "; 
				//p->show();
				if (p->info == value) {
					DNode<TypeList>* prevEl = p->prev;
					DNode<TypeList>* nextEl = p->next;
					prevEl->next = nextEl;
					nextEl->prev = prevEl;
					return;
				}
				p = p->next;
			}
			delete p;
		}
	};
}

