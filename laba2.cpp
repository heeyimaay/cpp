#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    double x, y, result, fxn;
    int func;

    cout << "Введите х: 333";
    cin >> x; 
    cout << endl;

    cout << "Введите y";
    cin >> y; 

    while (1) {
        cout << "Ввыберите функцию: "
        << endl << "1. sh(x)"
        << endl << "2. x^2"
        << endl << "3. e^x"
        << endl;

        cin >> func;
        switch (func)
        {
            case 1: fxn = sinh(x);
                break;
            case 2: fxn = pow(x, 2);
                break;
            case 3: fxn = exp(x);
                break;
            default: cout << "Введено неверное число! Повторите попытку ";
                break;
        }

    }




 return 0;
}