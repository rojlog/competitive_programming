#include <iostream> 
#include <stack> 

using namespace std;

int main() {
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
      
    //Imprime los elementos ultimos agregados
    //LIFO(Last In First Out) 
    //Ultimo en entrar primero en salir
    //Imprime 25 24 22 21 
    while (!stack.empty()) {
        cout << ' ' << stack.top();
        stack.pop();
    }
    cout << endl;
}