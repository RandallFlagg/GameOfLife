#include<Avatar.h>

class Options
{
protected:
	virtual void buildingOptions(CAvatar avatar, int option) = 0;
public:
	//virtual void Show() = 0;
	virtual void Show(CAvatar&) = 0;
};