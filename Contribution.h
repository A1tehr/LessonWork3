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

double Contribution::percent = 1;