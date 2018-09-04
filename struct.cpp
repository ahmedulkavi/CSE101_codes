#include <iostream>
#include<fstream>

using namespace std;

int noOfInput;

ifstream iFile;
ofstream oFile;

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
		Record *studentRecord = new Record[noOfInput+2];
		return studentRecord;
}

void deleteRecord(Record *sR)
{
	delete [] sR;
}

void readInputs(void)
{
    iFile.open("struct.txt");
    if(iFile.is_open())
    {
	
		cout << "Enter the number of current users:" << endl;
        cin >> noOfInput;

        studentRecord = createRecord();


        for (int i=0; i<noOfInput; i++)
        {
            string hudai;

            getline(iFile, studentRecord[i].name);
            getline(iFile, studentRecord[i].phoneNumber);

            iFile >> studentRecord[i].age >> studentRecord[i].weight >> studentRecord[i].height;
            getline(iFile, hudai);
        }

    }

    else cout << "File didn't open." << endl;
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

void printRecords1(int i)
{
		cout << studentRecord[i].name << endl
			<< studentRecord[i].phoneNumber << endl
			<< studentRecord[i].age << endl
			<< studentRecord[i].weight << endl
			<< studentRecord[i].height << endl;
}

int search(void)
{
    int n,i;
	string f,s;

	cout << "Choose:" << endl << "1.Enter name" << endl << "2.Enter phone number" << endl;

	cin >> n;

	getline(cin,f);

	if(n==1)
    {
        getline(cin,s);
        for(i=0;i<noOfInput;i++)
        {
            if(studentRecord[i].name.find(s)!=string::npos)
            {
                printRecords1(i);
                break;
            }
        }

    }

	else if(n==2)
    {
         getline(cin,s);
         for(i=0;i<noOfInput;i++)
            {
                if(studentRecord[i].phoneNumber.find(s)!=string::npos)
                {
                    printRecords1(i);
                    break;
                }
            }
    }

    return i;
}

void filter(void)
{
	double bmi,c;

	cin >> bmi;

	for(int i=0;i<noOfInput;i++)
	{
		c=studentRecord[i].weight/(studentRecord[i].height*studentRecord[i].height*0.0254*0.0254);

		//cout << c << endl;

		if(c>bmi) printRecords1(i);
	}
}

void insert(void)
{
	getline(cin, studentRecord[noOfInput].name);
	getline(cin, studentRecord[noOfInput].phoneNumber);

	cin >> studentRecord[noOfInput].age >> studentRecord[noOfInput].weight >> studentRecord[noOfInput].height;

	 oFile.open("struct.txt",ofstream::app);

   if(oFile.is_open())
   {
       oFile << studentRecord[noOfInput].name << endl
        << studentRecord[noOfInput].phoneNumber << endl
        << studentRecord[noOfInput].age << endl
        << studentRecord[noOfInput].weight << endl
        << studentRecord[noOfInput].height << endl;

       oFile.close();
   }
}

void deleteData(void)
{
   int a=noOfInput+5;
   a = search();

    for(int i=a;i<noOfInput-1;i++)
       {
           studentRecord[i].name = studentRecord[i+1].name;
           studentRecord[i].phoneNumber = studentRecord[i+1].phoneNumber;
           studentRecord[i].age = studentRecord[i+1].age;
           studentRecord[i].weight = studentRecord[i+1].weight;
           studentRecord[i].height = studentRecord[i+1].height;
       }

   oFile.open("struct.txt");

   if(oFile.is_open())
   {
       for(int i=0;i<noOfInput-1;i++)
       {
           oFile << studentRecord[i].name << endl
                << studentRecord[i].phoneNumber << endl
                << studentRecord[i].age << endl
                << studentRecord[i].weight << endl
                << studentRecord[i].height << endl;

       }

       oFile.close();
   }


}

int main(void)
{
    int choice;

    readInputs();

    while(true)
    {
        cout << "What do you want to do?" << endl;
        cout << "1.search\n2.filter\n3.insert\n4.delete\n5.print\n6.quit" << endl;

        cin >> choice;

        if(choice==1) search();
        else if(choice==2) filter();
        else if(choice==3) insert();
        else if(choice==4) deleteData();
        else if(choice==5) printRecords();
        else if(choice==6)
        {
            deleteRecord(studentRecord);
            return 0;
        }
        else
        {
            cout << "Wrong choice.Try again." << endl;
            continue;
        }
    }

	return 0;
}
