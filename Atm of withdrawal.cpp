// Atm of withdrawal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){
    int pin, amount;
    int Operator;

    cout << "Enter your pin" << endl;
    cin >> pin;
    cout << "WELCOME TO PETRUS SHAI ATM" << endl;
    cout << "Please select the amount you want to withdraw" << endl;
    cout << "1: R100 " << endl;
    cout << "2: R200 " << endl;
    cout << "3: R300 " << endl;
    cout << "4: R400 " << endl;
    cout << "5: R500 " << endl;
    cout << "6: R600 " << endl;
    cout << "7: R700 " << endl;
    cout << "8: R800 " << endl;
    cout << "9: R900 " << endl;
    cout << "10: Own amount " << endl;
    cin >> Operator;

    switch (Operator) {

    case 1:
        cout << "R100 " << endl;
        break;

    case 2:
        cout << "R200 " << endl;
        break;
    case 3:
        cout << "R300 " << endl;
        break;
    case 4:
        cout << "R400 " << endl;
        break;
    case 5:
        cout << "R500 " << endl;
        break;
    case 6:
        cout << "R600 " << endl;
        break;
    case 7:
        cout << "R700 " << endl;
        break;
    case 8:
        cout << "R800 " << endl;
        break;
    case 9:
        cout << "R100 " << endl;
        break;
    case 10:
        cout << "Enter your own amount " << endl;
        cin >> amount;
        cout << "amount" << endl;
        break;
    default:
        cout << "Invalid operator selected, please enter the number operator shown above" << endl;


    }
    return 0;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
