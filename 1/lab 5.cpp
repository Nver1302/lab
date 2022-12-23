Տվյալների սեղմման RLE մեթոդ։

#include <cstdlib>
#include<iostream>
#include <string.h>
using namespace std;

int main() {
    string text = "xxxxxyyyyyyZZZZ";
    cout << "RLE is: ";
    for (int i = 0; i < text.length(); i++) {
        int a = 1;
        while (text[i] == text[i + 1] && i < text.length() - 1) {
            a++;
            i++;
        }
        cout << text[i] << a;
    }
    return 0;
}
