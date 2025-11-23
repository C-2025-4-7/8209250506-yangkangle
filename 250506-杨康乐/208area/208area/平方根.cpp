#include <iostream>
#include <cmath>   
#include <iomanip>  

using namespace std;

double sqrt_positive(double a) 
{
    double x0 = a;
    double x1 = 0.5 * (x0 + a / x0);
    while (fabs(x1 - x0) >= 1e-5) 
    {
        x0 = x1;
        x1 = 0.5 * (x0 + a / x0);
    }
    return x1;
}

int main() {
    double a;
    cout << "输入 a：";
    cin >> a;

    if (a >= 0) {
        double result = sqrt_positive(a);
        cout << a << " 的平方根为：" << fixed << setprecision(6) << result << endl;
    }
    else {
        double abs_a = -a; 
        double real_part = sqrt_positive(abs_a); 
        cout << a << " 的平方根为：" << fixed << setprecision(6) << real_part << "i" << endl;
    }

    return 0;
}