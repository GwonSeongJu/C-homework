#include <iostream>
#include "print_word.h"


#define START_MESSAGE "\n성주의 과제 리스트 입니다."
#define LIST_MESSAGE "0. 01-1_1\n1. 01-1.2\n2. 01-1_3\n3. 01-1_4\n\n4. 01-2\n\n5. 01-3_1\n6. 01-3_\n\n7. 01-4\n"
#define SELECT_MESSAGE "확인을 원하시는 문제의 인덱스를 입력해주세요(ex. 01-1_1이면 0)\n 종료시엔 -1을 입력해주세요: "
#define ERROR_MESSAGE "맞는 형식이 존재하지않습니다."

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