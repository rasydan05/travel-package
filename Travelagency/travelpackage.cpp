#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

void BookingDetail();
void displayTravelPackages();
float calculatePayment(int Customer_Num, int choose);
void displayPayment(float totalPrice, int Customer_Num, int choose);

int Customer_Num, i, day, month, year, choose;

int main() {
    // Display a welcome message
    cout << "Welcome to the Malaysia Travel Package System!" << endl;
    cout << "Here are the available travel packages:" << endl;
    cout << "----------------------------------------" << endl;

    // Call the function to display travel packages
    displayTravelPackages();

    // Get booking details
    BookingDetail();

    // Calculate payment
    float totalPrice = calculatePayment(Customer_Num, choose);

    // Display payment
    displayPayment(totalPrice, Customer_Num, choose);

    cout << "Thank you for using the system. Have a great trip!" << endl;
    return 0;
}

// Function to display travel package details
void displayTravelPackages() {
    struct TravelPackage {
        string name;
        string destination;
        string highlights;
        string inclusions;
        string pricing;
        string availableDates;
    };

    // Define travel packages
    TravelPackage packages[4] = {
        {
            "Langkawi Island Getaway (3 Days, 2 Nights)",
            "Langkawi, Kedah",
            "Langkawi Sky Bridge, Island hopping (Pulau Dayang Bunting, Pulau Beras Basah), Wildlife Park",
            "2 nights 4-star accommodation, Daily breakfast, Return airport transfers, Guided tours",
            "1200",
            "Open all year, discounts during off-peak seasons"
        },
        {
            "Kota Kinabalu & Kundasang Adventure (5 Days, 4 Nights)",
            "Sabah",
            "Hike at Kinabalu Park, Desa Dairy Farm, Poring Hot Springs, Sunset cruise",
            "4 nights 3-star accommodation, Daily breakfast, 2 dinners, Entrance fees, Private guide",
            "2500",
            "Limited slots during peak periods (March to May)"
        },
        {
            "Historical Malacca Tour (2 Days, 1 Night)",
            "Malacca City, Malacca",
            "Jonker Street, A Famosa Fort, Christ Church, Malacca River cruise",
            "1-night heritage boutique stay, Breakfast, Lunch, Professional guide, Souvenir pack",
            "450",
            "Every weekend, weekday discounts available"
        },
        {
            "Taman Negara Eco-Adventure (4 Days, 3 Nights)",
            "Taman Negara National Park, Pahang",
            "Canopy walkway, Jungle trekking, Night safari, Riverboat adventure, Orang Asli experience",
            "3 nights eco-resort chalet, Full-board meals, Guided tours, Adventure gear rental",
            "1800",
            "All year; best during March–September"
        }
    };

    // Display travel packages
    for (int i = 0; i < 4; i++) {
        cout << "Package " << i + 1 << ": " << packages[i].name << endl;
        cout << "Destination: " << packages[i].destination << endl;
        cout << "Highlights: " << packages[i].highlights << endl;
        cout << "Inclusions: " << packages[i].inclusions << endl;
        cout << "Pricing: RM " << packages[i].pricing << " per person" << endl;
        cout << "Available Dates: " << packages[i].availableDates << endl;
        cout << "----------------------------------------" << endl;
    }
}

void BookingDetail() {
    ofstream output;
    output.open("BookingDetail.txt");

    do {
        cout << "Pls Choose Destination (1-4) > ";
        cin >> choose;
        cout << "How Many The Participant > ";
        cin >> Customer_Num;

        if (Customer_Num <= 0) {
            cout << "\nInvalid Data" << endl;
        }
    } while (Customer_Num <= 0);

    string* Customer_Name = new string[Customer_Num];
    cin.ignore();

    for (i = 0; i < Customer_Num; i++) {
        cout << "\nPlease Enter Name > ";
        getline(cin, Customer_Name[i]);
    }

    cout << "\nPlease Enter Date (dd mm yyyy)  > ";
    cin >> day >> month >> year;
    output << "            Your Booking Detail     " << endl;
    output << "\n------------------------------------------" << endl;
    output << "   No          Participant     " << endl;
    for (i = 0; i < Customer_Num; i++) {
        output << "   " << i + 1 << "          " << Customer_Name[i] << endl;
    }
    output << "------------------------------------------" << endl;
    output << "\nDate Travel > " << day << " / " << month << " / " << year << endl;
    delete[] Customer_Name;
}

float calculatePayment(int Customer_Num, int choose) {
    float totalPrice = 0;
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

void displayPayment(float totalPrice, int Customer_Num, int choose) {
    ofstream dispreceipt;
    dispreceipt.open("Receipt.txt");

    dispreceipt << "\n--- Payment Bill ---\n";
    dispreceipt << "Package: " << choose << endl;
    dispreceipt << "Price per person: RM" << fixed << setprecision(2) << (totalPrice / Customer_Num) << endl;
    dispreceipt << "Number of People: " << Customer_Num << endl;
    dispreceipt << "Total Price: RM" << fixed << setprecision(2) << totalPrice << endl;
}
