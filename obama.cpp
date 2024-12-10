    #include <iostream>
    #include <Windows.h>
    using namespace std;

    int main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        int n;
        cout << "Введіть розмір масиву: ";
        cin >> n;

        int* arr = new int[n]; 
        cout << "Введіть елементи масиву: ";
        for (int i = 0; i < n; i++) cin >> arr[i];

        int min = arr[0], max = arr[0], minIndex = 0, maxIndex = 0;

        for (int i = 1; i < n; i++) {
            if (arr[i] < min) { min = arr[i]; minIndex = i; }
            if (arr[i] > max) { max = arr[i]; maxIndex = i; }
        }

        cout << "Мінімум: " << min << ", індекс: " << minIndex << endl;
        cout << "Максимум: " << max << ", індекс: " << maxIndex << endl;

        delete[] arr; 
        return 0;
    }
