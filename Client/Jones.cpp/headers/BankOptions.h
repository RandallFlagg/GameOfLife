#include <Options.h>
#include <Avatar.h>

class BankOptions : public Options//what is default?
{
private:
	void buildingOptions(CAvatar avatar, int option);
	enum ACTIONID{A,B,C};
public:
	void Show(CAvatar&);
	void Action(ACTIONID,...);
};