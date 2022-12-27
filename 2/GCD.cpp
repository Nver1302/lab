#include "GCD.h"
#include <iostream>
using namespace std;

GCDCalculator::GCDCalculator(int x, int y) {
    cout << "Initializing gcd calculator" << endl;
    this->x = x;
    this->y = y;
}

GCDCalculator::~GCDCalculator() {
    cout << "Deleting gcd calculator" << endl;
}

int GCDCalculator::calculate() {
    int result = min(this->x, this->y);
    while (result > 0) {
        if (this->x % result == 0 && this->y % result == 0) {
            break;
        }
        result--;
    }
    return result;
}
