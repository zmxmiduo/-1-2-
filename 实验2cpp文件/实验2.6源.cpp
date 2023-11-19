#include<iostream>
using namespace std;
int gongyue(int a, int b){
	int i = min(a, b);
		for (i; a % i != 0 || b % i != 0; i--) {

		}
		return i;
}
int main() {
	int a, b;
	cout << "请输入两个正整数: ";
	cin >> a >> b;
	cout << "两个正整数的最大公约数为：" << gongyue(a, b) << endl;
	int d = gongyue(a, b);
	int e = a / d;
	int f = b / d;
	int g = e * d * f;
	cout << "两个数的最小公倍数为：" << g << endl;
	return 0;

}