Գաղտնագրում տողեր/սյուներ մեթոդով։

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string dCoder(string str, int n) {
    int i, j, x = 0;
    char arr[n + 1][n + 1];
    string result;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            arr[i][j] = str[x];
            x++;
        }
    }
    x = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            result[x] = arr[i][j];
            x++;
        }
    }
    return result;
}

int main()
{
    string s = "12345678 91234";
    int n = 4;
    string result = dCoder(s, n);
    cout << "Encrypt this text: ";
    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
    }
    cout << endl;
    cout << "Encrypted text is: ";
    for (int i = 0; i < s.length(); i++) {
        cout << result[i];
    }
}


