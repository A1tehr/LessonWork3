//
// Created by villi on 04.04.2020.
//
#pragma once
#include <string>
using namespace std;

class Contribution {
private:
    static double firstPercent;
    static double secondPercent;
    static double thirdPercent;
    static double fourthPercent;

public:
    static void setFirstPercent(double percents) {
        firstPercent = percents;
    }
    static double getFirstPercent(){
        return firstPercent / 100;
    }
    static void setSecondPercent(double percents) {
        secondPercent = percents;
    }
    static double getSecondPercent(){
        return secondPercent / 100;
    }
    static void setThirdPercent(double percents) {
        thirdPercent = percents;
    }
    static double getThirdPercent(){
        return thirdPercent / 100;
    }
    static void setFourthPercent(double percents) {
        fourthPercent = percents;
    }
    static double getFourthPercent(){
        return fourthPercent / 100;
    }

};
double Contribution::firstPercent = 1;
double Contribution::secondPercent = 1;
double Contribution::thirdPercent = 1;
double Contribution::fourthPercent = 1;



