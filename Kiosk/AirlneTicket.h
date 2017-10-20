#pragma once
#include "Database.h"
#include <string>
using namespace System;

public ref class Ticket
{
private:
	int bag;
	int pass;
	String^ Depart;
	String^ Arrive;
	String^ Grade;
	Database^ db;
public:
	Ticket(Database^ db);
	~Ticket();
	void setValue(int bags, int passenger, String^ Dep, String^ Arr, String^ Gra);
	int getValue(int selection);
	String^ getString(int selection);
	int routeQuery();
	int gradeQuery();
	int otherPrice();
};

