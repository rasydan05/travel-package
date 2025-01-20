#include <iostream>
#include "travelpackage.hpp"
#include "booking.hpp"
#include "customer registration.hpp"
#include "paymentcalc.hpp"
#include "proceedpayment.hpp"
#include "exit.hpp"
#include "message.hpp"
#include "admin.hpp"

using namespace std ;
int main()
{
        int choice , choose , Customer_Num , totalPrice , customerId = 0 , customerId2 ;
        cout << "\n------ Travel Agency Booking System ------\n";
        cout << "1. Register \n";
        cout << "2. Admin\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerCustomer();
                break;
            case 2:
                admin () ;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                return 0 ;
        }
    BookingDetail() ;
    displayTravelPackages();

    cout << "Enter the number of people: ";
    cin >> Customer_Num;
    cout << "Choose a travel package (1 - 4): ";
    cin >> choose;
    int answer = calculatePayment(Customer_Num, choose); 
    cout << "Total payment: RM" << answer << endl;

    displayPayment( Customer_Num ,  totalPrice ,   choose) ;
    cout << "Enter Your Customer ID > ";
    cin >> customerId2 ;
    generateReceipt() ;
    
        cout << "\n------ Pay For Your Booking------\n";
        cout << "1. Yes \n";
        cout << "2. Cancel\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                proceedPayment(customerId2);
                break;
            case 2:
                exit() ;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                return 0 ;
        }
    message() ;

    return 0;
    }
    
