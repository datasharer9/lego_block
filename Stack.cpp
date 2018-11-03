#ifdef _DEBUG
#include <iostream>
using namespace std;
#endif

#include "Stack.h"

Stack::Stack() {	// 기본생성자 default constructor

	head = 0;
}

Stack::Stack(Stack &stack) {	// 복사생성자 copy constructor
	Stack *q = new Stack;// 클래스 타입으로 동적할당. 역순으로 되어 있으니까 스택을 1개 더 만든다.
	Node *p = stack.head; // 구조체 타입으로 선언
	while (p != nullptr)
	{
		q->push(p->item); // push를 실행한다. // q로 옮겨준다.
		p = p->next; // p 포인터의 위치를 바꿔준다.
	}

	while (!q->isempty()) // 생성자 안에서 다른 함수를 가져다 쓸 수 있다. 
	{
		int item; 
		q->pop(item); // pop된 값이 item으로 대입된다. // 특이한 표현방식이다.
		push(item);// 원래의 스택에 넣어준다. // 그럼 정렬 된다.
	}
}
								// 과제 : 복사생성자 구현
Stack::~Stack() {	// 소멸자 destructor
	Node *p = head;
	
	while (p) {
		Node *q = p;
		p = p->next;
#ifdef _DEBUG
		cout << "메모리주소 " << this << "에 있는 스택에서" << q->item << "값을 가진 노드 삭제\n";
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