#include "AirlneTicket.h"
#include "Database.h"
#include "AirlinePassenger.h"
#include <string>

using namespace System;
using namespace System::Data;

Ticket::Ticket(Database^ db)
{
	this->db = db;
}
Ticket::~Ticket()
{
}

void Ticket::setValue(int bags, int passenger, String^ Dep, String^ Arr, String^ Gra)
{
		bag = bags;
		pass = passenger;
		Depart = Dep;
		Arrive = Arr;
		Grade = Gra;
}
int Ticket::getValue(int selection) // 1 for bag number 2 for passenger number
{
	if (selection == 1)
	{
		return bag;
	}
	else if (selection == 2)
	{
		return pass;
	}
}
String^ Ticket::getString(int selection) // 1 for depart 2 for arrive 3 for grade
{
	if (selection == 1)
	{
		return Depart;
	}
	else if (selection == 2)
	{
		return Arrive;
	}
	else if (selection == 3)
	{
		return Grade;
	}
}
int Ticket::routeQuery()
{
	return db->routePrice(Arrive, Depart);
}
int Ticket::gradeQuery()
{
	return db->gradePrice(Grade);
}
int Ticket::otherPrice()
{
	Passengers passenger;
	int bagprice = (bag * passenger.bagPrice());
	return bagprice;
}