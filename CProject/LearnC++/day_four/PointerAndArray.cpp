/**
 * Author@ Cheng Feitian
 * Date: 2020-3-7
 * Description: 指针和数组的关系
 */

#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;
const int maxn = 1024;

int main() {
#ifdef LOCAL
    freopen("./result/1.in", "r", stdin);
    freopen("./result/1.out", "w", stdout);
#endif

    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p1 = arr;
    int * p2;
    

    cout << "arr[0]" << "   p1  p2" << endl;
    cout << arr[0] << " " << *p1 << "   " << *p2 << endl;
    cout << "sizeof *p2 " << sizeof(p2) << endl;

    return 0;
}
