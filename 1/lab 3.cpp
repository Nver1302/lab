Գաղտնագրում շաբլոնի մեթոդով։

#include <iostream>
using namespace std;
string arr1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
string arr2 = "ZABCDEFGHIGKLMNOPQRSTUVWXYzabcdefghijklmnopqrstuvwxy1234567890";

string ncoder(string str) {
	int x;
	int i = 0;
	while (str[i]) {
		x = 0;
		while (arr2[x]) {
			if (str[i] == arr2[x]) {
				str[i] = arr1[x];
				break;
			}
			x++;
		}
		i++;
	}
	return str;
}

string dcoder(string str) {
	int x;
	int i = 0;
	while (str[i]) {
		x = 0;
		while (arr1[x]) {
			if (str[i] == arr1[x]) {
				str[i] = arr2[x];
				break;
			}
			x++;
		}
		i++;
	}
	return str;
}

int main() {
	string str = "A big cat - 12";
	string decodedStr = dcoder(str);
	string old = ncoder(decodedStr);
	cout << decodedStr << endl << old;

}
