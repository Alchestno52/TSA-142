#include <iostream>
#include <limits> // для numeric_limits
#include <cmath>  // для pow()
#include <cmath>

using namespace std;

// Функция для безопасного ввода положительного числа
double get_positive_number(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.fail() || value <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка! Введите положительное число.\n";
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
double calculate_face_area(double edge_length) {
    return pow(edge_length, 2);
}

double calculate_total_surface_area(double edge_length) {
    return 6 * calculate_face_area(edge_length);
}

double calculate_volume(double edge_length) {
    return pow(edge_length, 3);
}

int main() {
 // Ввод длины ребра с проверкой
    double edge_length = get_positive_number("Введите длину ребра куба: ");
    double edge_length;

    cout << "Введите длину ребра куба: ";
    cin >> edge_length;

    // Вычисление параметров
    double face_area = pow(edge_length, 2);          // Площадь одной грани
    double total_surface_area = 6 * face_area;       // Полная площадь поверхности
    double volume = pow(edge_length, 3);             // Объем куба
    // Вычисление параметров (без проверок)
    double face_area = calculate_face_area(edge_length);
    double total_surface_area = calculate_total_surface_area(edge_length);
    double volume = calculate_volume(edge_length);

    // Вывод результатов
    cout << "\nРезультаты вычислений:\n";
    cout << "1. Площадь одной грани: " << face_area << endl;
    cout << "2. Площадь полной поверхности: " << total_surface_area << endl;
    cout << "3. Объем куба: " << volume << endl;
    
    return 0;
}
