#include "GCD.h"
#include "ASCIIEncoder.h"
#include "Shablon.h"
#include "ToxerSyuner.h"
#include "RLE.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    //gcd check
    /*int a = 21, b = 67;
    GCDCalculator calc(a, b);
    cout << calc.calculate() << endl;*/

    // ascii check
    string line;
    cout << "Input text: "; getline(cin, line);
    int x = 3;

    ASCIIEncoder encoder;
    string encoded = encoder.encode(line, x);
    cout << "Encoded: " << encoded << endl;

    string decoded = encoder.decode(encoded, x);
    cout << "Decoded: " << decoded << endl;

    string s3 = "hello world";
    Shablon obj3(s3);
    cout << "Shablon" << endl;
    cout << "String is: " << s3 << endl;
    cout << "Encrypted string is: " << obj3.deCoder() << endl;
    cout << "Decrypted string is: " << obj3.nCoder() << endl << endl;

    string s2 = "karg jeep";
    ToxerSyuner obj2(s2, 3);
    cout << "Toxer/Syuner" << endl;
    cout << "String is: " << s2 << endl;
    cout << "Encrypted string is: " << obj2.deCoder() << endl;
    cout << "Decrypted string is: " << obj2.nCoder() << endl << endl;

    string s1 = "XXXvvvvvoo";
    RLE obj1(s1);
    cout << "RLE" << endl;
    cout << "String is: " << s1 << endl;
    cout << "Encrypted string is: " << obj1.deCoder() << endl;
    cout << "Decrypted string is: " << obj1.nCoder() << endl << endl;

    return 0;
}
