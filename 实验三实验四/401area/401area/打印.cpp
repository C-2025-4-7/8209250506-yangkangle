#include<iostream>
#include<vector>
#include<cmath> 
using namespace std;
bool isEqual(double a, double b, double eps = 1e-9) {
    return fabs(a - b) < eps; 
}
int main() {
    vector<double> arr; 
    double num;
    cout << "输入：";
    for (int i = 0; i < 10; i++) {
        cin >> num;
        bool isDuplicate = false;
        for (int j = 0; j < arr.size(); j++) {
            if (isEqual(arr[j], num)) { 
                isDuplicate = true;
                break; 
            }
        }
        if (!isDuplicate) {
            arr.push_back(num);
        }
    }
    cout << "去重后的数：";
    for (double n : arr) { 
        cout << n << " ";
    }
    cout << endl;
    return 0;
}