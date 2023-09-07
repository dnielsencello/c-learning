#include <iostream>
using namespace std;

int main(){
    int totalPushUps = 0;
    int pushUps;
    do {
        int setPushUps;
        cout << "How many pushups can you do in one set?" << endl;
        cin >> setPushUps;
        totalPushUps += setPushUps;
        cout << "Do you want to do more push-ups? (1 for Y, 0 for Y)" << endl;
        cin >> pushUps;
    
    } while (pushUps != 0);
    cout << "Your total push-ups:" << totalPushUps << endl;
}
