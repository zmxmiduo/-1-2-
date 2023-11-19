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
	cout << "共买苹果" << i << "天" << endl;
	cout << "共买 " << sum << "个苹果" << endl;
	cout << "平均每天花费：" << sum*0.8/i << "元" << endl;
	return 0;
}