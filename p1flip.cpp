/* Syed Ahmedul Kavi
   17/4/18
   This program reads a two digit integer and displays it with the two digits reversed
*/

#include<iostream>
using namespace std;

int main(void)
{
	int n,a,b; // n is the input number, a is the digit is 10's place , b is the digit in 1's place
	
	cout << "Please enter a two digit positive integer:" << endl;
	
	cin >> n;
	
	a = n/10;
	b = n%10;
	
	cout << 10*b+a << endl;
	
	return 0;
}
