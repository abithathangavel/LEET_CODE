class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1,v2,ans;
        for (auto i:nums)
        {
            if (i<0)
                v1.push_back(i);
            else
                v2.push_back(i);
        }
        int f=1,p=0,n=0;
        for (int i=0;i<nums.size();i++)
        {
            if (f==1)
            {
                ans.push_back(v2[p]);
                f=0;
                p++;
            }
            else
            {
                ans.push_back(v1[n]);
                f=1;
                n++;
            }
        }
        return ans;
    }
};