﻿/* Homework 2: Power function
● int my_pow(int value, int p = 2)
● Return value * value ….. * value p times
● E.g. my_pow(7, 3) = 7 * 7 * 7 = 343
● Note: if p = 0, answer is 1
*/
#include <iostream>
using namespace std;
int my_pow(int value, int p = 2) {
	if (p == 0) {
		return 1;
	}
	return value * my_pow(value, p - 1);
	
}
int main()
{
	int value, p;
	cin >> value >> p;
	int res = my_pow(value, p);
	cout << res;
}
