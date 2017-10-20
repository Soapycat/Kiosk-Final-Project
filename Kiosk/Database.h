#pragma once
using namespace System;
using namespace System::Data::OleDb;
using namespace System::Collections::Generic;


public ref class Database
{
private:
	String^ connstr;
	OleDbConnection ^ cn;
	int performIntQuery(String^ query);
	List<Object^>^ Database::performObjectListQuery(String^ query);
public:
	Database();
	~Database();
	int routePrice(String^ source, String^ destination);
	int gradePrice(String^ grade);
	List<Object^>^ getCities();
	List<Object^>^ getGrades();
};

