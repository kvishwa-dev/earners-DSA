# include <iostream>
# include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector <int> res = {};
    for (int i = 0; i < nums.size(); i++){
        for (int j = i+1; j < nums.size(); j++){
            if (nums[i] + nums[j] == target){
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
    }
    return res;
}

int main(){
    vector <int> nums = {3,2,4};
    int target = 6;

    vector<int> ans = twoSum(nums, target);

    for(int i = 0; i< ans.size(); i++){
        cout << ans[i] << " ";
    }
}