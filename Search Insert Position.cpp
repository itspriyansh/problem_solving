class Solution {
public:
    int binarySearch(vector<int>& nums, int a, int b, int t) {
        if(a>=b) {
            if(nums[a]>=t) return a;
            return a+1;
        }
        int m = (a+b)/2;
        if(nums[m]==t) return m;
        if(nums[m]<t) return binarySearch(nums, m+1, b, t);
        return binarySearch(nums, a, m-1, t);
    }
    
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size()-1, target);
    }
};
