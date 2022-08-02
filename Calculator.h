#ifndef COLE_HORVAT_COMP_3141_PROJECT_CALCULATOR_H
#define COLE_HORVAT_COMP_3141_PROJECT_CALCULATOR_H

#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    //Constructor
    Calculator() {};

    //Destructor
    ~Calculator() {};

    //Functions
    virtual void displayOptions() {
        currentMode = (isBasic) ? "Basic" : "Scientific";
        cout << "\n\nBASIC OPTIONS:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Square Root\n6. Square";
        cout << "\n\nCurrent mode is: " << currentMode << "\n10. Switch mode\nTo close the program, input 'EXIT'";
    };
    virtual void displayAnswer(const double answer) { cout << "The answer is: " << answer << endl; };
    virtual void switchMode() { isBasic = !isBasic; };

    //Get Functions
    virtual bool getIsBasic() { return isBasic; }
    virtual string getCurrentMode() { return currentMode; }

    //Set Functions
    virtual void setIsBasic(bool nIsBasic) { isBasic = nIsBasic; }
    virtual void setCurrentMode(string nCurrentMode) { currentMode = nCurrentMode; }

private:
    bool isBasic = true;
    string currentMode = "";
};
#endif