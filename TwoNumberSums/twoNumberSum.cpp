#include <vector>
#include <iostream>
using namespace std;

//vector<int> twoNumberSum(vector<int> array, int targetSum) {}

int main (){
    vector<int> sum{3, 5, -4, 8, 11, 1, -1, 6};
    vector<int> nums(2);
    int targetSum = 10;

    for(int i = 0; i < sum.size(); i++){
        int firstNumber = sum[i];
        for(int j = i + 1; j < sum.size(); j++){
            int secondNumber = sum[j];
            if((firstNumber + secondNumber) == targetSum) {
                nums.push_back(firstNumber);
                nums.push_back(secondNumber);
                for(int x : nums)
                    cout << x << " ";
            }
        }
    }

   return 0;
}
