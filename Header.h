#pragma once
#ifndef HEADER_H
#define HEADER_H
#include "stdafx.h"

using namespace std;

class Weapon
{
public:
	void loadFeatures()
	{
		cout << "Loading weapon features.\n";
		std::cout << R"( 
,_,_,_,_,_,_,_,_,_,_|___________________________________________________
| | | | | | | | | | |__________________________________________________/
'-'-'-'-'-'-'-'-'-'-|-------------------------------------------------
        )";

	}
};

class shield : public Weapon
{
public:
	void loadFeatures()
	{
		cout << "Loading shield features.\n";

		cout << "Loading shield features.\n";

		cout << R"( 
  |`-._/\_.-`|
  |    ||    |
  |___o()o___|
  |__((<>))__|
  \   o\/o   /
   \   ||   /
    \  ||  /
     '.||.'
       ``
      
        )";


	}
};

class axe : public Weapon
{
public:
	void loadFeatures()
	{
		cout << "Loading axe features.\n";

		cout << R"(
-- /~-__A__-~\ --------------- /~-__A__-~\ --
  |     H     |               |     H     |
  |     H     |               |     H     |
   \_-~~H~~-_/                 \_-~~H~~-_/
        H                           H
        H                           H
        H                           H
        H                           H
------- U ------------------------- U -------
 )";

	}
};

#endif // !HEADER_H