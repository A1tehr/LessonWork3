//
// Created by NiceCODE on 04.04.2020.
//
#pragma once
#include <string>
using namespace std;

class Contribution {
private:
    static double percent;
public:
    static void setPercent(double percents) {
        percent = percents;
    }
    static double getPercent(){
        return percent / 100;
    }
};
double Contribution::percent = 2;



