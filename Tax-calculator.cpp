#include <iostream>

using namespace std;

int main()
{
    cout << "Tax calculator" << endl;
    cout << "--------------" << endl;
calculator:
    cout << "" << endl;
    float price;
    float percent;
    float tax;
    cout << "Price: ";
    cin >> price;
    cout << "Tax percent: ";
    cin >> percent;
    tax = price * percent / 100;
    cout << "Tax: " << tax << " e" << endl;
    cout << "Price without tax: " << price - tax << " e" << endl;
    cout << "" << endl;
    cout << "New calculation ? (y/n) ";
    char a;
    cin >> a;
    switch (a) {
    case 'y':goto calculator;
        break;
    case 'n':goto exit;
        break;
    default: cout << "Error." << endl;
    }
exit:
    return 0;
}
