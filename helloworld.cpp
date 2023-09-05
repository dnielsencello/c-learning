#include <iostream>
using namespace std;

int main(){
    int n;
    n = 50;
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }
    int i = 0;
    int sum = 0;
    while (i < 10){
        sum += i;
        i++;
        cout << sum << endl;
    }
  return 0;
}
