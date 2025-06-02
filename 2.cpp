#include <iostream>
#include <cmath>

using namespace std;


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
    double edge_length;
    
    cout << "Введите длину ребра куба: ";
    cin >> edge_length;
    
    // Вычисление параметров 
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
