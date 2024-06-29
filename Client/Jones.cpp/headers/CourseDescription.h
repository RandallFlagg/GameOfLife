#ifndef __COURSEDESCRIPTION_H
#define __COURSEDESCRIPTION_H

#include <allincludes.h> //string
#include <BuildingConstants.h> //for enums
#include <CourseDescription.h>


class CCourseDescription
	{
		string courseName;// name of the course (eg. "Science in the middle east")
		int courseID; // ID of the course (eg. 3567);
		int timeOfStudy; //How long is this course
		DWORD64 value; // Course ID in memoey (eg. COLLEGE_COURSES_TIER1.CLGT1CR_A) //64bit is ok?
		EDiplomaTier tier; //What diploma is this (eg. DIPLOMA_First)
		EStudyField field; //What kind of studies you are taking (eg. STDFLD_Tradeschool)
	};

#endif