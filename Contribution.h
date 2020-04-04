//
// Created by villi on 04.04.2020.
//
#pragma once
#include <string>
#include "Contributor.h"
using namespace std;

class Contribution {
private:
    static double percent;
public:
    static void setPercent(double percents) {
        percent = percents;
    }
    static double getPercent(){
        if(Contributor::getEndBalance() > 10000)
        {
            return (percent / 100) * 0.9;
        } else if (Contributor::getEndBalance() > 50000)
        {
            return (percent / 100) * 0.8;
        } else if (Contributor::getEndBalance() > 100000)
        {
            return (percent / 100) * 0.7;
        } else if (Contributor::getEndBalance() > 500000)
        {
            return (percent / 100) * 0.5;
        } else {
            return percent / 100;
        }

    }
};
double Contribution::percent = 1;



