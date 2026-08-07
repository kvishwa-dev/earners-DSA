class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Method 1
        int n = nums.size(), sumTotal = (n*(n+1))/2, sum=0;
        for(int num: nums){
            sum+=num;
        }
        return sumTotal - sum; // TC = O(n)
    }
    // int missingNumber(vector<int>& nums) {
    //     // Method 2
    //     int n = nums.size(), sumTotal = (n*(n+1))/2, sum=0;
    //     for(int i=0; i<n; i++){
    //         bool flag = false;
    //         for (int j=0; j<n; j++){
    //             if (i == nums[j]){
    //                 flag = true;
    //                 break;
    //             }
    //         }
    //         if (flag==false){
    //                 return i; 
    //             }
    //     }
    //     return n; // TC = O(n^2)
    // }
};