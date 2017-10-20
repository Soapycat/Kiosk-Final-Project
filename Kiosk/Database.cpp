#include "Database.h"
#include "AirlneTicket.h"
#include <string>

using namespace System;
using namespace System::Data;
using namespace System::IO;

Database::Database()
{
	connstr = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + Directory::GetCurrentDirectory() + "\\Data\\City.accdb";
	cn = gcnew OleDbConnection(connstr);
	cn->Open();
}

Database::~Database()
{
	cn->Close();
}

int Database::performIntQuery(String^ query) {
	String^ queryRoute(query);
	OleDbCommand^ cmd = gcnew OleDbCommand(queryRoute, cn);
	OleDbDataReader^ dr = cmd->ExecuteReader();
	if (dr->Read())
	{
		int value = System::Convert::ToInt16(dr->GetValue(0));
		dr->Close();
		return value;
	}
	else {
		dr->Close();
		return 0;
	}
}

List<Object^>^ Database::performObjectListQuery(String^ query) {
	List<Object^>^ objects = gcnew List<Object^>();

	//OleDbCommand ^ cmd = gcnew OleDbCommand(query, cn);
	OleDbCommand^ cmd = gcnew OleDbCommand();
	cmd->Connection = cn;
	cmd->CommandText = query;
	OleDbDataReader ^ dr = cmd->ExecuteReader();
	while (dr->Read())
	{
		objects->Add(dr->GetValue(0));
	}

	return objects;
}
int Database::routePrice(String^ source, String^ destination) {
	String^ queryRoute("SELECT Price FROM Route WHERE To =\"" + source + "\"  AND From =\"" + destination + "\"");
	return performIntQuery(queryRoute);
}

int Database::gradePrice(String^ grade) {
	String^ queryGrade("SELECT Price FROM Grade WHERE Grade =\"" + grade + "\"");
	return performIntQuery(queryGrade);
}

List<Object^>^ Database::getCities() {
	String^ query("SELECT CityName FROM City");
	return performObjectListQuery(query);
}

List<Object^>^ Database::getGrades() {
	String^ query("Select Grade FROM Grade");
	return performObjectListQuery(query);
}