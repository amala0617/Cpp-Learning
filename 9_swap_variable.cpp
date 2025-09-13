#include <iostream>
using namespace std;
int main() {
    string var1, var2, temp;

    cout << "Enter first variable: ";
    cin >> var1;
    cout << "Enter second variable: ";
    cin >> var2;
    temp = var1;
    var1 = var2;
    var2 = temp;
    cout << "After swapping:" << endl;
    cout << "First variable = " << var1 << endl;
    cout << "Second variable = " << var2 << endl;
    return 0;
}
