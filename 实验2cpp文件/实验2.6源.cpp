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
	cout << "����������������: ";
	cin >> a >> b;
	cout << "���������������Լ��Ϊ��" << gongyue(a, b) << endl;
	int d = gongyue(a, b);
	int e = a / d;
	int f = b / d;
	int g = e * d * f;
	cout << "����������С������Ϊ��" << g << endl;
	return 0;

}