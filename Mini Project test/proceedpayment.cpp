#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
#include "proceedpayment.hpp"
using namespace std;

/*struct Customer {
    int id;
    string name;
    string bookedPackage;
    double amountPaid;
};

std::vector<Customer>customers;
*/
//Function declaration
//void proceedPayment(int customerId);
void generateReceipt() ;

//Function to proceed payment
void proceedPayment(int customerId2) 
 {
    if (1  == customerId2) {
        cout << "Payment successful.\n";
        return;
    }

    cout << "Customer ID not found.\n";
}

//Function to generate receipt
void generateReceipt() 
{
    cout << "\n--- Enter Your All Details To Complete Booking ---\n";
    int customerId , Package , Pay ;
    cout << "Enter Your Customer ID > ";
    cin >> customerId ;
    cout << "Enter Your Package > ";
    cin >> Package ;
    cout << "Enter Your Amount To Paid > ";
    cin >> Pay ;
    ofstream output;
    output.open("Receipt.txt");
    
        if (customerId == 1) {
            output << "\n--- Receipt ---\n";
            output << "Customer ID : " << customerId << "\n";
            output << "Package: " << Package << "\n";
            output << "Amount Paid: $" << Pay  << "\n";
            output << "----------------\n";
        }
        else
            output << "Customer ID not found.\n";

    
}

