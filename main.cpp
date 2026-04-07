#include <iostream>
using namespace std;

int main() {

    int arrInt[10] = {1, 20, 32, 4, 1, 2, 2, 54, 23, 0};
    cout << "[ + ] Массив INT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrInt [ " << i << " ]\t| значение: " << arrInt[i] << endl;
    }
    cout << endl;

   
    short arrShort[10] = {5, 12, 7, 9, 0, 15, 6, 3, 2, 1};
    cout << "[ + ] Массив SHORT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrShort [ " << i << " ]\t| значение: " << arrShort[i] << endl;
    }
    cout << endl;

    long arrLong[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    cout << "[ + ] Массив LONG:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrLong [ " << i << " ]\t| значение: " << arrLong[i] << endl;
    }
    cout << endl;

    float arrFloat[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
    cout << "[ + ] Массив FLOAT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrFloat [ " << i << " ]\t| значение: " << arrFloat[i] << endl;
    }
    cout << endl;


    double arrDouble[10] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    cout << "[ + ] Массив DOUBLE:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrDouble [ " << i << " ]\t| значение: " << arrDouble[i] << endl;
    }
    cout << endl;

    char arrChar[10] = {'a','b','c','d','e','f','g','h','i','j'};
    cout << "[ + ] Массив CHAR:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrChar [ " << i << " ]\t| значение: " << arrChar[i] << endl;
    }
    cout << endl;

    bool arrBool[10] = {true, false, true, true, false, false, true, false, true, false};
    cout << "[ + ] Массив BOOL:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrBool [ " << i << " ]\t| значение: " << arrBool[i] << endl;
    }
    cout << endl;


    string arrString[10] = {"one","two","three","four","five","six","seven","eight","nine","ten"};
    cout << "[ + ] Массив STRING:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrString [ " << i << " ]\t| значение: " << arrString[i] << endl;
    }
    cout << endl;

}