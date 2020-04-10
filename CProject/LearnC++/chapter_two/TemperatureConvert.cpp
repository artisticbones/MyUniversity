/**
 * Author@ Cheng Feitian
 * Date: 2020-4-10
 * Function: 将摄氏温度转换为华氏温度
 */
#include <iostream>
using namespace std;
void temperatureConvert(int n);
void temperatureConvert(int n){
    int temp = 0;
    temp = 1.8 * n + 32.0;
    cout << n << " degrees Celsius is 68 degrees Fahrenheit." << endl;
}

int main(){
    int temperature = 0;
    cout << "Please enter a Celsius value: ";
    cin >> temperature;
    temperatureConvert(temperature);
    return 0;
}