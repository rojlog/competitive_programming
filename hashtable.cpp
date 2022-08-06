#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

        unordered_map<string, int> menu;

        //Insert key Value pairs inside the hashtable  O(1) operation
        menu["maggi"] = 15;
        menu["colddrink"] = 20;
        menu["dossa"] = 99;

        //Searching inside a collection of key value pairs (stord inside a hashtable)
        string item;
        cin >> item;

        if( menu.count(item) == 0 ) {
                cout << item << " its not available " << endl;
        } else {
                cout << item << " is available and its cost is --> " << menu[item]  << endl;
        }




        return 0;
}
