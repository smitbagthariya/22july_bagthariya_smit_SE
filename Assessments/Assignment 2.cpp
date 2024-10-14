#include <iostream>
#include <cmath>
using namespace std;

const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

main() 
{
    string eventName;
    string firstName, lastName;
    int numberOfGuests;
    int numberOfMinutes;

    // Get event information
    cout<<"Enter event name: ";
    cin>>eventName;

    cout<<"Enter first name and last name: ";
    cin>>firstName>>lastName;

    cout<<"Enter number of guests: ";
    cin>>numberOfGuests;

    cout<<"Enter number of minutes: ";
    cin>>numberOfMinutes;

    // number of servers
    int numberOfServers = ceil(numberOfGuests / 20.0);

    // cost of one server
    double cost1 = (numberOfMinutes / 60) * CostPerHour;
    double cost2 = (numberOfMinutes % 60) * CostPerMinute;
    double costForOneServer = cost1 + cost2;

    // total food cost
    double totalFoodCost = numberOfGuests * CostOfDinner;

    // cost per person
    double averageCost = totalFoodCost / numberOfGuests;

    // total cost
    double totalCost = totalFoodCost + (costForOneServer * numberOfServers);

    // deposit amount
    double depositAmount = totalCost * 0.25;

    // Display results
    cout << "Event Name: "<<eventName;
    cout << "\nName: "<<firstName<<lastName;
    cout << "\nNumber of Guests: "<<numberOfGuests;
    cout << "\nNumber of Minutes: "<<numberOfMinutes;
    cout << "\nNumber of Servers: "<<numberOfServers;
    cout << "\nCost of One Server: $"<<costForOneServer;
    cout << "\nTotal Food Cost: $"<<totalFoodCost;
    cout << "\nAverage Cost Per Person: $"<<averageCost;
    cout << "\nTotal Cost: $"<<totalCost;
    cout << "\nDeposit Amount: $"<<depositAmount;
}
