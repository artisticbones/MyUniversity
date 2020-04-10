/**
 * Author@ Cheng Feitian
 * Date: 2020-4-8
 * Function:converts stone to pounds
 */
#include <iostream>
using namespace std;
int stonetolb(int);

int main(){

    int stone = 0;
    cout << "请输入石头的重量：";
    cin >> stone;
    int pounds = stonetolb(stone);

    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;

    return 0;
}
int stonetolb(int stones){
    return 14 * stones;
}