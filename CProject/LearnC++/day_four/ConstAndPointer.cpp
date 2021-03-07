/**
 * Author@ Cheng Feitian
 * Date: 2020-3-7
 * Description: const 和 指针的关系
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

    int a = 10;
    int b = 20;

    //1. const 修饰指针     常量指针
    const int * p1 = &a;
    //指针指向的值不可以改，指针指向可以修改
    //*p1 = 20;//error
    p1 = &b;
    //2. const 修饰常量     指针常量
    //指针指向的值可以改，指针指向不可以改
    int * const p2 = &a;
    // p2 = &b;    //error
    *p2 = 100;
    //3. const 既修饰指针也修饰常量
    const int * const p3 = &a;
    //指针指向的值和指向均不可以修改
    // *p3 = 50;   //error
    // p3 = &b;    //error

    cout << a << " " << b << endl;
    return 0;
}