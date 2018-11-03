#pragma once

struct Node {
	int item;	// ���ÿ� �� ������
	Node *next;	// ���Ḯ��Ʈ�� ���� ��带 ����Ű�� ������
};

class Stack {
private:
	Node *head;	// �����͸� Node���� ���� ����Ʈ�� ����, head�� 0�̸� empty
	// �̸��� head�ΰ��� ������ head�� �ƴϴ�.
	int item;

public:
	Stack();	// ����ִ� ������ ����� �⺻������
	Stack(Stack &stack);	// ���������, ������ ���Ḯ��Ʈ�� �����Ͽ��� ��
	~Stack();	// ����Ʈ�� �����ִ� node���� ����

	bool isempty() const;
	bool isfull() const;
	bool push(const int & item);
	bool pop(int & item);
};