#include<iostream>
using namespace std;
int main() {

	char c;
	int letters = 0, space = 0, digit = 0, other = 0;
	cout << "ÊäÈëÒ»ÐÐ×Ö·û£º" << endl;
	while ((c = getchar()) != '\n') {
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			letters++;
		else if (c == 32)
			space++;
		else if (c >= '0' && c <= '9')
			digit++;
		else
			other++;
	}
	cout << "letter:" << letters << ",space:" << space << ",digit:" << digit << ",other:" << other << endl;
	return 0;
}