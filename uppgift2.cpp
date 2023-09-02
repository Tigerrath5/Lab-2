/*
 * TND012, Lab2: exercise 2
 * Author:
 *
 */
#include <iostream>
#include <iomanip>
#include "cmath"

int main() {
    //initialized variables
    double x1, x2;
    double b, c;
    double radicant;
    
    std::cout << "Solving a second degree equation of the form x^2 + b*x + c\n" << std::endl;
    std::cout << "Enter coefficient b: ";
    std::cin >> b;
    std::cout << "Enter coefficient c: ";
    std::cin >> c;
    
    //defining the radicant variable as the radicant of the PQ formula, so it is easier to read what is being square rooted, and what has to be smaller than 0 in the if statment.
    radicant = (pow((b/2), 2) - c);
    //using the PQ formula to find both values of x.
    x1 = -(b/2)+(sqrt(radicant));
    x2 = -(b/2)-(sqrt(radicant));
    
    //the first if statment finds if it exists reall roots.
    if (radicant < 0){
        std::cout << "x1 and x2 are complex roots!!" << std::endl;
        return 0;
    }
    //if the two found reall roots are not equal then print there seperate values, because they are not doulble roots.
    else if (x1 != x2){
        std::cout << "\nx1 = " << std::fixed << std::setprecision(3) << x1 << "\nx2 = " << std::fixed << std::setprecision(3) << x2 << std::endl;
    }
    //if the two found roots are equal then they are double roots.
    else if (x1 == x2){
        std::cout << "\nx1, x2 = " << std::fixed << std::setprecision(3) << x1 << "     (double root)"<< std::endl; //does not matter if x1 or if x2 is printed they are the same in this case.
    }
    return 0;
}
