#ifndef COLE_HORVAT_COMP_3141_PROJECT_BASICCALCULATOR_H
#define COLE_HORVAT_COMP_3141_PROJECT_BASICCALCULATOR_H

#include <iostream>
#include <cmath>
#include "Calculator.h"

using namespace std;

class BasicCalculator : public Calculator {
public:
    //Constructor
    BasicCalculator() {};

    //Destructor
    ~BasicCalculator() {};

    double add(double x, double y) { return x + y; }

    double subtract(double x, double y) { return x - y; }

    double multiply(double x, double y) { return x * y; }

    double divide(double x, double y) { return x / y; }

    double squareRoot(double x) { return sqrt(x); }

    double square(double x) { return x * x; }
};
#endif