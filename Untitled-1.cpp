#include <iostream>
#include <vector>
#include <algorithm> 
int main() {
    int n;
    std::cout <<"Введите количество элементов массива💗: ";
    std::cin >> n;
    std::vector<int> arr(n); 
    std::cout <<"Введите элементы массива🤍: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i]; 
    }
    std::sort(arr.begin(), arr.end());

    std::cout <<"Упорядоченный массив по возрастанию💮: ";
    for (const int& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
