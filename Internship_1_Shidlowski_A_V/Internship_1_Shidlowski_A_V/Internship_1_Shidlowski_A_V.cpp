// Internship_1_Shidlowski_A_V.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

//структура тест
struct Test{
	int number;
	string line;
}; 

//функция записи в структуру
void DataWrite(Test *t){
	cout<<"Please enter a number: ";
	cin>>t->number;
	cout<<"Please enter a string: ";
	cin>>t->line;
}


int _tmain(int argc, _TCHAR* argv[])
{
	Test *t;
	t=new Test[1];
	
	char inputYN; 
	int size=1;

	while(true){
		if(size==1){
			DataWrite(t);
		}
		else 
			{
				int oldSize=size-1;
				Test * tempT=new Test[oldSize];
				//копируем что уже написюкали
				for(int i=0;i<oldSize;i++){
					(tempT+i)->number=(t+i)->number;
					(tempT+i)->line=(t+i)->line;
				}
				delete [] t;

				t=new Test[size];
				//копируем уже в новый массив на 1 больше
				for(int i=0;i<oldSize;i++){
					(t+i)->number=(tempT+i)->number;
					(t+i)->line=(tempT+i)->line;
				}
				delete [] tempT;

				DataWrite(t+oldSize);
			}

		cout<<"Enter more data? Y/N"<<endl;
		cin>>inputYN;
		if(inputYN=='N')
		{
			break;
		} 
		else if(inputYN=='Y')
		{
			size++;
		}
		else
		{
			cout<<"Error input!!"<<endl;
			break;
		}
	}

	cout<<"Check structs"<<endl;

	for(int i=0;i<size;i++){
		cout<<"Data struct "<<i<<" :";
		cout<<" NUMBER: "<<(t+i)->number;
		cout<<" LINE: "<<(t+i)->line<<endl<<endl;
	}

	delete [] t;
	getch();
	return 0;
}

