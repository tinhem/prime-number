#include <bits/stdc++.h>

using namespace std;

int money(int a) {
    int tien = 0;

    if (n <= 50) {
        money = a * 1000;
    } else if (a <= 100) {
        money = 50 * 1000 + (a - 50) * 2000;
    } else {
        money = 50 * 1000 + 50 * 2000 + (a - 100) * 3000;
    }

    return money;
}

int main() {
    cout << "Enter a=";
    int a;
    cin >> a;

    cout << money(a);
}