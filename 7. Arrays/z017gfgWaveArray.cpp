class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=0, j=1; i<n && j<n; i+=2, j+=2){
            swap(arr[i], arr[j]);
        }
    }
};