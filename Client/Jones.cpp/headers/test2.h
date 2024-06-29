/* Take out needed lines. Del file when one.
#define NO_OF_FIELDS 2 // Field OF study 
#define NO_OF_TIERS 4 // First / seconds.... degree

enum _COLLEGE_COURSES_TIER1 {CLGT1CR_A=0x1,CLGT1CR_B=0x2,CLGT1CR_C=0x4,CLGT1CR_D=0x8,CLGT1CR_E=0x10,CLGCR_F=0x20,G=0x40,H=0x80,I=0x100,J=0x200};
enum _COLLEGE_COURSES_TIER2 {};
enum _COLLEGE_COURSES_TIER3 {};
enum _COLLEGE_COURSES_TIER4 {};

//enum _TRADESCHOOL_COURSES {TRSCL_A....................


enum _DIPLOMASTATUS{DPLSTATUS_NOTFINISHED,DPLSTATUS_FINISHED=0xFFFFFFFF};



bool CAcademicStatus::IsSuperMaster()
{
	//This does nothing - FIX
	return true;	 
}

DWORD64 Field::DoneCourses(_DIPLOMA_TIER degree)
{
	return  tier[degree];
}


bool Field::IsDone(_DIPLOMA_TIER _tier, DWORD32 coursesToCheck)
{
	return tier[_tier] &  coursesToCheck;
}


_DIPLOMA_TIER Field::HasADiploma()
{
	for (int i=NO_OF_TIERS;i>0;i--)
		if (tier[i] & DPLSTATUS_FINISHED) 
			return  (_DIPLOMA_TIER)i;

	return DIPLOMA_NONE;
}

*/