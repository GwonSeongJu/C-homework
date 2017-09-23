#include <iostream>

#include "Q4.h"

using namespace std;

void Q01_1_1() {
	int number, sum = 0;
	for (int i = 0; i < 5; i++) {
		cout << i+1<<"번째 정수 입력: ";
		cin >> number;
		sum += number;
	}
	cout << "합계: " << sum << endl;
}

void Q01_1_2() {
	char name[10];
	int phone_number;
	cout << "이름을 입력해주세요: ";
	cin >> name;
	cout << "폰번호를 - 기호 없이 입력해주세요: ";
	cin >> phone_number;

	cout << "이름: " << name << " 폰번호: " << phone_number << endl;
}

void Q01_1_3() {
	int number;
	cout << "구구단을 할 숫자를 입력해주세요: ";
	cin >> number;

	for (int i = 2; i <= 9; i++) {
		cout << number << "X" << i << "=" << number*i << endl;
	}
}

void Q01_1_4() {
	int number;
	int default_number = 50;

	while(true) {
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> number;
		if (number == -1) break;
		cout << "이번달 급여: " << default_number + (float)number*0.12 << endl;
	}
	cout << "프로그램을 종료합니다." << endl;
}

void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap(char *a, char *b) {
	char tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap(double *a, double *b) {
	double tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void Q01_2() {
	int in_num;

	cout << "0. 작동되는지 확인하기\n 1. 오버로딩된 부분 소스 확인하기\n\n 원하시는 작업의 인덱스번호를 입력해주세요: ";
	cin >> in_num;
	if(in_num){
		cout << "void swap(int *a, int *b) {\nint tmp;\ntmp = *a;\n*a = *b;\n*b = tmp;\n}\n\nvoid swap(char *a, char *b) {\nchar tmp;\ntmp = *a;\n*a = *b;\n*b = tmp;\n}\n\nvoid swap(double *a, double *b) {\ndouble tmp;\ntmp = *a;\n*a = *b;\n*b = tmp;\n}\n";
	}
	else {
		int num1 = 20, num2 = 30;
		swap(&num1, &num2);
		cout << num1 << ' ' << num2 << endl;

		char ch1 = 'A', ch2 = 'Z';
		swap(&ch1, &ch2);
		cout << ch1 << ' ' << ch2 << endl;

		double dbl1 = 1.111, dbl2 = 5.555;
		swap(&dbl1, &dbl2);
		cout <<dbl1 << ' ' << dbl2 << endl;
	}
}

int BoxVolume(int a, int b, int c) {
	return a*b*c;
}

int BoxVolume(int a, int b) {
	return a*b;
}

int BoxVolume(int a) {
	return a;
}

int BoxVolume() {
	return 1;
}

void Q01_3_1() {
	int in_num;

	cout << "0. 작동되는지 확인하기\n 1. 오버로딩된 부분 소스 확인하기\n\n 원하시는 작업의 인덱스번호를 입력해주세요: ";
	cin >> in_num;
	if (in_num){
		cout << "int BoxVolume(int a, int b, int c) {\nreturn a*b*c;\n}\n\nint BoxVolume(int a, int b) {\nreturn a*b;\n}\n\nint BoxVolume(int a) {\nreturn a;\n}\n\nint BoxVolume() {\nreturn 1;\n}\n";
	}
	else {
		cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << endl;
		cout << "[5,5,D] : " << BoxVolume(5,5) << endl;
		cout << "[7,D,D] : " << BoxVolume(7) << endl;
		cout << "[D,D,D] : " << BoxVolume() << endl;
	}
}

void Q01_3_2() {
	cout << "문제와 같이 하나는 인수가 없고 \n하나는 인자가하나있지만 디폴트형으로 지정되있을경우\nSimpleFuncs를 호출했을떄 인자가없는것을 호출했는지\n디폴트인자를 가진것을 호출했는지 알수없기떄문에";
}

void Q01_4() {
	int in_num;

	cout << "0. 작동되는지 확인하기\n 1. 소스 확인하기\n\n 원하시는 작업의 인덱스번호를 입력해주세요: ";
	cin >> in_num;
	if (in_num) {
		cout << "소스파일중 source_file1.cpp, source_file2.cpp, header_file.h 을 확인해주세요." << endl; 
	}

	else {
		Q4_main();
	}

}

