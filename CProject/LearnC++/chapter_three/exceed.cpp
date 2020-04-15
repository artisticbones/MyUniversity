/**
 * Author@ Cheng Feitian
 * Date: 2020-4-12
 * Function: exceed.cpp -- 演示超出部分int值
 */
#include <iostream>
#include <climits>

#define ZERO 0;
using namespace std;

int main()
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl 
         << "Add $1 to each account." << endl << "Now ";
    sam += 1;
    sue += 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Poor sam!" << endl;
    
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl 
         << "Take $1 from each account." << endl << "Now";
    sam -= 1;
    sue -= 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky Sue" << endl;
    
    return 0;
}
