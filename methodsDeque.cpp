#include <iostream>
#include <deque>

using namespace std;

deque<int> first;
deque<int> second (4, 100);
deque<int> third (second.begin(), second.end());
deque<int> fourth(third);


int main() {

    //push_back adds a new element at the end of the deque  
    //dq.push_back(someInt);

    //erase the last element to the deque
    //dq.pop_back();

    //push an element to the front
    //dq.push_front(someInt);

    //pop an element from front
    //dq.pop_front();

    // get reference to front or back elements
    //dq.front();
    //dq.back();

    //cada vez que asigno el dq.size va creciendo pues se le agrega
    //un nuevo elemento
    // for(size_t k = 0; k < dq.size(); ++k){
    //     dq.push_back(k*k);
    // }

    deque<int> dq;
    
    for(int i=0; i<10; ++i) {
        dq.push_back(i*i);
    }
    cout << "deque \n";
    for(auto j : dq)
        cout << j << " ";
    cout << endl;

    cout << "\nerase the last element to the deque\n";
    dq.pop_back();
    for(auto j : dq)
        cout << j << " ";
    cout << endl;
    
    int someInt = 1000;

    cout << "\npush an element to the front\n";
    dq.push_front(someInt);
    for(auto j : dq)
        cout << j << " ";
    cout << endl;

    cout << "\npop an element from front\n";
    dq.pop_front();
    for(auto j : dq)
        cout << j << " ";
    cout << endl;

    // get reference to front or back elements
    cout << "\nFront element " <<dq.front() << endl;
    cout << "End element " <<dq.back() << endl;



    return 0;
}