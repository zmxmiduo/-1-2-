#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double a = 0;
	double b = 0;
	cout << "�����¶�Ϊ��" ;
	cin >> a;
	double c = a - 32;
	double d = c / 1.8;
	cout << "�����¶�Ϊ��" <<fixed<<setprecision(2)<< d<<endl;
	return 0;


}