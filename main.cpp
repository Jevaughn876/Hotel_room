/*
Author: Jevaughn Dawes
Date: May 02, 2021
Purpose: To write a C++ program that reserve rooms in a hotel.
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <process.h>
#include <fstream>
#include <string>
using namespace std;
class person

struct Name               // structure for naming program
{

    char first[20;
    char last[20];
    char date[20];
    int room;
};

//Prototyping of functions for menu//
void menu();
void search();
void add();
void displayall();
void modify();
void delete();
void trash();
void vacant_rooms();
void customer_reserve();
void login();
void check();
void del_resdata();
int main()
{
    int a;
    int choice;
    char again;
    char x[20];
    cout<<endl;
    cout<<"    **** Welcome to the Hotel Reservation **** "<<endl;

    char 1=219;
    cout<<"Please wait while system log in"<<endl;
    for ( int i=0; i<10; i++)
    {
        Beep (2000,500);
        cout<<1;
    }
    cout<<endl;
    cout<<"Please Enter Username and Password to enter"<<endl;
    login();
    cout<<"__________________________________________"<<endl;
    cout<<endl;
    do
    {
        cout<<"welcome to the Main Menu"<<endl;
        cout<<"Press 1 to reserve a room."<<endl;
        cout<<"Press 2 to see vacant rooms"<<endl;
        cout<<"Press 3 to checkout a room."<<endl;
        cout<<"Press 4 to see the history of reservation"<<endl;
        cout<<"Press 5 to delete the reservation date"<<endl;
        cout<<"Press 0 to exit application"<<endl;
        cout<<"Enter here__:"<<endl;
        cin>>a;
    }
    void menu()
    {
        int a;
        options();
        cin>>a;
        while(a)
        {
            switch(a)
            {
                case 1: customer_reserve(); break;
                case 2: vacant_rooms(); break;
                case 3: check(); break;
                case 4: del_resdata (); break;
                default: cout<<" you have enter an invalid value ...";
            }
            system("pause");
            //clrscr();
            options();
            cin>>a;
    }
    return 0;
}
