#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Введите размер массива: ";
  cin >> n;

  int arr[n];
  cout << "Введите элементы массива:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int sum = 0;
  for (int i = 0; i < n; i++) { 
    sum += arr[i];
  }

  cout << "Сумма элементов с четными номерами: " << sum << endl;

  return 0;
}