//============================================================================
// Name        : miniproject.cpp
// Author      : amogh,aditya,abhinav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include<iostream>
#include<istream>
#include<fstream>
#include<string>
#include<ctime>
#include<stdlib.h>

#include"HEADER.h"

//Main function
int main(){
	time_t now=time(0);
    char* date_time = ctime(&now);
    cout<<"Current Date And Time is:- "<<date_time<<endl;
	Covid tasking;
	tasking.menu();
	return 0;
}
