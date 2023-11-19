#include<iostream>
using namespace std;
int main() {
	double x = 0;
	double a = 0;
	cout << "输入x的值为：";
	cin >> x;
	if (0 < x &&x< 1) {
		a = 3 - 2 * x;
	}
	else if (1 <= x&&x < 5) {
		a = 0.5 / x + 1;
	}
	else if (5 <= x&&x < 10) {
		a = x * x;
		
	}
	cout << a;
}