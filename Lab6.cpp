#include <iostream>
#include <Windows.h>
#include <random>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    random_device rd;
    mt19937_64 rng(rd());
    uniform_int_distribution<int> distrib(-50, 100);
    int arr[5];
    cout << "Значення масиву: ";
    for (int i = 0; i < 5; i++) {
        arr[i] = distrib(rng);
        cout <<arr[i] << " ";
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int* ptr = &arr[i];
        sum += *ptr;
    }
    cout << endl <<"Сума масиву: " <<sum << endl;

    return 0;
}
