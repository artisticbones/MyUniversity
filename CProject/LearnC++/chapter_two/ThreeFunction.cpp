/**
 * Author@ Cheng Feitian
 * Date: 2020-4-10
 * Function: display functions' output
 */
#include <iostream>
using namespace std;
void firstFunction();
void secondFunction();
void firstFunction(){
    cout << "Three blind mice" << endl;
}
void secondFunction(){
    cout << "See how they run" << endl;
}
int main(){
    firstFunction();
    firstFunction();
    secondFunction();
    secondFunction();
    return 0;
}