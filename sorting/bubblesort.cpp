#include <iostream>
#include <vector>
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
 
vector<vector<int>> testArrays = {
    {{1,2,3,4,5}},
    {{2,1,4,4,5}},
    {{1}},
    {{1,2}},
    {{2,1}},
    {{3,2,1}},
    {{3,4,2,2,5,1,3,5,6,4}},
};

vector<vector<int>> correctArrays = {
    {{1,2,3,4,5}},
    {{1,2,4,4,5}}, 
    {{1}},
    {{1,2}},
    {{1,2}},
    {{1,2,3}},
    {{1,2,2,3,3,4,4,5,5,6}},
};
 
void test(){
    for (int i = 0; i < testArrays.size(); i++){
        vector<int> answer = testArrays[i];
        BubbleSort(answer);
        if (answer == correctArrays[i])
            printf("%d OK\n",i + 1);
        else
            printf("%d FAIL\n",i + 1);
    }
}

int main()
{

test();

}