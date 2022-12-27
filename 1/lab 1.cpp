1․Ամենամեծ ընդհանուր բաժանարար և ամենափոքր ընդհանոջր բազմապատիկ

#include<iostream>
using namespace std;

int gcd(int x, int y){
    int i = 1, a;
    if(x < 0)
        x = -;
    if(y < 0)
        y = -y;
    if(x < y) {
        while(i <= x) {
            if(x % i == 0 && y % i == 0)
                a = i;
            i++;
        }
    }
    else {
        while(i <= y) {
            if(x % i == 0 && y % i == 0)
                a = i;
            i++;
        }
    }
    return a;
}

int lcm(int x, int y){
    int a = gcd(x, y);
    int p = x * y / a;
    return p;
}

int main() {
    int x, y;
    cin >> x;
    cin >> y;
    // int a = gcd(x, y);
    // cout << a;
    cout << "GCD = " << gcd(x, y) << endl;
    cout << "LMC = " << lcm(x, y);
}
