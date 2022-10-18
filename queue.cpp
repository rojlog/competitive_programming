#include<iostream>
#include<queue>

using namespace std;

int main() {

    queue<int> q, foo;

    // FIFO queue -- colas
    // first-in first-out

    /*
        Elements are pushed into the "back" 
        of the specific container and popped 
        from its "front".
    */

/*  
                MEMBER FUNCTIONS
    (constructor) - Construct queue (public member function)
    empty - Test whether container is empty (public member function)
    size - Return size (public member function)
    front - Access next element (public member function)
    back - Access last element (public member function)
    push - Insert element (public member function)
    emplace - Construct and insert element (public member function)
    pop - Remove next element (public member function)
    swap - Swap contents (public member function)

*/
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.emplace(8);

    foo.push(100);

    q.swap(foo); //swap values from q to foo and foo to q

    while(!foo.empty()) {
        cout << foo.front() << endl;
        cout << "Size = " << foo.size() << endl;
        foo.pop();

    }


    return 0;
}