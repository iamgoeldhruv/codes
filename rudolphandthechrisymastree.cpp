#include <iostream>
#include <iomanip> // Include this for setprecision
#include <bitset>

using namespace std;
int main() {
    long long int t;
    cin >> t;
   
    while (t--) {
        long long int n;
        long double d, h;
        cin >> n >> d >> h;
        long double a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long double area = (d * h) / 2;
        long double tarea = 0;
        for (int i = 1; i < n; i++) {
            long double diff = a[i] - a[i - 1];
            if (diff >= h) {
                tarea += area;
            } else {
                long double x = ((h - diff) * d / (2 * h));
                tarea += ((2 * x + d) * diff) / 2;
            }
        }
        tarea += area;

        // Use setprecision to control the number of decimal places
        cout << fixed << setprecision(32) << tarea << endl;
    }
}
