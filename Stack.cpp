#ifdef _DEBUG
#include <iostream>
using namespace std;
#endif

#include "Stack.h"

Stack::Stack() {	// �⺻������ default constructor

	head = 0;
}

Stack::Stack(Stack &stack) {	// ��������� copy constructor
	Stack *q = new Stack;// Ŭ���� Ÿ������ �����Ҵ�. �������� �Ǿ� �����ϱ� ������ 1�� �� �����.
	Node *p = stack.head; // ����ü Ÿ������ ����
	while (p != nullptr)
	{
		q->push(p->item); // push�� �����Ѵ�. // q�� �Ű��ش�.
		p = p->next; // p �������� ��ġ�� �ٲ��ش�.
	}

	while (!q->isempty()) // ������ �ȿ��� �ٸ� �Լ��� ������ �� �� �ִ�. 
	{
		int item; 
		q->pop(item); // pop�� ���� item���� ���Եȴ�. // Ư���� ǥ������̴�.
		push(item);// ������ ���ÿ� �־��ش�. // �׷� ���� �ȴ�.
	}
}
								// ���� : ��������� ����
Stack::~Stack() {	// �Ҹ��� destructor
	Node *p = head;
	
	while (p) {
		Node *q = p;
		p = p->next;
#ifdef _DEBUG
		cout << "�޸��ּ� " << this << "�� �ִ� ���ÿ���" << q->item << "���� ���� ��� ����\n";
#endif
		delete q;
	}
}

bool Stack::isempty() const {
	return head == 0;
}

bool Stack::isfull() const {
	return false;
}

bool Stack::push(const int & item) {
	Node *p = new Node;
	p->item = item;
	p->next = head;
	head = p;
	return true;
}

bool Stack::pop(int & item) {
	if (head != 0) {
		Node *p = head;
		item = p->item;
		head = p->next;
		delete p;
		return true;
	}
	else
		return false;
}