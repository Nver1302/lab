#include "RLE.h"
#include "Crypto.h"

string RLE::deCoder()
{
char x[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    string res = "";
    for (int i = 0; i < txt.length(); i++) {
        int j = 1;
        while (txt[i] == txt[i + 1] && i < txt.length() - 1) {
            j++;
            i++;
        }
        char y = x[j];
        res = res + txt[i];
        res = res + y;
    }
    return res;
}

string RLE::nCoder()
{
    char x[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    string res = "";
    int a = 0;
    int b = 0;
    for (int i = 0; i < txt1.length(); i = i + 2) {
        a = 0;
        while (x) {
            if (txt1[i + 1] == x[a]) {
                b = a;
                break;
            }
            a++;
        }
        while (b) {
            res = res + txt1[i];
            b--;
        }
    }
    return res;
}
