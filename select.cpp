#include <iostream>

#include "print_word.h"
#include "answers.h"

using namespace std;

void selection() {
	int select_n;
	while (true) {
		print_word(start_word);
		print_word(homework_list);
		print_word(select);

		cin >> select_n;
		if (select_n == -1)break;
		switch (select_n)
		{
		case 0:
			Q01_1_1();
			break;
		case 1:
			Q01_1_2();
			break;
		case 2:
			Q01_1_3();
			break;
		case 3:
			Q01_1_4();
			break;
		case 4:
			Q01_2();
			break;
		case 5:
			Q01_3_1();
			break;
		case 6:
			Q01_3_2();
			break;
		case 7:
			Q01_4();
			break;
		default:
			cout << "그런문제는 없습니다." << endl;
			break;
		}
	}
}