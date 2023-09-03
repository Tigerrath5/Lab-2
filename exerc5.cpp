// ===============================================================
// TND012
// Exerc5
// ===============================================================

#include <iostream>

bool compareFloatNum(double a, double b)
{
    // Correct method to compare!!
    /* This method compares the difference of the two floating-point numbers, a - b, between a small number (in this case 1e-9).
     If a is equal to b, then their difference will be smaller than 1e-9.
     And because we take the absolute of their differences there can not exist any negatives numbers that would be smaller than 1e-9.
     Only the rounding error of floating-point numbers can be small enough to be smaller than 1e-9: the rounding error is very small!! */
    if (abs(a - b) < 1e-9) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // Read a number
    std::cout << "Enter a number: ";  // try with 2.6
    double d;
    std::cin >> d;
    
    double bingo = 3.2;

    d += 0.2;
    d += 0.2;
    d += 0.2;
    
    //Checking if d is equal to the floating-point number assigned to bingo (3.2). The function will return a true or false boolean.
    bool Bingo = compareFloatNum(d, bingo);
    
    //If-statement checking if Bingo is true. If true it will print Bingo!!
    if (Bingo){ // no need to type Bingo == true because if-statements checks if the boolean == true as a default.
        std::cout << "Bingo!!" << std::endl;
    }
    //else-if-statement checking if d is smaller than the floating-point value of bingo.
    else if (d < bingo){
        std::cout << "Below!!" << std::endl;
    }
    else {
        std::cout << "Above!!" << std::endl;
    }
}

