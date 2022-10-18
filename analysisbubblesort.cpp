#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

void bubblesort(vector<int> &arr, int n) {
    int i, j;
    bool swapped;

    auto time_init = clock();
    for(i = 0; i < n-1; ++i) {
        swapped = false;
        for(j = 0; j < n -i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
        }}

        if (swapped = false) { break; }
    }
    auto time_end = clock();

    cout << "Time bubble sort 1 = " << time_end - time_init << endl;

    /*for(int k: arr)
        cout << k << " ";
    cout << "\n";*/
}

void bubblesort2(vector<int> &arr, int n) {
    int i, j;

    auto time_init = clock();
    for(i = 0; i < n-1; ++i) {
        for(j = 0; j < n -i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
        }}}
    auto time_end = clock();

    cout << "Time bubble sort 2 = " << time_end - time_init << endl;

    // for(int k: arr)
    //     cout << k << " ";
    // cout << "\n";
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n,0);

    for(int i=0; i<n; ++i)
        arr[i] = n-i;


    bubblesort(arr, n);
    //cout << endl;
    //bubblesort2(arr, n);

    return 0;
}