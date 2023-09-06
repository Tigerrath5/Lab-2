/*
 * TND012, Lab2: exercise 3
 * Author:
 *
 */

/*
* Input examples
* Input 1: y = 2.30 x + 4.00, p = (10, 27)
* Input 2: y = 1.00 x - 1.00, p = (-1.22, -2.22)
* Input 3: y = 1.00 x + 1.00, p = (-1.67, -0.67)
*/

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
    std::cout << "Enter a line (m followed by b): ";
    double m;
    double b;
    std::cin >> m >> b;

    std::cout << "Enter a point (x and y coordinates): ";
    double x;
    double y;
    std::cin >> x >> y;
    
    //Initialize variable y2 that equals a second line sharing the same m and b values as line y.
    double y2 = (m*x + b);
    //This function checks if y2 == y. If true then y and y2 are the same line, and that means the point given from the user are on the line.
    bool point_onLine = compareFloatNum(y2, y);
    
    //checks if the function returns true.
    if (point_onLine){
        //All the if-statemnts bellow is for making the printed equation look more pleasing. For example y = 1x + -5 is not so pleasing.
        if (m > 1 || m < 0){
            if (b < 0){
                std::cout << "Point (" << x << ", " << y << ") belongs to line y = " << m << "x - " << abs(b) << std::endl;
                return 0;
            }
            if (b > 0){
                std::cout << "Point (" << x << ", " << y << ") belongs to line y = " << m << "x + " << b << std::endl;
                return 0;
            }
        }
        else if (m == 1){
            if (b < 0){
                std::cout << "Point (" << x << ", " << y << ") belongs to line y = " << "x - " << abs(b) << std::endl;
                return 0;
            }
            if (b > 0){
                std::cout << "Point (" << x << ", " << y << ") belongs to line y = " << "x + " << b << std::endl;
                return 0;
            }
        }
    }
    else{
        std::cout << "Point (" << x << ", " << y << ") DOES NOT! Belong to line y = " << m << "x + " << b << std::endl;
        return 0;
    }
}

