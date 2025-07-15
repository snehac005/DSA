class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sh(nums.begin(),nums.end());
        int maxcount=0;
        for(int num:sh){
            int count=0;
            if(!sh.count(num-1)){
                int n=num+1;
                count=1;
                while(sh.count(n)){
                    count+=1;
                    n+=1;
                }
            }
            if(count>maxcount){maxcount=count;}
        }
        return maxcount;
    }
};