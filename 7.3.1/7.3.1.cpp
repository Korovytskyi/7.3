#include<iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    int* Mas = new int[N];
    cout << "Enter elements: " << endl;
    for (int i = 0; i < N; ++i)
        cin >> Mas[i];
    cout << "Array: ";
    for (int i = 0; i < N; ++i)
        cout << Mas[i] << " ";
    cout << endl;
    int k = 0;
    for (int i = 0; i < N; ++i)
        if (Mas[i] > Mas[k]) k = i;

    k = N - k;
    int first = 0;
    int last = N;
    int next = k;
    while (first != next) {
        swap(Mas[first++], Mas[next++]);
        if (next == last)
            next = k;
        else if (first == k)
            k = next;
    }

    cout << "New array: ";
    for (int i = 0; i < N; ++i) {
        cout << Mas[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}