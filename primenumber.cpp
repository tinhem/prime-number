#include <cmath>
#include <iostream>
using namespace std;
 
int main() {
    int i = 2, a, kt = 1;
 
    cout << "Nhap so a: ";
    cin >> a;
    if (a < 0 || a > 1000) {
        cout<<"Không hợp lệ" << endl;
    }
    else {
    if (a != 0 && a != 1) {
        while(i <= a/2) {
            if(a%i == 0) {
                kt = 0;
                break;
            }
            i++;
        }
    } else {
       kt = 0;
    }
    if(kt == 1) {
        cout <<"A là số nguyên tố" << endl;
    } else {
        cout <<"A không là số nguyên tố" << endl;
    }
    }
 
    return 0;
}