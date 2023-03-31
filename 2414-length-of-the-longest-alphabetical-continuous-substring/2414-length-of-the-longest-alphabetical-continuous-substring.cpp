class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans=0,c=1;
        for (int i=0;i<s.size()-1;i++)
        {
            if ((s[i+1]-s[i])==1)
                c=c+1;
            else
            {
                if (c>ans)
                    ans=c;
                c=1;
            }
        }
        if (c>ans)
            ans=c;
        return ans;
    }
};