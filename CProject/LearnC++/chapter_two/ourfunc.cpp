/**
 * Author@ Cheng Feitian
 * Date: 2020-4-8
 * function: defining function
 */
#include <iostream>
using namespace std;
void simon(int);

int main(){
    simon(3);

    cout << "Pick an integer: ";
    int count = 0;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int number){
    cout << "Simon says touch your toes " << number << " times." << endl;
}