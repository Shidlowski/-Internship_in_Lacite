// Internship_2_Shidlowski_A_V.cpp:
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <conio.h>
#include <fstream>


using namespace std;

class Teacher{

private:
	string surname;
	int experience; // years
	float salary;
	int academicHours;

public:
	void setTeacher(){
		cout<<"Enter surname: ";
		cin>>surname;
		
		cout<<"\nEnter experience: ";
		cin>>experience;
		
		cout<<"\nEnter salary: ";
		cin>>salary;

		cout<<"\nEnter academicHours: ";
		cin>>academicHours;
	} 


	float ZP(){
		return salary*academicHours;
	}

	float Premium(){
		if(experience>1 && experience<=3)
		{
			return ZP()*0.05;
		}
		else if(experience>3 && experience<=5)
		{
			return ZP()*0.08;
		}
		else if(experience>5)
		{
			return ZP()*0.15;
		}
	}

	void Print(){
		cout<<"\nSurname: "<<surname<<endl;
		cout<<"Experience: "<<experience<<endl;
		cout<<"Salary: "<<salary<<endl;
		cout<<"AcademicHours: "<<academicHours<<endl;
		cout<<"ZP: "<<ZP()<<endl;
		cout<<"Premium: "<<Premium()<<endl;
	}

	void RecordFile(){
		ofstream record("BD.txt",ios::app);
		record<<"\nSurname: "<<surname<<endl;
		record<<"Experience: "<<experience<<endl;
		record<<"Salary: "<<salary<<endl;
		record<<"AcademicHours: "<<academicHours<<endl;
		record<<"ZP: "<<ZP()<<endl;
		record<<"Premium: "<<Premium();
		record.close();
	}


};


int _tmain(int argc, _TCHAR* argv[])
{

	Teacher t;
	t.setTeacher();
	t.Print();
	t.RecordFile();

	getch();
	return 0;
}

