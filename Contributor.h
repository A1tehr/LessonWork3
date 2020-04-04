#pragma once

#include "Contribution.h"
#include <string>
using namespace std;

class Contributor {
private:
    double beginBalance;
    double endBalance;
public:
    Contributor(){
        setBeginBalance();
    }
    Contributor(double beginBalance){
        this->beginBalance = beginBalance;
    }
    void openContribution(int months){
        for (int i = 0; i < months; ++i) {
            beginBalance += beginBalance * Contribution::getPercent();
        }
        endBalance = beginBalance;
    }
    int getEndBalance(){
        return (int)endBalance;
    }

private:
    void setBeginBalance(){
        double temp;
        cout << "Enter begin balance: "; cin >> temp;
        beginBalance = temp;
    }
};