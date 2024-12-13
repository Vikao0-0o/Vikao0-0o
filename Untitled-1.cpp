#include <iostream>
#include <string>
#include <vector>
3

using namespace std;

struct Product {
    string name;
    double kcal;
    double protein;
    double fat;
    double carbs;
};

int main() {
    vector<Product> products;
    string productName;
    double kcal, protein, fat, carbs;
    char addMore;

    do {
        cout << "Введите название продукта: ";
        getline(cin >> ws, productName); 
        cout << "Введите Ккал: ";
        cin >> kcal;

        cout << "Введите белки (г): ";
        cin >> protein;

        cout << "Введите жиры (г): ";
        cin >> fat;

        cout << "Введите углеводы (г): ";
        cin >> carbs;

        products.push_back({productName, kcal, protein, fat, carbs});

        cout << "Добавить еще продукт? (y/n): ";
        cin >> addMore;
        cin.ignore(); 

    } while (addMore == 'y' || addMore == 'Y');

    double totalKcal = 0;
    double totalProtein = 0;
    double totalFat = 0;
    double totalCarbs = 0;

    cout << "\n--- Итоги ---\n";
    for (const auto& product : products) {
        cout << product.name << ":" << endl;
        cout << " Ккал: " << product.kcal << endl;
        cout << " Белки: " << product.protein << " г" << endl;
        cout << " Жиры: " << product.fat << " г" << endl;
        cout << " Углеводы: " << product.carbs << " г" << endl;
        totalKcal += product.kcal;
        totalProtein += product.protein;
        totalFat += product.fat;
        totalCarbs += product.carbs;
    }

    cout << "\nИтого:\n";
    cout << " Ккал: " << totalKcal << endl;
    cout << " Белки: " << totalProtein << " г" << endl;
    cout << " Жиры: " << totalFat << " г" << endl;
    cout << " Углеводы: " << totalCarbs << " г" << endl;

    return 0;
}
