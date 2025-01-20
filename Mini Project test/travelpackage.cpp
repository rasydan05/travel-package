#include "travelpackage.hpp"
#include <iostream>
#include <string>
using namespace std;

// Function to display travel package details
void displayTravelPackages(){
    struct TravelPackage{
        string name;
        string destination;
        string highlights;
        string inclusions;
        string pricing;
        string availableDates;
    };

    // Define travel packages
    TravelPackage packages[4] ={
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

    // Display a welcome message
    cout << "\nWelcome to the Malaysia Travel Package System!" << endl;
    cout << "Here are the available travel packages:" << endl;
    cout << "----------------------------------------" << endl;
    // Display travel packages
    for (int i = 0; i < 4; i++){
        cout << "Package " << i + 1 << ": " << packages[i].name << endl;
        cout << "Destination: " << packages[i].destination << endl;
        cout << "Highlights: " << packages[i].highlights << endl;
        cout << "Inclusions: " << packages[i].inclusions << endl;
        cout << "Pricing: RM " << packages[i].pricing << " per person" << endl;
        cout << "Available Dates: " << packages[i].availableDates << endl;
        cout << "----------------------------------------" << endl;
    }
}
