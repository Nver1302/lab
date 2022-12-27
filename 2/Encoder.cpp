#include "Encoder.h"
#include "ASCIIEncoder.h"

string ASCIIEncoder::encode(string& line, int& x) {
    string encoded;
    for (int i = 0; i < line.length(); i++) {
        encoded += line[i] + x;
    }
    return encoded;
}

string ASCIIEncoder::decode(string& line, int& x) {
    string decoded;
    for (int i = 0; i < line.length(); i++) {
        decoded += line[i] - x;
    }
    return decoded;
}
