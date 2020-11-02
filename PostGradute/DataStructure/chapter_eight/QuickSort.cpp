/**
 * Author@ Cheng Feitian
 * Date: 2020-11-3
 * Description: practice QuickSort
 */

#include <algorithm>
#include <iostream>

using namespace std;
const int maxn = 10;

int Partition(int A[],int low,int high){
    int pivot = A[low];
    while (low < high)
    {
        while (low < high && A[high] >= pivot)
        {
            high--;
        }
        A[low] = A[high];
        while (low < high && A[low] <= pivot)
        {
            low++;
        }
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}

void QuickSort(int A[],int low,int high){
    if (low < high)
    {
        int pivotpos = Partition(A,low,high);
        QuickSort(A,low,pivotpos);
        QuickSort(A,pivotpos + 1,high);
    }
}

int main() {
#ifdef LOCAL
    freopen("./result/1.in", "r", stdin);
    freopen("./result/1.out", "w", stdout);
#endif
    int number[maxn] = {0};
    int randomNum = 0;

    cout << "Please input a number:";
    cin >> randomNum;

    for (int i = 0; i < maxn; i++)
    {
        number[i] = randomNum % (i + 1);
        cout << "number[" << i << "]" << "\t" << number[i] << endl;
    }
    
    QuickSort(number,0,maxn - 1);
    cout << "QuickSort result:" << endl;
    
    for (int i = 0; i < maxn; i++)
    {
        cout << number[i] << "\t";
    }

    return 0;
}


