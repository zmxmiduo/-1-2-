#include<iostream>
using namespace std;
int main() {
	char a;
	double num1, num2;
	cout << "�������������=��-��*��/,% : ";
	cin >> a;
	cout << "������������";
	cin >> num1 >> num2;
	switch (a) {
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
	case '/':
	{
		if (num2 == 0) {
			cout << "��������Ϊ��";
			break;
		}
		else {
			cout << num1 / num2;
		}
	}
	case '%':
		cout << (int)num1 % (int)num2;
		break;
	default:
		cout << "������������ȷ���֡�";
		break;
	}
	return 0;
	
}