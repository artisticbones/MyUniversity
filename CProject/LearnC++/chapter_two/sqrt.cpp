/**
 * Author@ Cheng Feitian
 * Date: 2020-4-7
 * Function: 使用sqrt() 函数
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double area = 0;
    cout << "Enter the floor area,in square feet,of your home:";
    cin >> area;
    double side = 0;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}