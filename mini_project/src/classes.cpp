/*
 * classes.cpp
 *
 *  Created on: 06-Dec-2021
 *      Author: amogh,aditya,abhinav
 */

#include <iostream>
using namespace std;

#include<iostream>
#include<istream>
#include<fstream>
#include<string>
#include<ctime>
#include<stdlib.h>

#include"HEADER.h"

         void Covid::menu()
         {

    	cout<<"\t\t\t\tWELCOME TO THE MAIN PAGE. ";

    	cout<<"\n1. REGISTRATION.\n";
    	cout<<"2. LOGIN.\n";

    	cout<<"\nCHOOSE THE TASK:-\n ";
    	cin>>n;

    	switch(n)
		{
    	case 1:
    	registration();
    	break;

    	case 2:
    	login();
    	break;
        }
	}
	void Covid::display(){

	cout<<"1. Booking "<<endl;
	cout<<"2. Certificate "<<endl;

	cout<<"choose your task"<<endl;
	cin>>taskforcb;

	switch(taskforcb){
		case 1:
		booking();
		break;

		case 2:

		certificate();


		break;
		}
	}


	void Covid::registration()
	{

		ofstream infile;
		infile.open("UserDetails.txt");
		cout<<"\n\t\t\t\tWELCOME TO THE REGISTRATION PAGE.\n\n"<<endl;
		cout<<"\t\t\tFOR REGISTRATION PLEASE FILL THE FOLLOWING DETAILS\t\t\n\n"<<endl;

		cout<<"\t\tPlease Register with Mobile And Password Digits"<<endl;

				 cout<<"\n\t\t\tEnter Your Mobile => ";
				 cin>>mobile;
				 infile<<mobile<<endl;

				 cout<<"\t\t\tEnter Password in Digit Form => ";
				 cin>>password;
				 infile<<password<<endl;

				 cout<<"\t\t\tEnter Your First Name => ";
				 cin>>Name;
				 infile<<Name<<" ";

				 cout<<"\t\t\tEnter Your Last Name => ";
				 cin>>Surname;
				 infile<<Surname<<endl;

				 cout<<"\t\t\tEnter Your Age => ";
				 cin>>Age;
				 infile<<Age<<endl;

				 cout<<"\n"<<endl;
				 cout<<"\t\t\tEnter Your Date Of Birth  => \n"<<endl;

				 cout<<"\t\t\tEnter date=> ";
				 cin>>day;
				 infile<<day<<endl;
				 cout<<"\t\t\tEnter month => ";
				 cin>>month;
				 infile<<month<<endl;
				 cout<<"\t\t\tEnter The Year => ";
				 cin>>year;
				 infile << year<<endl;
				 cout<<"\n"<<endl;
				infile.close();

				 ofstream outfilethree;
				 outfilethree.open("Aadhar.txt");
				 cout<<"\t\t\t Enter AADHAR => ";
				 cin>>aadhar;
				 outfilethree<<aadhar<<endl;




				cout <<"\t\t\t\tYOU HAVE REGISTERED SUCCESSFULLY!!!\n\n "<<endl;

			  ifstream outfile("UserDetails.txt" );

			  cout<<"\t\t\t\t\t Your Details \n\n"<<endl;

			  outfile>>mobile;
			  cout<<"\t\t\t Your Mobile Number =>"<<mobile<<endl;

			   outfile>>password;
			  cout<<"\t\t\t Your Password => "<<password<<endl;

			  outfile>>Name>>Surname;
			  cout<<"\t\t\t Your Name => "<<Name<<" "<<Surname<<endl;

			  outfile>>Age;
			  cout<<"\t\t\t Age => "<<Age<<endl;

			  outfile>>day>>month>>year;
			  cout<<"\t\t\t Birth Date => "<< day <<"/"<<month <<"/"<<year <<endl;
			  outfile.close();

			  ifstream outfilethf("Aadhar.txt");
			  outfilethf>>aadhar;
			  cout<<"\t\t\t Your Aadhar => "<<aadhar<<endl;




			printf("\n\n");
			cout<<"\t\t\t!!Please Note Password Carefully!!\n\n"<<endl;

			cout<<" Enter 1 to RESET details OR Enter 0 to jump login page"<<endl;
			cin>>back;

			   if(back==0)
			   {

				 login();

			}
				else{
				registration();
			   }
	 }

	void Covid::login(){
		ifstream input("UserDetails.txt");

		 cout<<"\t\t\t Login With Mobile And Password\n"<<endl;

		 cout<<"\t\t\t Enter Your Mobile Number => ";
		 cin>>mobile1;

		 cout<<"\t\t\t Enter Your Password => ";
		 cin>>password1;

		 if(input>>mobile && input>>password && mobile==mobile1 && password==password1){
			 cout<<"\t\t\t\n\nLogin successfully"<<endl;

			 display();
		 }
		 else{

			cout<<"\tIncorrect Mobile Number or Password !!"<<endl;
			cout<<"\t\t\t\t\tOR\n\t\t You have not Registered Yourself.\n";
			cout<<"Press 1 For Registration otherwise 0.";
			cin>>y;


			switch(y)
				{
					case 0:
						login();
						break;

					case 1:
						registration();
						break;
				 }
			 }

			input.close();
	}

	void Covid::booking()
		{
			 time_t now=time(0);
			 char* date_time = ctime(&now);
			 cout<<"Current Date And Time is:- "<<date_time<<endl;
			int m,x;
			 cout<<"\t\t\tWELCOME TO THE BOOKING PAGE.\n";
			 cout<<"\nFOR BOOKING: PLEASE FILL THE FOLLOWING DETAILS:-\n";

			 ofstream onfile;
			 onfile.open("DateOfBooking.txt");

			 cout<<"Enter Current Date => ";

			  cout<<"\n Enter The Date => "<<endl;
			  cin>> curda;
			  onfile<< curda<<endl;

			 cout<<"\n Enter month=> "<<endl;
			 cin>>curmo;
			 onfile<< curmo<<endl;

			 cout<<"\nEnter The Year => "<<endl;
			 cin>>curye;
			 onfile<< curye<<endl;

			 onfile.close();

			 cout<<"\n\tSelect the City you are in Karnataka:-\n1.Bengaluru.\n2.Mysuru.\n3.Mangalore.";
			 cout<<"\n4.Tumkur.\n5.Kolar.\n6.Gadag.\n7.Madikeri.\n8.Bijapur.\n9.Gulbarga.\n10.Hubli.\n";

			 cout<<"Enter The City Number :- \n";
			 cin>>m;


			 switch(m)
			 {
				case 1:
					cout<<"\n\nPlaces Available In Bengaluru For Vaccination:-\n";
					cout<<"1.APOLLO HOSPITAL.\n2.FORTIS HOSPITAL.\n3.CLOUDNINE. HOSPITAL.\n4.VICTORIA HOSPITAL.\n5.COLUMBIA ASIA HOSPITAL.";
					cin>>x;
					break;

				case 2:
					cout<<"Places Available In Mysuru For Vaccination:-\n";
					cout<<"1.BGS APOLLO.\n2.Lotus Life Care Hospital.\n3.Government  Hospital\n4.Miracles Hospital\n5.Vikram Hospital.";
					cin>>x;
					break;

				 case 3:
					cout<<"Places Available In Mangalore For Vaccination:-\n";
					cout<<"1.Columbia Asia.\n2.Mangalore Government Health Centre.\n3.CloudNine Hospital\n4.St Martha?s.\n5.Community Hall.";
					cin>>x;
					break;

				case 4:
					cout<<"Places Available In Tumkur For Vaccination:-\n";
					cout<<"1.Vasista Clinic.\n2.Government Hospital.\n3.Hosahalli hospital\n4.ITM Hospital\n5.COLUMBIA ASIA HOSPITAL..";
					cin>>x;
					break;

				case 5:
					cout<<"Places Available In Kolar For Vaccination:-\n";
					cout<<"1.KGF Hospital.\n2.Manav Vaccines.\n3.Sidvin Hospital\n4.Agrawal Eye and child care Hospital.\n5.Diacon Hospital.";
					cin>>x;
					break;

				case 6:
					cout<<"Places Available In Gadag For Vaccination:-\n";
					cout<<"1.District Government Hospital.\n2.Victoria Hospital\n3.Sharda Hospital.\n4.Primary Health centre.\n5.Shrinath Clinic.";
					cin>>x;
					break;

				case 7:
					cout<<"Places Available In Madikeri For Vaccination:-\n";
					cout<<"1.Civil Hospital,Mandsaur.\n2.Shree Sidhi Vinayak Multi Speciality Hospital.\n3.Ajay Hospital.\n4.Government Hospital\n5.Centre District Hospital.";
					cin>>x;
					break;

				case 8:
					cout<<"Places Available In Bijapur For Vaccination:-\n";
					cout<<"1.Apex Care Hospital.\n2.Community Health Centre.\n3.Sunrise Hospital.\n4.Universal Hospital And Health Centre.\n5.Astha Hospital.";
					cin>>x;
					break;

				case 9:
					cout<<"Places Available In Gulbarga For Vaccination:-\n";
					cout<<"1GIMS\n2.Basaveshwar Hospital\n3.Dhanavantri Hospital\n4.Chirayu Hospital \n5.United Hospital";
					cin>>x;
					break;

				case 10:
					cout<<"Places Available In Hubli For Vaccination:-\n";
					cout<<"1.Padmavati Hospital.\n2.Fortis Hosital And Research Centre.\n3.Apollo Hospital.\n4.GD Hospital.\n5.CloudNine Hospital.";
					cin>>x;
					break;

			 }


			 cout<<"\t\t\tBooked Succesfully\n";

			 cout<<"\nPlease Note The Date Of Vaccination.\n";


			  ifstream iffiletwo;
			 iffiletwo.open("DateOfBooking.txt");

			 iffiletwo>>curda>>curmo>>curye;
			 for (int i=1;i<=28;i++)
			 curda=rand()%100;
			 if(curmo==12)
			 {
				 curmo =0;
				 curye = curye + 1 ;
			 }
			 cout<<"\n\t\t\tDate of Vaccination is:- "<<curda<<" /"<<curmo+1<<" /"<< curye<<endl;
			 cout<<"\nIf Already Booked Ignore it And direct Get Certificate !!!!!"<<endl;
			 cout<<"\n\nOther Than The Above Places You Can Also Visit Nearby BBMP or respective ward office \n\n";

			 display();
		}

		void Covid::certificate()
		{
			   cout<<"\t\t\tWELCOME TO THE CERTIFICATE PAGE.";

			   cout<<"\n\nCertificate For COVID-19 Vaccination\n\n";

			   ifstream outfileth("Aadhar.txt");

			   long long int aadhar1;
			   cout<<"Enter AAdhar Number => ";
			   cin>>aadhar1;

			   if(outfileth>>aadhar && aadhar1 == aadhar)
			   {
				cout <<"aadhar fetch successfully !!\n"<<endl;
				cout<<"ID Verified:- "<< aadhar1<<endl;
				ifstream outfiletwo("UserDetails.txt");

			   outfiletwo>>Name;
			   outfiletwo>>Surname;

			   cout<<"\n\t\tBENEFICIARY DETAILS ";

			   outfiletwo>>Name;
			   outfiletwo>>Surname;
			   cout<<"Beneficiary Name:- "<<Name<<" "<<Surname<<endl;

			   outfiletwo >>Age;
			   cout<<"Age:- "<<Age<<endl;
			   outfiletwo.close();
			   }
			   else{
				cout<<"\n Aadhar is Not Matching !!!!!!!!!\n"<<endl;
				int choice;
				cout<<"Enter Your Choice => \n";
				cout<<" Press 1 for Login "<<endl;
				cout<<"Press 2 for Register "<<endl;
				cin>>choice;
				if(choice==1){
						Covid reg;
						reg.registration();
				   }
				else if(choice==2){
					Covid reg;
					reg.login();
				}
			   }

			   outfileth.close();

			   cout<<"\n\tVACCINATION DETAILS\n ";
			   cout<<"\nVaccine Name:- COVISHIELD";
	}

