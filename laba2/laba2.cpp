#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");


    double x, y, result, fxn;
    int func;

    cout << "Vvedite x: ";
    cin >> x;
    cout << endl;

    cout << "Vvedite y: ";

    cin >> y;

    {
        cout << "Viberite funkziu: "
            << endl << "1. sh(x)"
            << endl << "2. x^2"
            << endl << "3. e^x"
            << endl;

        cin >> func;
        //выбор ветки программы (свич)
        switch (func)
        {
            //case = в случае
            case 1:
                fxn = sinh(x);
                break;
            case 2:
                fxn = pow(x, 2);
                break;
            case 3:
                fxn = exp(x);
                break;
            // если ни одного кейса не сработала то дефолт
            default:
                cout << "Vvedeno nevernoe chiclo! Povtorite popitku ";

        }
        /*if (func == 1) {
            fxn = sinh(x);
        }
        else if (func == 2) {
            fxn = pow(x, 2);

        }
        else if (func == 3) {
            fxn = exp(x);
        }
        else cout << "Vvedeno nevernoe chiclo!Povtorite popitku ";*/



        if (x / y == 0) {
            result = exp(fxn - y) + pow(x, -3);

        }
        else if (x > -5 && y < 0) {
            result = pow(x, 2) + log(pow(y, 2) + x);
        }
        else {
            result = 3 * pow(fxn, 2);
        }

        cout << "Variant 6, laba 2~~ RESULT ->  " << result;


        return 0;
    }
}