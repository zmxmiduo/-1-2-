#include<iostream>
using namespace std;
int main() {
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	cout << "a��ֵΪ��" ;
	cin >> a;
	cout << "b��ֵΪ��" ;
	cin >> b;
	cout << "c��ֵΪ��" ;
	cin >> c;
	d = a + b + c;
	cout << "�����ε��ܳ�Ϊ��" <<d<< endl;
	if (a == b || b == c || a == c) {
		cout << "������Ϊ����������";
	}
	else {
		cout << "�����β�Ϊ����������";
	}
	return 0;
}
