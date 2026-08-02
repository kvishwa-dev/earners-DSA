# include <iostream>
# include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int i = 1, n = nums.size();
    while(i<=k){
        int temp = nums[n-1];
        for(int j = n-1; j >= 0; j--){
            if (j==0) {
                nums[j] = temp;
                break;
            }
            nums[j] = nums[j-1];
        }
        i++;
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums, k);

    for(int i = 0; i< nums.size(); i++){
        cout << nums[i] << " ";
    }
}