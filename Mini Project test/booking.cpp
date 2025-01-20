#include "booking.hpp"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int Customer_Num, i, day, month, year;

void BookingDetail()
{
    ofstream output;
    output.open("BookingDetail.txt");

    do 
    {
        cout << "How Many The Participant > ";
        cin >> Customer_Num;
        if (Customer_Num <= 0) 
        {
            cout << "\nInvalid Data" << endl;
        }
    } while (Customer_Num <= 0);

    string* Customer_Name = new string[Customer_Num];
    cin.ignore();
    for (i = 0; i < Customer_Num; i++) 
    {
        cout << "\nPlease Enter Name > ";
        getline(cin, Customer_Name[i]);
    }
    
    cout << "\nPlease Enter Date (dd mm yyyy)  > ";
    cin >> day >> month >> year;

    output << "            Your Booking Detail     " <<  endl;
    output << "\n------------------------------------------" <<  endl;
    output << "   No          Participant     " <<  endl;
    for (i = 0; i < Customer_Num; i++) 
    {
        output << "   "<< i + 1 << "          "<< Customer_Name[i] << endl;
    }
    output << "------------------------------------------" <<  endl;
    output << "\nDate Travel > " << day << " / " << month << " / " << year << endl;
    delete[] Customer_Name; 
}
