/*
 * HEADER.h
 *
 *  Created on: 06-Dec-2021
 *      Author: amogh,aditya,abhinav
 */

#ifndef HEADER_H_
#define HEADER_H_

class variable{
	public:
    int task;
    int taskforcb;//variable for booking and certificate
	int n,Age,day,month,year;
	int curda,curmo,curye;// current date, month, year
    unsigned long long mobile,mobile1,password,password1,back,date,birthdate,menu,y;
    long long int aadhar;
    char Name[50];
    char Surname[50];
};
class Covid:public variable
{
     public:
         void menu();
         void display();
         void registration();
         void login();
         void booking();
         void certificate();
};


#endif /* HEADER_H_ */
