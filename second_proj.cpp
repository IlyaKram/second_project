//============================================================================
// Name        : second_proj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>


class Employee
{
public:
	virtual int Work(){ return 0;};
	int Delete(){ return 1; };
	int New(){ return 1; };
	void Pay(){};
protected:
	std::string m_sFirstName;
	std::string m_sLastName;
private:
	int m_nAge;
};

class Programmer: public Employee
{
public:
	virtual int Work(){ return 1;};
};

class Manager: public Employee
{
public:
	virtual int Work(){ return 2;};
};

class Worker: public Employee
{
public:
	virtual int Work(){ return 3;};
};

#include <vector>

int main() {

	Employee empl1;
 	printf( "\n %d \n" , empl1.Work() );

 	Programmer empl2;
 	printf( "\n %d \n" , empl2.Work() );

 	Manager empl3;
 	printf( "\n %d \n" , empl3.Work() );

 	Worker empl4;
 	printf( "\n %d \n" , empl4.Work() );


 	std::vector<Employee *> EmplVec;
 	EmplVec.push_back(new Programmer());
 	EmplVec.push_back(new Manager());
 	EmplVec.push_back(new Worker());
 	EmplVec.push_back(new Programmer());
 	EmplVec.push_back(new Worker());

 	std::vector<Employee *>::iterator iter = EmplVec.begin();
 	Employee *pImpl = *iter;
 	printf( "\n %d \n" , pImpl->Work() );
 	printf( "\n %d \n" , (*++EmplVec.begin())->Work() );




















 	Employee *newEmpl = new Manager();
// 	Manager* Manager(new Manager());
 //	Employee *newEmpl = Manager;

 	//if (newEmpl->WhoIAm == 2) {
 	//	printf( "\n %d \n" , ((Manager*)newEmpl)->Work() );
 //	}
 	//if (newEmpl->WhoIAm == 1) {
 	//	printf( "\n %d \n" , ((Worker*)newEmpl)->Work() );
 //	}
 	printf( "\n %d \n" , newEmpl->Work() );

 	Programmer pr;
 	printf( "\n %d \n" , sizeof(pr));

	return 0;
}
