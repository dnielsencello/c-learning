#include <iostream>
using namespace std;
void serveFood(int &slices);

int main(){
    int peicesOfcake;
    peicesOfcake = 10;
    int slices;
    slices = peicesOfcake;
    for (int i = 0; i < peicesOfcake; i++) {
        serveFood(slices);
        cout << slices << endl;
    }
    
}

void serveFood(int &slices) {
    // code to serve food to guests
    slices = slices -1;
}

