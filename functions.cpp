#include <iostream>
#include <string>
using namespace std;
int myFunction(int x) {
    return x*x*x;
    
}
int main() {
    // Write C++ code here
    string choice;
    while (choice != "N" && choice !="n") {
        cout << "Put in an integer:";
        int x;
        cin >> x;
        x = myFunction(x);
        cout << "The cube of your function is: " << x << endl;
        cout << "would you like to find the cube of another number? (Y/N)";
        cin >> choice;
        while (choice != "Y" && choice != "N" && choice != "y" && choice != "n") {
            cout << "that is not an option try again (Y/N) ";
            cin >> choice;
        }
    }
    
    return 0;
}