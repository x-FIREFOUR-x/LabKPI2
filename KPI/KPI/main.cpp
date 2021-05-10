#include <iostream>
#include  "SiteInterface.h"

int main()
{
	srand(time(NULL));
	SiteInterface::createDefaultFiles();
	SiteInterface::showMenu();
}

