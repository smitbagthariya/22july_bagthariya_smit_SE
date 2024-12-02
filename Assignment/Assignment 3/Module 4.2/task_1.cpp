#include<iostream>
using namespace std;
class Personal_Details
{
	public:
		
	string firstname;
	string lastname;
	string profileTitle;
	double mobileNo;
	string EmailAddress;
	string DOB;
	string Address;
	
	
	
	void getdata()
	{
		cout<<"\n\n---------- Personal Details ----------";
		
		cout<<"\nFirst name: ";
		cin>>firstname;
		cout<<"Last name: ";
		cin>>lastname;
		cout<<"Profile Title: ";
		cin>>profileTitle;
		cout<<"Mobile number: ";
		cin>>mobileNo;
		cout<<"Email Address: ";
		cin>>EmailAddress;
		cout<<"Date of Birth : ";
		cin>>DOB;
		cout<<"Address: ";
		cin>>Address;
	}
};
class Profile_Summary
{
	public:
	string summary;
	
	
	void get()
	{
		cout<<"\n\n---------- Summary ----------";
		
		cout<<"\nType of summary Here:";
		cin>>summary;
	}
};
class Technical_skills
{
	public:
	string P_Languages;
	string Databases; 
	string Web_Servers;
	string Software;
	string System;
	
	 
	void tech_data()
	{
		cout<<"\n\n---------- Technical skills ----------";
		
		cout<<"\nProgramming/Scripting Languages (Add comma Separated Values): ";
		cin>>P_Languages;
		cout<<"Databases (Add comma Separated Values): ";
		cin>>Databases;
		cout<<"Web Servers (Add comma Separated Values): ";
		cin>>Web_Servers;
		cout<<"Software (Add comma Separated Values): ";
		cin>>Software;
		cout<<"Systems (Add comma Separated Values): ";
		cin>>System;
		
	}
};
class Experience
{
	public:
		
	string Experience;	
	string Company_Name;
	string Position;
	string Job_Description;
	string From_Date;
	string To_Date;
	
	
			
	void Ex_data()
	{
		cout<<"\n\n---------- Experience ----------";
		
		cout<<"\nCompany Name: ";
		cin>>Company_Name;
		cout<<"Position: ";
		cin>>Position;
		cout<<"Job Description: ";
		cin>>Job_Description;
		cout<<"From Date: ";
		cin>>From_Date;
		cout<<"To Date:";
		cin>>To_Date;
	}

};
class Education
{
	public:
	string Degree;
	string School_Collage;
	int Passing_Year;
	float Percentage;
	
	
	
	void Education_Detail()
	{
		cout<<"\n\n---------- Education ----------";
		
		cout<<"\nDegree: ";
		cin>>Degree;
		cout<<"School/Collage: ";
		cin>>School_Collage;
		cout<<"Passing_Year: ";
		cin>>Passing_Year;
		cout<<"Percentage: ";
		cin>>Percentage;
	}
};
class Download_Detail : public Personal_Details , public Profile_Summary , public Technical_skills , public Experience , public Education 
{
	public:
	
	void printdata()
	{
		cout<<"\nn---------- Personal Details ----------";
		cout<<"\nFirst Name: "<<firstname<<"\tLast Name:"<<lastname;
		cout<<"\nProfile Title: "<<profileTitle;
		cout<<"\t\tMobile Number: "<<mobileNo;
		cout<<"\nEmail Address: "<<EmailAddress;
		cout<<"\t\tDate of birth: "<<DOB;
		cout<<"\nAddress: "<<Address;
		
		cout<<"\n\n---------- Summary ----------";
		
		cout<<"\nSummary: "<<summary;
		
		cout<<"\n\n---------- Technical skills ----------";
		
		cout<<"\nProgramming/Scripting Languages: "<<P_Languages;
		cout<<"\nDatabases: "<<Databases;
		cout<<"\nWeb Servers: "<<Web_Servers;
		cout<<"\nSoftware: "<<Software;
		cout<<"\nSystem: "<<System;
		
		cout<<"\n\n---------- Experience ----------";
		
		cout<<"\nCompany Name: "<<Company_Name;
		cout<<"\nPosition: "<<Position;
		cout<<"\nJob Description: "<<Job_Description;
		cout<<"\nJob Tenure: ";
		cout<<"\nFrom Date: "<<From_Date<<"\tTo Date: "<<To_Date;
		
		cout<<"\n\n---------- Education ----------";
		
		cout<<"\nDegree: "<<Degree;
		cout<<"\nSchool/Collage: "<<School_Collage;
		cout<<"\nPassing_Year: "<<Passing_Year;
		cout<<"\nPercentage: "<<Percentage;
	}
	
  
};
main()
{
	Download_Detail D1;
	D1.getdata();
	D1.get();
	D1.tech_data();
	D1.Ex_data();
	D1.Education_Detail();
	D1.printdata();
}
