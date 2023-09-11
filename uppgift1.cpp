/*
 * TND012, Lab2: exercise 1
 * Author:
 *
 */

#include <iostream>

int main() {
    
    //initialized variables
    constexpr int ageFifteen = 15;
    constexpr int ageEight = 8;
    constexpr int eighty_SEK = 80;
    constexpr int thirty_SEK = 30;
    int age;
    int price;
    
    std::cout << "Welcome to our Football Arena.\n-----------------------------" << std::endl;
    std::cout << "Enter age: ";
    std::cin >> age;
    
    //checks if the owner is over 15, and if true then prints the correct price corresponding to that age.
    if (age >= ageFifteen){
        price = eighty_SEK;
    }
    //checks if the owner is below 15 and at least 8, and if true then prints the correct price corresponding to that age.
    else if (age < ageFifteen && age >= ageEight){
        price = thirty_SEK;
    }
    //if all the above is false then the owner must be below 8 and therefor the ticket is free.
    else if(age > 0){
        std::cout << "The football match ticket is free!" << std::endl;
        price = 0;
        return 0;
    }
    else {
        std::cout << "False age" << std::endl;
        return 0;
    }
    
    std::cout << "Price = " << price << " SEK" << std::endl;
    return 0;
}
