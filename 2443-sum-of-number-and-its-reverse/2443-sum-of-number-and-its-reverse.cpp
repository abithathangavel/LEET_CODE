class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        if (num==0) return true;
        for (int i=0;i<num;i++)
        {
            int t=i,r=0;
            while(t)
            {
                r=r*10+t%10;
                t=t/10;
            }
            if (i+r==num)
                return true;
        }
        return false;
    }
};