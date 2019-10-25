#include <iostream>
#include <vector>
#include "test.h"
using namespace std;

void MySwap (vector<int> &arr, int a, int b){
    int t = 0;
    t = arr[a];
    arr[a] = arr[b];
    arr[b] = t;
}

void BubbleSort(vector<int> &array) {
    for (int notSortedIter = 0; notSortedIter < array.size(); notSortedIter++)
        {
            for (int i = array.size() - 1; i > notSortedIter; i--)
                {
                    if (array[i] < array[i-1])
                        {
                            MySwap(array, i, i-1);
                        }
                }
        }
    
}
 


int main()
{

text::test();

}