#include<iostream>
using namespace std;

int main(void)
{
   int t;
   long long int a,b;
   cin >> t;
   for(int i=0;i<t;i++)
   {
      cin >> a >> b;
      if(a>b) cout << ">" << endl;
      else if (a<b) cout << "<" << endl;
      else cout << "=" << endl;  
   } 
 return 0;
}
