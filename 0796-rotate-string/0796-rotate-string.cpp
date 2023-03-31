class Solution {
public:
    bool rotateString(string s, string g) {
        if (s.length()!=g.length())
            return false;
        for (int i=0;i<s.length();i++)
        {
            reverse(g.begin(),g.end());
            reverse(g.begin(),g.begin()+1);
            reverse(g.begin()+1,g.end());
            if (s==g)
                return true;
        }
        return false;
    }
};