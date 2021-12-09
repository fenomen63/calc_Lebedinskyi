#include <iostream>
using namespace std;
int Plus(int a, int b) {
    return a + b;
}
int Minus (int a, int b) {
    return a - b;
}
int Umnoj (int a, int b) {
    return a * b;
}
int Delenie (int a, int b) {
    return a / b;
}
bool Menshe(int a, int b) {
    if (a < b) {
        return a;
    }
    else if (b < a) {
        return b;
    }
    else {
        return a = b;
    }
}
bool Bolshe(int a, int b) {
    if (a < b) {
        return b;
    }
    else if (b < a) {
        return a;
    }
    else {
        return a = b;
    }
}
int main()
{
    int a, b, zn;
    cin >> a;
    cin >> b;
    cin >> zn;
    switch (zn)
        case 1:
            cout << Plus(a, b);
            break;
        case 2:
            cout << Minus(a, b);
            break;
        case 3:
            cout << Umnoj(a, b);
            break;
        case 4:
            cout << Delenie(a, b);
            break;

           

}

