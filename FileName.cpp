#include<iostream>
using namespace std;
int reverse(int num) {
	int reversenum = 0;
	while (num != 0) {
		
		int digit = num % 10;
		reversenum = reversenum * 10 + digit;
		num /=  10;}
	return reversenum;
	}
int main() {
	int re;
	cout << "Enter the digit" << endl;
	cin >> re;
	cout << "reversed digit is " << endl;
	cout<< reverse(re);

	return 0;
}