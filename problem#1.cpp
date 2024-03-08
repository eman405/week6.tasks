/* Homework 1: Length of 3n+1 
● Implement 3n+1 function to compute the length of the sequence
● int length_3n_plus_1(int n)
● E.g. length_3n_plus_1(6) ⇒ 9
*/
#include <iostream>
using namespace std;
int length_3n_plus_1(int n) {
	int length = 1;
	if (n == 1) {
		return 1;
	}
	if (n % 2 == 0) {
		n =n/2;
	}
	else {
		n = 3 * n + 1;
	}
	return length + length_3n_plus_1(n);
}
int main()
{
	int n;
	cin >> n;
	int a = length_3n_plus_1(n);
	cout << a;
}
