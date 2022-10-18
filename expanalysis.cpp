#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

/*
    Comparacion experimental en tiempo entre el algoritmo sort de la biblioteca C++  
    y el algoritmo buble_sort tardan en ordenar un arreglo.
*/

void sort_cpp(vector<int> &arr, int n) {
    auto start_time = clock(); //Inicio de tiempo
    sort(arr.begin(), arr.end());
    auto end_time = clock(); //Fin de tiempo

    //Imprimimos el vector
    for (int i: arr)
        cout << i << ' ';

    cout << "\nTime Sort C++" << endl;
    cout << end_time - start_time << endl; //Realizamos la direfencia y la imprimimos
    cout << endl;
}

void bubleSort_cpp(vector<int> &arr, int n) {
    auto start_time = clock();
    for(int i=1; i < n-1; ++i) {
        for(int j=0; j < n-i; ++j) {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }}
    auto end_time = clock();

    for (int i: arr)
        cout << i << ' ';

    cout << "\nTime buble sort C++" << endl;
    cout << end_time - start_time << endl;
    cout << endl;
}

int main() {

    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for(int i=0; i<n; ++i) { arr[i] = n - i; }

    sort_cpp(arr, n);
    bubleSort_cpp(arr,n);


    return 0;
}