#include <iostream>
#include <functional>
#include "test.h"
using namespace std;

vector<vector<int>> testArrays = {
    {{1,2,3,4,5}},
    {{2,1,4,4,5}},
    {{1}},
    {{1,2}},
    {{2,1}},
    {{3,2,1}},
    {{3,4,2,2,5,1,3,5,6,4}},
    {{5,4,1}},
};

vector<vector<int>> correctArrays = {
    {{1,2,3,4,5}},
    {{1,2,4,4,5}}, 
    {{1}},
    {{1,2}},
    {{1,2}},
    {{1,2,3}},
    {{1,2,2,3,3,4,4,5,5,6}},
    {{1,4,5}},
};
 
void test(const std::function<void(vector<int>&)> &sort){
    for (int i = 0; i < testArrays.size(); i++){
        vector<int> answer = testArrays[i];
        sort(answer);
        if (answer == correctArrays[i])
            printf("%d OK\n",i + 1);
        else
            printf("%d FAIL\n",i + 1);
    }
}
