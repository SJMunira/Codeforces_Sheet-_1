#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double pie = 3.141592653;
    double R, Area;
    cin >> R;
    Area = pie*R*R;
    cout << fixed <<setprecision(9)<< Area << endl;

    return 0;
}
