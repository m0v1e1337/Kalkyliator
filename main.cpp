#include <iostream>
#include <cmath>

using namespace std;

double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Ошибка: Деление на ноль!" << endl;
        return 0;
    }
}
double power(double a, double b) {
    return pow(a, b);
}
double squareRoot(double a) {
    if (a > 0){
        return sqrt(a);
    } else{
        cout << "Нельзя взять корень из отрицательного числа" << endl;
        return 0;
    }
}
double onePercent(double a) {
    return a / 100;
}
double factorial(double a) {
    double result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int choice;
    double num1, num2;

    do {
        cout << "Калькулятор" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Квадратный корень" << endl;
        cout << "7. 1 процент от числа" << endl;
        cout << "8. Факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cout << "Выберите операцию: ";
        cin >> choice;

        if (choice == 9) {
            break;
        }

        cout << "Введите первое число: ";
        cin >> num1;

        if (choice != 6 && choice != 7 && choice != 8) {
            cout << "Введите второе число: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Результат: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Результат: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Результат: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Результат: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Результат: " << power(num1, num2) << endl;
                break;
            case 6:
                cout << "Результат: " << squareRoot(num1) << endl;
                break;
            case 7:
                cout << "1 процент от числа: " << onePercent(num1) << endl;
                break;
            case 8:
                cout << "Факториал числа: " << factorial(num1) << endl;
                break;
            default:
                cout << "Неправильный выбор!" << endl;
                break;
        }
    } while (true);

    return 0;
}
