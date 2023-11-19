#include<iostream>
using namespace std;
int main() {
	const float a = 3.14f;
	int b = 0;
	int c = 0;
	double d = 0;
	cout << "圆锥底的半径为：";
	cin >> b;
	cout << "圆锥的高为：";
	cin >> c;
	float e = 0.33f;
	cout << "圆锥的体积为：" << (d = e*a*b*b*c)  << endl;
	return 0;


}