// Exit from the program
//======================
#ifndef EXXIT_H
#define EXXIT_H

// Header files
#include <iostream>
#include <fstream>
#include <unistd.h>
using namespace std;

// Declaration of variables, defined in main.cpp
extern string logname;

int exxit()
{
    cout << endl
         << "Program Termination..." << endl;
    usleep(1000000); // Suspend execution for microsecond intervals
    cout << "Thanks for your visit " + logname + " !" << endl;
    cout << endl
         << endl;
    exit(0);
    return 0;
}

#endif // EXXIT_H
