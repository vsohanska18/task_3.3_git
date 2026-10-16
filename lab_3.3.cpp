#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, R1, R2, y;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << "x = "; cin >> x;

    if (x <= -6)
        y = R2 / 2.0;
    else if (x <= -2 * R2)
        y = -R2 * (x + 2 * R2) / (12.0 - 4 * R2);
    else if (x <= 0)
        y = sqrt(R2 * R2 - (x + R2) * (x + R2));
    else if (x <= 2 * R1)
        y = -sqrt(R1 * R1 - (x - R1) * (x - R1));
    else 
        y = -R1 * (x - 2 * R1);

    cout << endl;
    cout << fixed << setprecision(3);
    cout << "y = " << y << endl;

    return 0;

}