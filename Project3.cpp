#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so: ";
    cin >> n;
    cout << "Tat ca cac so lon hon 100 va nho hon 200 la:";
    for (int i = 101; i <= n; i++) {
        cout << " " << i << endl;
    }
    cout << "Tat ca cac so chia het cho 7 la:";
    for (int i = 101; i <= n; i++) {
        if (i % 7 == 0) {
            cout << " " << i;
        }
    }
    return 0;

}