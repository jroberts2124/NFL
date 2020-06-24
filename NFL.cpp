#include "NFL.h"

#include <string>
#include <fstream>;

playerInventory::playerInventory()
{
	// DEFAULT CONSTRUCTOR
}

playerInventory::playerInventory(string filename)
{
	player P;

	ifstream myfile;
	myfile.open("player.txt");
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			myfile >> P.firstname >> P.lastname >> P.college >> P.team >> P.pyards >> P.ryards >> P.pTD
				>> P.QBR >> P.years >> P.jnumber >> P.rec >> P.rushAtt >> P.rTD >> P.inter >> P.rec >> P.recTD;

			playerstorage.push_back(P);
		}
	}

	myfile.close();

}

void playerInventory::addQB(string first, string last, string coll, string tea, int jnum, int passy, int passTD, float rating, int year  )
{
	player P;

	P.firstname = first;
	P.lastname = last;
	P.college = coll;
	P.team = tea;
	P.jnumber = jnum;
	P.pyards = passy;
	P.pTD = passTD;
	P.QBR = rating;
	P.years = year;

	playerstorage.push_back(P);

}

void playerInventory::addRB(string first, string last, string coll, string tea, int jnum, int rushy, int ratt, int rushtd, int year)
{
	player P;
	P.firstname = first;
	P.lastname = last;
	P.college = coll;
	P.team = tea;
	P.jnumber = jnum;
	P.ryards = rushy;
	P.rushAtt = ratt;
	P.rTD = rushtd;
	P.years = year;

	playerstorage.push_back(P);
}

void playerInventory::addWR(string first, string last, string coll, string tea, int jnum, int recy, int retd, int recp, int year )
{
	player P;
	P.firstname = first;
	P.lastname = last;
	P.college = coll;
	P.team = tea;
	P.jnumber = jnum;
	P.rec = recp;
	P.recyards = recy;
	P.recTD = retd;
	P.years = year;

	playerstorage.push_back(P);


}