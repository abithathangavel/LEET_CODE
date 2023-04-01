class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,c=0;
        for (auto i:nums)
        {
            if (i==1)
            {
                c++;
            }
            else
            {
                ans=max(ans,c);
                c=0;
            }
            ans=max(ans,c);
        }
         return ans;
    }
};