#include <iostream>
#include <fstream>
#include "admin.hpp"
#include "customer registration.hpp"
#define ADMIN_CODE "traveladmin123" // Admin password for accessing booking management
using namespace std ;
int choice ;
string name , cusname , email , cusemail , phone , cusphone , address , cussaddress ;
void admin ()
{
    ifstream input ;
    input.open ("customers.txt") ;

    string entered_code;
    cout << "Enter admin code: ";
    cin >> entered_code;

    if (entered_code != ADMIN_CODE) 
        cout << "Invalid admin code.\n";
    else 
        cout << "Welcome :) \n";

    int choice;
    while (true) {
        cout << "\n----- Admin Menu -----\n";
        cout << "1. Customer Details\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\n-----Customer Details ------";
                input >> name >> cusname ;
                input >> email >> cusemail ;
                input >> phone >> cusphone ;
                input >> address >> cussaddress ;
                cout << name << "" << cusname << endl ;
                cout << email << "" << cusemail << endl ;
                cout << phone << "" << cusphone << endl ;
                cout << address << "" << cussaddress << endl ;
                break;
            case 2:
                int choice , choose , Customer_Num , totalPrice , customerId = 0 , customerId2 ;
            cout << "\n------ Travel Agency Booking System ------\n";
            cout << "1. Register \n";
            cout << "2. Admin\n";

            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) 
            {
                case 1:
                    registerCustomer();
                break;
                case 2:
                    admin () ;
                break;
                default:
                    cout << "Invalid choice. Please try again.\n";
                    return ;
            }

        }
    }
}

