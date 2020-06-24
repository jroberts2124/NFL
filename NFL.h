#pragma once

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

struct player
{
	string firstname;
	string lastname;
	int pyards;
	int jnumber;
	int ryards;
	int pTD;
	int rTD;
	int inter;
	float QBR;
	int recyards;
	string college;
	string team;
	int years;
	int rec;
	int rushAtt;
	int recTD;

};

class playerInventory
{
public:
	playerInventory();
	playerInventory(string filename);
	void addQB(string first, string last, string coll, string tea, int jnum, int passy, int passTD, float rating, int years);
	void addRB(string first, string last, string coll, string tea, int jnum, int rushy, int ratt, int rushtd, int years);
	void addWR(string first, string last, string coll, string tea, int jnum, int recy, int retd, int recp, int year);
	
	
	
	

private:
	vector<player> playerstorage;


};

