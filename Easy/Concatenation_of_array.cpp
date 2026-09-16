#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums){
      int n = nums.size();
      int i = 0;
      while(i < n){
        nums.push_back(nums[i++]);
      }
      return nums;
    }
};

int main(){
  Solution solution;
  vector<int> nums = {1,3,2,1};
  vector<int> res = solution.getConcatenation(nums);

  int i = 0;
  while(i < res.size()){
    cout << res[i++] << " " ;
  }
}