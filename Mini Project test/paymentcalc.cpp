// Function to display the payment bill
#include <iostream>
#include <iomanip>
#include <fstream>
#include "paymentcalc.hpp"
using namespace std;

// function declaration
//void displayPayment() ;

int calculatePayment(int Customer_Num, int choose) {
    int totalPrice = 0;
    switch (choose) {
        case 1:
            totalPrice = 1200 * Customer_Num;
            break;
        case 2:
            totalPrice = 2500 * Customer_Num;
            break;
        case 3:
            totalPrice = 450 * Customer_Num;
            break;
        case 4:
            totalPrice = 1800 * Customer_Num;
            break;
    }
    return totalPrice;
}
// Function to calculate the total payment for a booking

void displayPayment(int Customer_Num , int totalPrice ,  int choose) 
{
    ofstream output;
    output.open("PaymentBill.txt");
    // Display the payment bill
    output << "\n--- Payment Bill ---\n";
    output << "Package: " << choose << endl;
    output << "Number of People: " << Customer_Num << endl;
    output << "Total Price: RM" << fixed << setprecision(2) << totalPrice << endl;
    output << "Your Customer ID = 1 ";
}
