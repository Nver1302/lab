#include "Crypto.h"
#include "Shablon.h"

string Shablon::deCoder()
{
    string txt = s;
     int k, i = 0;
    while(txt[i]){
        k = 0;
        while(a[j]){
            if(txt[i] == a[k]){
                txt[i] = b[k];
                break;
            }
            k++;
        }
        i++;
    }
    return txt;
}

string Shablon::nCoder()
{
   string txt = deCoder();
   int k, i = 0;
    while(txt[i]){
        k = 0;
        while(b[j]){
            if(txt[i] == b[k]){
                txt[i] = a[k];
                break;
            }
            k++;
        }
        i++;
    }
    return txt;
}
