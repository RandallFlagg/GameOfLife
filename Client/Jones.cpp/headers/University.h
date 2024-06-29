#ifndef __UNIVERSITY_H
#define __UNIVERSITY_H

//#include<iostream>
//#include <time.h>
#include<WinDef.h> //WORD

#include "CBuilding.h"
#include "CCourse.h"

//using namespace std;

//Start editing from here



class CUniversity : CBuilding
{
	private:
		CCourse *p_courses; //List of courses available in the university
		char enrollTime[9]; //Untill when you can enroll to studies in the university
		WORD MaxStudents; //Max number of students that can enroll //Should it be changed to unsinged short?
		string name; //The name of the university
		short rank; //How good is this university
	protected:
	
	public:

		/*void func()
		{
			  //_strdate_s(enrollTime);
		}*/
};

#endif