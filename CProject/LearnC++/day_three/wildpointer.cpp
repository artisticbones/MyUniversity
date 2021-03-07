/**
 * Author@ Cheng Feitian
 * Date: 2020-3-7
 * Description: 野指针学习
 */

#include <algorithm>
#include <iostream>

using namespace std;
const int maxn = 1005;

int main() {
#ifdef LOCAL
    freopen("./result/1.in", "r", stdin);
    freopen("./result/1.out", "w", stdout);
#endif

    int *p = (int *)0x1100;

    cout << *p << endl;

    return 0;
}
