class Solution {
public:
    bool canPartitionKSubsetsUtil(vector<int> &nums, int k, vector<bool> &v, int sum, int reqSum, int index) {
        if(!k) return true;
        if(sum==reqSum) {
            return canPartitionKSubsetsUtil(nums,k-1,v,0,reqSum,0);
        }
        for(int i=index;i<nums.size();i++) {
            if(!v[i] && sum+nums[i]<=reqSum) {
                v[i]=true;
                if(canPartitionKSubsetsUtil(nums,k,v,sum+nums[i],reqSum,i+1)) return true;
                v[i]=false;
            }
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum%k || k>nums.size()) return false;
        sum/=k;
        vector<bool> v(nums.size(), false);
        return canPartitionKSubsetsUtil(nums,k,v,0,sum,0);
    }
};
