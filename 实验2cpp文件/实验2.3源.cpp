#include<iostream>
using namespace std;
int main() {
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	cout << "a的值为：" ;
	cin >> a;
	cout << "b的值为：" ;
	cin >> b;
	cout << "c的值为：" ;
	cin >> c;
	d = a + b + c;
	cout << "三角形的周长为：" <<d<< endl;
	if (a == b || b == c || a == c) {
		cout << "三角形为等腰三角形";
	}
	else {
		cout << "三角形不为等腰三角形";
	}
	return 0;
}
