#include <iostream>
#include "print_word.h"


#define START_MESSAGE "\n������ ���� ����Ʈ �Դϴ�."
#define LIST_MESSAGE "0. 01-1_1\n1. 01-1.2\n2. 01-1_3\n3. 01-1_4\n\n4. 01-2\n\n5. 01-3_1\n6. 01-3_\n\n7. 01-4\n"
#define SELECT_MESSAGE "Ȯ���� ���Ͻô� ������ �ε����� �Է����ּ���(ex. 01-1_1�̸� 0)\n ����ÿ� -1�� �Է����ּ���: "
#define ERROR_MESSAGE "�´� ������ ���������ʽ��ϴ�."

using namespace std;

void print_word(message mes) {
	switch (mes)
	{
	case start_word:
		cout << START_MESSAGE << endl;
		break;
	case homework_list:
		cout << LIST_MESSAGE << endl;
		break;
	case select:
		cout << SELECT_MESSAGE << endl;
		break;
	default:
		cout << ERROR_MESSAGE << endl;
		break;
	}
}