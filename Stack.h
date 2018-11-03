#pragma once

struct Node {
	int item;	// 스택에 들어갈 데이터
	Node *next;	// 연결리스트의 다음 노드를 가리키는 포인터
};

class Stack {
private:
	Node *head;	// 데이터를 Node들의 연결 리스트로 관리, head가 0이면 empty
	// 이름이 head인거지 실제로 head가 아니다.
	int item;

public:
	Stack();	// 비어있는 스택을 만드는 기본생성자
	Stack(Stack &stack);	// 복사생성자, 원본의 연결리스트를 복제하여야 함
	~Stack();	// 리스트에 남아있는 node들을 삭제

	bool isempty() const;
	bool isfull() const;
	bool push(const int & item);
	bool pop(int & item);
};