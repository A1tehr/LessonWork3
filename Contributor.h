//
// Created by villi on 04.04.2020.
//

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
    void openFirstContribution(int months){
        for (int i = 0; i < months; ++i) {
            beginBalance += beginBalance * Contribution::getFirstPercent();
        }
        endBalance = beginBalance;
    }
    void openSecondContribution(int months){
        for (int i = 0; i < months; ++i) {
            beginBalance += beginBalance * Contribution::getSecondPercent();
        }
        endBalance = beginBalance;
    }
    void openThirdContribution(int months){
        for (int i = 0; i < months; ++i) {
            beginBalance += beginBalance * Contribution::getThirdPercent();
        }
        endBalance = beginBalance;
    }
    void openFourthContribution(int months){
        for (int i = 0; i < months; ++i) {
            beginBalance += beginBalance * Contribution::getFourthPercent();
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


