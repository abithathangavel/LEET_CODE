class Solution {
public:
    int fillCups(vector<int>& a) {
        return max(*max_element(a.begin(), a.end()),(accumulate(a.begin(), a.end(), 0)+1)/2);
    }
};