/** 
 * Author@ Cheng Feitian
 * Date: 2020-4-12
 * Function: some integer limits 
 */
#include <iostream>
#include <climits>  //可以使用limits.h在老系统中
using namespace std;

int main(){
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;           //初始化n_int成最大int值
    long n_long = LONG_MAX;             //符号被定义在climits文件中
    long long n_llong = LLONG_MAX;
    
    // sizeof 运算符返回类型或者变量长度
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof(n_short) << " bytes." << endl;
    cout << "long is " << sizeof(n_long) << " bytes." << endl;
    cout << "long long is " << sizeof(n_llong) << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;

    cout << "Minimum int value = " << INT64_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}