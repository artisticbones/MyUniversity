/**
 * Author@ Cheng Feitian
 * Date: 2020-4-10
 * Function: 天文单位的转换
 */
#include <iostream>
using namespace std;
void unitConversion(double number);
void unitConversion(double number){
    double temp = 0;
    temp = number * 63240;
    cout << number << " light years" << " = " << temp << " astronomical units." << endl;
}

int main(){
    double lightYears = 0;
    cout << "Enter the number ogf light years: ";
    cin >> lightYears;
    unitConversion(lightYears);
    return 0;
}