2․ n տարր պարունակող զանգվածի տարրերը 1, n+1 չկրկնվող թվերն են։ Գտնել պակասող թիվը։

#include<iostream>
using namespace std;

int main() {
    int n, x = 1, y = 1, i, result;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    i = 0;
    while (i < n) {
        x *= arr[i];
        i++;
    }
    i = 1;
    while (i <= n + 1) {
        y *= i;
        i++;
    }
    result = y / x;
    cout << "Pakasox tarry: " << result;
}
