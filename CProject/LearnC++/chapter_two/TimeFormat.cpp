/**
 * Author@ Cheng Feitian
 * Date: 2020-4-10
 * Function: 将输入的数据转化为时间格式
 */
#include <iostream>
using namespace std;
void TimeFormat(int hours,int minutes);
void TimeFormat(int hours,int minutes){
    cout << "Time:" << hours << ":" << minutes << endl;
}
int main(){
    int hours = 0,minutes = 0;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    TimeFormat(hours,minutes);
    return 0;
}