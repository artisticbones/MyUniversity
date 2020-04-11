/** 
 * Author@ Cheng Feitian
 * Date: 2020-4-6
 * Function: input and output
 */

#include <iostream>
using namespace std;

int main(){
    int carrots = 0;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more.";
    carrots += 2;
    cout << "Now you have " << carrots << " carrots." << endl;

    return 0;
}