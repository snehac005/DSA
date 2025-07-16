#include <numeric>
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        if(nums.size()==1){if(nums[0]==k){return 1;} else{return 0;}}
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum=sum+nums[j];
                if(sum==k){count++;}
            }
        }
        return count;
    }
};