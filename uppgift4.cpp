/*
 * TND012, Lab2: exercise 4
 * Author:
 *
 */

#include <string>
#include <iostream>

int main() {
    //Initilized variables
    int oneDay = 24;
    int h_departure = 0;
    int min_departure = 0;
    int h_duration = 0;
    int min_duration = 0;
    int h_arrival = 0;
    int min_arrival = 0;
    std::string Arrival = "today";
    
    //User interface for where to input
    std::cout << "The departure time: ";
    //User input
    std::cin >> h_departure >> min_departure;
    
    //Checks if user input is valid for the departure time
    if (h_departure >= oneDay || min_departure >= 60 || min_departure < 0){
        h_departure = 0;
        min_departure = 0;
        std::cout << "ERROR! INVALID NUMBER!\n"  << std::endl;
        return 0;
    }
    
    //User interface for where to input
    std::cout << "The flight duration: ";
    //User input
    std::cin >> h_duration >> min_duration;
    
    //Checks if user input is valid for the duration
    if (h_duration >= oneDay || min_duration >= 60 || min_duration < 0){
        h_duration = 0;
        min_duration = 0;
        std::cout << "ERROR! INVALID NUMBER!\n"  << std::endl;
        return 0;
    }

    //Calculates the arrival minut
    min_arrival += min_departure + min_duration;
    //Checks if the arrival minut is over or equal to 60 min and if true converts the 60 min to 1h and the rest value will be the new value for the arrival minut.
    if (min_arrival >= 60){
        h_arrival += 1;
        int min_trueArrival = min_arrival - 60;
        min_arrival = 0;
        min_arrival += min_trueArrival;
    }
    //Calculates the arrival hour
    h_arrival += h_departure + h_duration;
    //Checks if the arrival hour is over or equal to 24 hours and if true converts the string Arrival to tomorrow and the rest value will be the new value for the arrival hour.
    if (h_arrival > oneDay){
        Arrival = "tomorrow";
        int h_trueArrival = h_arrival - oneDay;
        h_arrival = 0;
        h_arrival += h_trueArrival;
    }
    
    //Prints the arrival time
    std::cout << "Arrival time: "  << Arrival << " at " << h_arrival << ":" << min_arrival << std::endl;
    return 0;
}
