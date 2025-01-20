#include "exit.hpp"
#include "proceedpayment.hpp"
#include <iostream>

using namespace std ;

int cancel , customerId2 ;
void exit()
{
    cout << "\nDo You Want To Cancel ?  \n" ;
    cout << "\nPress 1 to Cancel or  Press 2 To Countinue\n" ;
    cin >> cancel ;
    switch (cancel) {
            case 1:
                proceedPayment(customerId2);
                break;
            case 2:
                cout << "See You Soon , Thank You For Your Purchased " ;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

}