#include <iostream>
#include <cctype>
using namespace std;
#include "Stack.h"

int main() {

	// ���� ����Ʈ�� ������ ���� ����
	Stack original;

	// 1~12 ������ ���ʴ�� ���ÿ� push
	for (int i = 1; i <= 12; i++)
		original.push(i);

	// copy constructor�� �̿��Ͽ� ������ ����, copy�� original�� ������ �����͸� ������ ��
	Stack copy(original);

	// ���� ���ÿ��� 12�� pop ���� (12~1 ������ ���ʴ�� pop��)
	cout << "���� ���� : ";
	for (int i = 1; i <= 12; i++) {
		int item;
		if (original.pop(item))
			cout << item << ' ';
		else
			cout << "\nStack empty\n";
	}
	cout << endl;

	// ������ ���ÿ��� 12�� pop ���� (12~1 ������ ���ʴ�� pop��)
	cout << "���� ���� : ";
	for (int i = 1; i <= 12; i++) {
		int item;
		if (copy.pop(item))
			cout << item << ' ';
		else
			cout << "\nStack empty\n";
	}
	cout << endl;

	return 0;
	// copy�� orignal ������ destructor�� ȣ���
}