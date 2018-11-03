#include <iostream>
#include <cctype>
using namespace std;
#include "Stack.h"

int main() {

	// 연결 리스트로 구현된 스택 생성
	Stack original;

	// 1~12 정수를 차례대로 스택에 push
	for (int i = 1; i <= 12; i++)
		original.push(i);

	// copy constructor를 이용하여 스택을 복사, copy와 original은 동일한 데이터를 가지게 됨
	Stack copy(original);

	// 원본 스택에서 12번 pop 수행 (12~1 정수가 차례대로 pop됨)
	cout << "원본 스택 : ";
	for (int i = 1; i <= 12; i++) {
		int item;
		if (original.pop(item))
			cout << item << ' ';
		else
			cout << "\nStack empty\n";
	}
	cout << endl;

	// 복사한 스택에서 12번 pop 수행 (12~1 정수가 차례대로 pop됨)
	cout << "복사 스택 : ";
	for (int i = 1; i <= 12; i++) {
		int item;
		if (copy.pop(item))
			cout << item << ' ';
		else
			cout << "\nStack empty\n";
	}
	cout << endl;

	return 0;
	// copy와 orignal 스택의 destructor가 호출됨
}