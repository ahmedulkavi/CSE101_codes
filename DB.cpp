#include <iostream>
#include <fstream>
using namespace std;

int noOfInput;
string FileName;

struct Record
{
	string name;
	string phoneNumber;
	int age, height;
	double weight;
};

Record *studentRecord;

Record* createRecord(void)
{
		Record *studentRecord = new Record[noOfInput+2];
		return studentRecord;
}

void deleteRecord(Record *sR)
{
	delete [] sR;
}

void readInputs(void)
{
	studentRecord = createRecord();
	cout << "Enter File Name:" << endl;
	
	cin >> FileName;
	ifstream ifile;
	ifile.open(FileName.c_str());
	if(ifile.is_open())
	{
		for (int i=0; i<noOfInput; i++)
		{
			string hudai;
			
			
			getline(ifile, studentRecord[i].name);
			getline(ifile, studentRecord[i].phoneNumber);
		
			ifile >> studentRecord[i].age >> studentRecord[i].weight >> studentRecord[i].height;
			getline(ifile, hudai);
		}
		ifile.close();
	}
	else
	{
		cout << "File not found!" << endl;
	}
}

void printRecords(void)
{
	for (int i=0; i<noOfInput; i++)
	{
		cout << studentRecord[i].name << endl
			<< studentRecord[i].phoneNumber << endl
			<< studentRecord[i].age << endl
			<< studentRecord[i].weight << endl
			<< studentRecord[i].height << endl;
	}
}
int Showrecordbyname(string a)
{
	int z;
	for(z=0;z<noOfInput;z++)
	{
		if(studentRecord[z].name==a)
		{
			cout << studentRecord[z].name << endl
			<< studentRecord[z].phoneNumber << endl 
			<< studentRecord[z].age << endl
			<< studentRecord[z].weight << endl
			<< studentRecord[z].height << endl;
			break;
		}
	}
	return z;
}
int Showrecordbynumber(string a)
{
	int z;
	for(z=0;z<noOfInput;z++)
	{
		if(studentRecord[z].phoneNumber==a)
		{
			cout << studentRecord[z].name << endl
			<< studentRecord[z].phoneNumber << endl 
			<< studentRecord[z].age << endl
			<< studentRecord[z].weight << endl
			<< studentRecord[z].height << endl;
			break;
		}
	}
	return z;
}
int Search(void)
{
	string a;
	cout << "1.Search by Name\n2.Search by Phone Number" << endl;
	int c;
	cin >> c;
	int u;
	if(c==1)
	{
		getline(cin,a);
		getline(cin,a);
		u=Showrecordbyname(a);
		
	}
	else if(c==2)
	{
		getline(cin,a);
		getline(cin,a);
		u=Showrecordbynumber(a);
		
	}
	return u;
}
void Insert (void)
{
	cout << "Input Info:" << endl;
			string hudai;
			getline(cin, hudai);
			
			getline(cin, studentRecord[noOfInput].name);
			getline(cin, studentRecord[noOfInput].phoneNumber);
		
			cin >> studentRecord[noOfInput].age >> studentRecord[noOfInput].weight >> studentRecord[noOfInput].height;
			
			ofstream ofile;
			ofile.open(FileName.c_str(),ofstream::app);
			if(ofile.is_open())
			{
				ofile << studentRecord[noOfInput].name << endl << studentRecord[noOfInput].phoneNumber << endl << studentRecord[noOfInput].age << endl << studentRecord[noOfInput].weight << endl << studentRecord[noOfInput].height << endl;
				ofile.close();
			}
			else
			{
				cout << "File Not Found!" << endl;
			}
}

void Delete (void)
{
	int p;
	
	p=Search();
	
	cout << "This Info has been deleted!" << endl;
	
	for(int i=p;i<noOfInput-1;i++)
	{
		studentRecord[i].name=studentRecord[i+1].name;
		studentRecord[i].phoneNumber=studentRecord[i+1].phoneNumber;
		studentRecord[i].age=studentRecord[i+1].age;
		studentRecord[i].weight=studentRecord[i+1].weight;
		studentRecord[i].height=studentRecord[i+1].height;	
	}
	ofstream ofile;
	ofile.open(FileName.c_str());
	if(ofile.is_open())
	{
		for (int i=0; i<noOfInput-1; i++)
		{
			ofile << studentRecord[i].name << endl
				<< studentRecord[i].phoneNumber << endl
				<< studentRecord[i].age << endl
				<< studentRecord[i].weight << endl
				<< studentRecord[i].height << endl;
		}
		ofile.close();
	}
	else
	{
		cout << "File Not Found!" << endl;
	}
}

void Update (void)
{
	int q;
	q=Search();
	cout << "Update what?\n1.Name\n2.Phone Number\n3.Age\n4.Weight\n5.Height\n6.Go To Menu" << endl;
	int w;
	cin >> w;
	while(1)
	{
		if(w==1)
		{
			getline(cin,studentRecord[q].name);		
			getline(cin,studentRecord[q].name);
		}
		else if(w==2)
		{
			getline(cin,studentRecord[q].phoneNumber);	
			getline(cin,studentRecord[q].phoneNumber);
		}
		else if(w==3) cin >> studentRecord[q].age;
		else if(w==4) cin >> studentRecord[q].weight;
		else if(w==5) cin >> studentRecord[q].height;
		else if(w==6) break;
		ofstream ofile;
		ofile.open(FileName.c_str());
		if(ofile.is_open())
		{
			for (int i=0; i<noOfInput; i++)
			{
				ofile << studentRecord[i].name << endl
					<< studentRecord[i].phoneNumber << endl
					<< studentRecord[i].age << endl
					<< studentRecord[i].weight << endl
					<< studentRecord[i].height << endl;
			}
			ofile.close();
		}
		else
		{
			cout << "File Not Found!" << endl;
		}
		cout << "Update what?\n1.Name\n2.Phone Number\n3.Age\n4.Weight\n5.Height\n6.Go To Menu" << endl;
		cin >> w;
	}
	
}

void Filter (void)
{
	cout << "1.By age\n2.By weight\n3.By height\n4.By BMI\n5.Go To Menu" << endl;
	
	int e;
	cin >> e;
	while(1)
	{
		if(e==1)
		{
			cout << "Greater than:" << endl;
			int v;
			cin >> v;
			cout << "Less than:" << endl;
			int x;
			cin >> x;
			int z;
			for(z=0;z<noOfInput;z++)
			{
				if(studentRecord[z].age>v&&studentRecord[z].age<x)
				{
					cout << studentRecord[z].name << endl
					<< studentRecord[z].phoneNumber << endl 
					<< studentRecord[z].age << endl
					<< studentRecord[z].weight << endl
					<< studentRecord[z].height << endl;
				}
			}
		}
		else if(e==2)
		{
			cout << "Greater than:" << endl;
			double v;
			cin >> v;
			cout << "Less than:" << endl;
			double x;
			cin >> x;
			int z;
			for(z=0;z<noOfInput;z++)
			{
				if(studentRecord[z].weight>v&&studentRecord[z].weight<x)
				{
					cout << studentRecord[z].name << endl
					<< studentRecord[z].phoneNumber << endl 
					<< studentRecord[z].age << endl
					<< studentRecord[z].weight << endl
					<< studentRecord[z].height << endl;
				}
			}
		}
		else if(e==3)
		{
			cout << "Greater than:" << endl;
			int v;
			cin >> v;
			cout << "Less than:" << endl;
			int x;
			cin >> x;
			int z;
			for(z=0;z<noOfInput;z++)
			{
				if(studentRecord[z].height>v&&studentRecord[z].height<x)
				{
					cout << studentRecord[z].name << endl
					<< studentRecord[z].phoneNumber << endl 
					<< studentRecord[z].age << endl
					<< studentRecord[z].weight << endl
					<< studentRecord[z].height << endl;
				}
			}
		}
		else if(e==4)
		{
			double *BMI;
			BMI = new double [noOfInput];
			for(int i=0;i<noOfInput;i++)
			{
				BMI[i]=studentRecord[i].weight/((((double)studentRecord[i].height*2.54)/100)*(((double)studentRecord[i].height*2.54)/100));
			}
			cout << "Greater than:" << endl;
			double v;
			cin >> v;
			cout << "Less than:" << endl;
			double x;
			cin >> x;
			int z;
			for(z=0;z<noOfInput;z++)
			{
				if(BMI[z]>v&&BMI[z]<x)
				{
					cout << studentRecord[z].name << endl
					<< studentRecord[z].phoneNumber << endl 
					<< studentRecord[z].age << endl
					<< studentRecord[z].weight << endl
					<< studentRecord[z].height << endl << "BMI: " << BMI[z] << endl;
				}
			}
			delete [] BMI;
		}
		else if(e==5) break;
		cout << "1.By age\n2.By weight\n3.By height\n4.By BMI\n5.Go To Menu" << endl;
		cin >> e;
	}
} 

void Menu(void)
{
	
	int a;
	
	cout << "1.Search\n2.Filter\n3.Insert\n4.Delete\n5.Update\n6.Print\n7.Exit" << endl;
	cin >> a;
	while(1)
	{
		if(a==1) Search();
		else if(a==2) Filter();
		else if(a==3) Insert();
		else if(a==4) Delete();
		else if(a==5) Update();
		else if(a==6) printRecords();
		else if(a==7) break;
		cout << "1.Search\n2.Filter\n3.Insert\n4.Delete\n5.Update\n6.Print\n7.Exit" << endl;
		cin >> a;
	}	
}

int main(void)
{
	cout << "Input number of current number of users:" << endl;
	cin >> noOfInput;

	readInputs();
	
	Menu();
	
	deleteRecord(studentRecord);
	
	return 0;
}
