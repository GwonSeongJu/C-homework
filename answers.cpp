#include <iostream>

#include "Q4.h"

using namespace std;

void Q01_1_1() {
	int number, sum = 0;
	for (int i = 0; i < 5; i++) {
		cout << i+1<<"��° ���� �Է�: ";
		cin >> number;
		sum += number;
	}
	cout << "�հ�: " << sum << endl;
}

void Q01_1_2() {
	char name[10];
	int phone_number;
	cout << "�̸��� �Է����ּ���: ";
	cin >> name;
	cout << "����ȣ�� - ��ȣ ���� �Է����ּ���: ";
	cin >> phone_number;

	cout << "�̸�: " << name << " ����ȣ: " << phone_number << endl;
}

void Q01_1_3() {
	int number;
	cout << "�������� �� ���ڸ� �Է����ּ���: ";
	cin >> number;

	for (int i = 2; i <= 9; i++) {
		cout << number << "X" << i << "=" << number*i << endl;
	}
}

void Q01_1_4() {
	int number;
	int default_number = 50;

	while(true) {
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> number;
		if (number == -1) break;
		cout << "�̹��� �޿�: " << default_number + (float)number*0.12 << endl;
	}
	cout << "���α׷��� �����մϴ�." << endl;
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

	cout << "0. �۵��Ǵ��� Ȯ���ϱ�\n 1. �����ε��� �κ� �ҽ� Ȯ���ϱ�\n\n ���Ͻô� �۾��� �ε�����ȣ�� �Է����ּ���: ";
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

	cout << "0. �۵��Ǵ��� Ȯ���ϱ�\n 1. �����ε��� �κ� �ҽ� Ȯ���ϱ�\n\n ���Ͻô� �۾��� �ε�����ȣ�� �Է����ּ���: ";
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
	cout << "������ ���� �ϳ��� �μ��� ���� \n�ϳ��� ���ڰ��ϳ������� ����Ʈ������ �������������\nSimpleFuncs�� ȣ�������� ���ڰ����°��� ȣ���ߴ���\n����Ʈ���ڸ� �������� ȣ���ߴ��� �˼����⋚����";
}

void Q01_4() {
	int in_num;

	cout << "0. �۵��Ǵ��� Ȯ���ϱ�\n 1. �ҽ� Ȯ���ϱ�\n\n ���Ͻô� �۾��� �ε�����ȣ�� �Է����ּ���: ";
	cin >> in_num;
	if (in_num) {
		cout << "�ҽ������� source_file1.cpp, source_file2.cpp, header_file.h �� Ȯ�����ּ���." << endl; 
	}

	else {
		Q4_main();
	}

}

