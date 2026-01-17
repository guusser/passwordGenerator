#include <iostream>

using namespace std;

int main(){

    double x;
    cout << "Type numbers/doubles: ";
    cin >> x;

    int* xx;

    cout << "Password: " << &xx << endl;

    string zero;
    cout << "Type EXIT to exit." << endl;
    cin >> zero;

    return 0;
}