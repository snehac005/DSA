class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mpp[nums[i]]>nums.size()/2){return nums[i];}
        }
        return 0;
    }
};