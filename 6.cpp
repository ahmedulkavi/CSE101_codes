#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
	
	ofstream oFile;
	oFile.open("text6.txt");
	
	if(oFile.is_open())
	{
		oFile << "testing" << endl;
		oFile.close();
	}
    else
    {
    	cout << "File didn't open." << endl;
    }

return 0;

}
