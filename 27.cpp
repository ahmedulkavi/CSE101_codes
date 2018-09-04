#include <iostream>

using namespace std;

int noOfInput;

struct Record
{
	string name;
	string phoneNumber;
	int age, height;
	float weight;
};

Record *studentRecord;

Record* createRecord(void)
{
		Record *studentRecord = new Record[noOfInput];
		return studentRecord;
}

void deleteRecord(Record *sR)
{
	delete [] sR;
}

void readInputs(void)
{
	cin >> noOfInput;
	
	studentRecord = createRecord();
	
	for (int i=0; i<noOfInput; i++)
	{
		string hudai;
		getline(cin, hudai);
		
		getline(cin, studentRecord[i].name);
		getline(cin, studentRecord[i].phoneNumber);
		
		cin >> studentRecord[i].age >> studentRecord[i].weight >> studentRecord[i].height;
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

int main(void)
{
	readInputs();
	
	printRecords();
	
	deleteRecord(studentRecord);
	
	return 0;
}

/*
int* makeIntArray()
{
	int *arr = new int[noOfInput];
	return arr;
}

void deleteIntArray(int *arr)
{
	delete [] arr;
}

string* makeStringArray()
{
	string *arr = new string[noOfInput];
	return arr;
}

void deleteStringArray(string *arr)
{
	delete [] arr;
}

float* makeFloatArray()
{
	float *arr = new float[noOfInput];
	return arr;
}

void deleteFloatArray(float *arr)
{
	delete [] arr;
}
		
void readInputs(void)
{
	cin >> noOfInput;
	
	name = makeStringArray();
	phoneNumber = makeStringArray();
	age = makeIntArray();
	weight = makeFloatArray();
	height = makeIntArray();
	
	
	for (int i=0; i<noOfInput; i++)
	{
		string hudai;
		getline(cin, hudai);
		
		getline(cin, name[i]);
		getline(cin, phoneNumber[i]);
		
		cin >> age[i] >> weight[i] >> height[i];
	}

	for (int i=0; i<noOfInput; i++)
	{
			cout << name[i] << endl
			<< phoneNumber[i] << endl
			<< age[i] << endl
			<< weight[i] << endl
			<< height[i] << endl;
	}
}

void printInputs(void)
{
	for (int i=0; i<noOfInput; i++)
	{
			cout << name[i] << endl
			<< phoneNumber[i] << endl
			<< age[i] << endl
			<< weight[i] << endl
			<< height[i] << endl;
	}
}

int main (void)
{
	readInputs();
	printInputs();
	
	deleteIntArray(age);
	deleteIntArray(height);
	deleteStringArray(name);
	deleteFloatArray(weight);
	deleteStringArray(phoneNumber);
	
	return 0;
}
*/
