// lab3_gr6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //zadanie 1
    /*
    int a;
    int b;
	cin >> a >> b;
    if (a == b) {
		cout << "Liczby sa rowne" << endl;
        }
	else if (a > b) {
		cout << "Liczba a jest wieksza od liczby b" << endl;
    }
    else {
        cout << "Liczba b jest wieksza od liczby a" << endl;
    }
    cout << endl << endl;


    //zadanie 3
   
    double r;
    cin >> r;
    if (r < 0 || r> 1) {
        cout << "Niepoprawna wartosc" << endl;
        return 0;
    }
    else if (r >= 0.7) {
        cout << "bardzo silna" << endl;
    }
    else if (r >= 0.5) {
        cout << "silna" << endl;
    }
    else if (r >= 0.3) {
        cout << "umiarkowana" << endl;
    }
    else if (r >= 0.2) {
        cout << "slaba" << endl;
    }
    else {
        cout << "brak" << endl;
    }
    return 0;
    cout << endl << endl;
    

    //zadanie 4

    double x;
    double y;
	char znak;
	cin >> x >> znak >> y;
    if (znak == '+') {
        cout << x + y << endl;
    }
    else if (znak == '-') {
        cout << x - y << endl;
    }
    else if (znak == '*') {
        cout << x * y << endl;
    }
    else if (znak == '/') {
        if (y == 0) {
            cout << "Nie mozna dzielic przez 0" << endl;
        }
        else {
            cout << x / y << endl;
        }
    }
    else {
        cout << "Niepoprawny znak" << endl;
	}
   
//zadanie 5
    double x;
    double y;
    char znak;
    while (true)
    {
        cin >> x >> znak >> y;
        switch (znak) {
        case '+':
            cout << x + y << endl;
            break;
        case '-':
            cout << x - y << endl;
            break;
        case '*':
            cout << x * y << endl;
            break;
        case '/':
            if (y == 0) {
                cout << "Nie mozna dzielic przez 0" << endl;
            }
            else {
                cout << x / y << endl;
            }
            break;
        default:
            cout << "Niepoprawny znak" << endl;
        }
		cout << "jesli przerwac wcisnij q, jesli kontynuowac wcisnij c" << endl;
		char choice;
        cin >> choice;
        if (choice == 'q') {
            break;
        }
        else {
			cin.ignore();
		}
         
//zadanie 7
    int x = 0;
    while (x != 200) {
        if (x % 2 != 0) {
            cout << x << endl;
        }
        x++;
    }
    cout << endl << endl;
    */
//zadanie 8
    int n;
	cin >> n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "posiada dzielnik" << endl;
            break;
        }
        else if (i == n - 1) {
            cout << "nie posiada dzielnika" << endl;
		}
	}


    




}
