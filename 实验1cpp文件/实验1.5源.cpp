#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double a = 0;
	double b = 0;
	cout << "华氏温度为：" ;
	cin >> a;
	double c = a - 32;
	double d = c / 1.8;
	cout << "摄氏温度为：" <<fixed<<setprecision(2)<< d<<endl;
	return 0;


}