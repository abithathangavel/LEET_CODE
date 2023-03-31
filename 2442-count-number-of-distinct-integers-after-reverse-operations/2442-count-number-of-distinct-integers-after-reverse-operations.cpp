class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int>s;
        for (auto i:nums)
        {
            s.insert(i);
            int r=0;
            while (i)
            {
                r=r*10+i%10;
                i=i/10;
            }
            s.insert(r);
        }
        return s.size();
    }
};