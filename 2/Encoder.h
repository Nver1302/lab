#include <iostream>
#include "Encoder.h"
using namespace std;

class ASCIIEncoder : public Encoder
{
public:
    string encode(string& line, int& x);
    string decode(string& line, int& x);
};
