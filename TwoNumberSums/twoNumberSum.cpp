#include <vector>
#include <iostream>
using namespace std;

vector<int> twoNumberSumSoluOne(vector<int> array, int targetSum);

vector<int> twoNumberSumSoluOne(vector<int> array, int targetSum) {
	vector<int> sum(2);
	
  for(int i = 0; i < array.size(); i ++){
		int firstNumber = array[i];
		for(int j = i + 1; j < array.size(); j++){
			int secondNumber = array[j];
			if((firstNumber + secondNumber) == targetSum){
				sum[0] = firstNumber;
				sum[1] = secondNumber;
				return sum;
			}
		}
	}
  return {};
}

int main (){
    vector<int> sum{3, 5, -4, 8, 11, 1, -1, 6};
    int targetsum = 10;

	vector<int> answer = twoNumberSumSoluOne(sum,targetsum);
	for(int x : answer){
		cout << x;
		cout << ", ";
	}

   return 0;
}
