/* Syed Ahmedul Kavi
   17/4/18
   This program reads radius, fraction of sector cut out and outputs volume in cup
*/

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(void)
{
	int R; // R is radius of the disc
	double m,A; // m is fraction of the sector cut out, A is volume
	
	const double pi = 3.14 ;
	
	cout << "Please enter the radius of disc in cm:" << endl;
	
	cin >> R;
	
	cout << "Please enter the fraction m of the sector cut out:" << endl;
	
	cin >> m;
	
	A = (1/3.0)*pi*R*R*R*m*m*sqrt(1-m*m);
	
	cout << "The volume of the cone is " << setprecision(1) << fixed << A/250 << " cups" << endl;
			
	return 0;
}
