#include <iostream>
#include <vector>

using namespace std;

//Empty Container Constructor
vector<int> first;

//Fill Constructor (4, integers with value 20)
vector<int> second(4, 20);

//Range Constructor
int numbers[] = { 10, 20, 30, 40 };
vector<int> third(numbers, numbers+4);

// Copy Constructor
vector<int> fourth(third);


int main() {
    
    vector<int> arr = { 1, 2, 3, 4, 5 };

    //push_back method O(1), linear if re-allocation happens
    //arr.push_back(20);

    //pop_back method O(1), erase the last element
    //arr.pop_back();

    //clear all elements in the current vector, reduces size to 0
    //arr.clear();

    //erase the 4th element
    //arr.erase(arr.begin()+4);

    // erase the range - first 3 elements
    //arr.erase(arr.begin(), arr.begin()+3);

    //size of the vector
    //arr.size();

    int myint;
    cout << "Please enter some integers (enter 0 to end):\n";
    do {
        cin >> myint;
        arr.push_back(myint);
    } while (myint);

    cout << "Print the vector\n";
    for(int i : arr)
        cout << i << " ";
    cout << endl;

    cout << "Erase the last element pop_back()\n";
    arr.pop_back();
    for(int i : arr)
        cout << i << " ";
    cout << endl;

    cout << "erase the 4th element \n";
    arr.erase(arr.begin()+4);
    for(int i : arr)
        cout << i << " ";
    cout << endl;

    cout << "erase the range - first 3 elements \n";
    arr.erase(arr.begin(), arr.begin()+3);
    for(int i : arr)
        cout << i << " ";
    cout << endl;

    cout << "clear all elements in the current vector, reduces size to 0 \n";
    arr.clear();
    for(int i : arr)
        cout << i << " ";
    cout << endl;

    cout << "print the size of the vector\n";
    cout << arr.size() << endl;



    return 0;
}