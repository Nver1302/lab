#pragma once
#include "Crypto.h"

class Shablon : public Crypto {
	string s;
	string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  string b = "ZABCDEFGHIGKLMNOPQRSTUVWXYzabcdefghijklmnopqrstuvwxy9876543210";

public:
	Shablon(string txt) : Crypto(txt) {
		s = txt;
	}
	string deCoder();
	string nCoder();
};
