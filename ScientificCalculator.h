#ifndef COLE_HORVAT_COMP_3141_PROJECT_SCIENTIFICCALCULATOR_H
#define COLE_HORVAT_COMP_3141_PROJECT_SCIENTIFICCALCULATOR_H
#include <cmath>
#include "BasicCalculator.h"

using namespace std;

class ScientificCalculator : public BasicCalculator {
public:
    //Constructor
    ScientificCalculator() {};

    //Destructor
    ~ScientificCalculator() {};

    //Math Functions
    double calculateSin(double x) { return sin(x); }

    double calculateCos(double x) { return cos(x); }

    double calculateTan(double x) { return tan(x); }

    virtual void displayOptions() {
        BasicCalculator::displayOptions();
        if(!getIsBasic())
            cout << "\n\nSCIENTIFIC OPTIONS:\n7. Sin (Rad)\n8. Cosine (Rad)\n9. Tan(Rad)";
    }
};
#endif