#include<iostream>
#include"cmath"
using namespace std;
int main() {
	double a;
	double x1, x2;
	cout << "������һ������";
	cin >> a;
	if (a > 0) {
		x1 = a;
		x2 = (x1 + a / x1) / 2;
		while (fabs(x1 - x2) >= 0.00001) {
			x1 = x2;
			x2 = (x1 + a / x1) / 2;
		}
		printf("������ƽ����Ϊ��%.5f", x2);
	}
	

	else if (a < 0) {
		double b = -a;
		x1 = b;
		x2 = (x1 + b / x1) / 2;
		while (fabs(x1 - x2)>= 0.00001) {
			x1 = x2;
			x2 = (x1 + b / x1) / 2;
		}
		printf("������ƽ����Ϊ��%.5f", -x2);
	}
	else {
		cout << "������ƽ����Ϊ��" << 0 << endl;
	}
	return 0;
}