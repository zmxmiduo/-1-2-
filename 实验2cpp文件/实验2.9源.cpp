#include<iostream>
using namespace std;
int main() {
	int a = 2;
	int sum = a;
	int i = 1;
	while(sum < 100) {
		a = 2 * a;
		sum += a;
		i++;
	}
	cout << "����ƻ��" << i << "��" << endl;
	cout << "���� " << sum << "��ƻ��" << endl;
	cout << "ƽ��ÿ�컨�ѣ�" << sum*0.8/i << "Ԫ" << endl;
	return 0;
}