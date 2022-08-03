#include <iostream>
#include "Calculator.h"
#include "BasicCalculator.h"
#include "ScientificCalculator.h"
#include <string>
#include <cmath>

void inputNum(double &x, double &y);
void inputNum(double &x);

int main() {
    string input;
    double x, y;
    ScientificCalculator calculator;

    while(input != "EXIT") {
        cout << "\nEnter the number for the option you'd like";
        calculator.displayOptions();
        cout << "\n\nEnter option: ";
        cin >> input;

        if(input.compare("1") == 0) {
            //Addition
            inputNum(x, y);
            calculator.displayAnswer( calculator.add(x, y) );
        } else if(input.compare("2") == 0) {
            //Subtraction
            inputNum(x, y);
            calculator.displayAnswer( calculator.subtract(x, y) );
        } else if(input.compare("3") == 0) {
            //Multiplication
            inputNum(x, y);
            calculator.displayAnswer( calculator.multiply(x, y) );
        } else if (input.compare("4") == 0) {
            //Divide
            inputNum(x, y);
            calculator.displayAnswer( calculator.divide(x, y) );
        } else if (input.compare("5") == 0) {
            //Square Root
            inputNum(x);
            calculator.displayAnswer( calculator.squareRoot(x) );
        } else if(input.compare("6") == 0) {
            //Square
            inputNum(x);
            calculator.displayAnswer( calculator.square(x) );
        } else if(input.compare("10") == 0) {
            //Switch Mode (Basic & Scientific)
            calculator.switchMode();
        } else if(input.compare("EXIT") == 0) {
            break;
        } else if(calculator.getIsBasic() == false) {
            if(input.compare("7") == 0) {
                //Sin
                inputNum(x);
                calculator.displayAnswer( calculator.calculateSin(x) );
            } else if(input.compare("8") == 0) {
                //Cosine
                inputNum(x);
                calculator.displayAnswer( calculator.calculateCos(x) );
            } else if(input.compare("9") == 0) {
                //Tan
                inputNum(x);
                cout << x;
                calculator.displayAnswer( calculator.calculateTan(x) );
            }
        } else {
            cout << "Input not recognized. Please try again.";
        }
    }

    cout << "Program terminated...";
}

void inputNum(double &x, double &y) {
    try {
        cout << "Input x: ";
        cin >> x;

        cout << "Input y: ";
        cin >> y;

        if(!cin) {
            throw 505;
        }

    } catch (...) {
        cout << "\nOne or both of your inputs was not numbers. Please try again";
        cin.clear();
        cin.ignore();
    }

}

void inputNum(double &x) {
    try {
        cout << "\nInput x: ";
        cin >> x;

        if(!cin) throw 505;

    } catch(...) {
        cout << "\nYour input was not a number. Please try again";
        cin.clear();
        cin.ignore();
    }

}


