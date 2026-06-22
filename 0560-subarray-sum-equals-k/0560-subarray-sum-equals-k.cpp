class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0,count=0;
        map<int,int> prefixSum;
        for(int i=0;i<n;i++){
            sum+=nums[i];

            if(sum == k){
                count++;
            }

            int diff = sum - k;

            if(prefixSum.find(diff) != prefixSum.end()){
                count+=prefixSum[diff];
            }
            prefixSum[sum]++;
        }
        return count;
    }
};