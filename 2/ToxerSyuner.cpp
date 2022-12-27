#include "Crypto.h"
#include "ToxerSyuner.h"

string ToxerSyuner::dchange()
{
    int i, j, k = 0;
    char a[3][3] = { {'0','0','0'}, {'0','0','0'},};
    string result = "";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = s[k];
            k++;
        }
    }
    
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            result = result + a[i][j];
        }
    }
    return result;
}

string ToxerSyuner::nchange()
{
    int i, j, k = 0;
    char a[3][3] = { {'0','0','0'}, {'0','0','0'},};
    string result = "", s = dchange();
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = s[k];
            k++;
        }
    }
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            result = result + a[i][j];
        }
    }
    return result;
}
