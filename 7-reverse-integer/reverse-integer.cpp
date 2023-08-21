class Solution {
public:
    int reverse(int x) {
        long long rem=0;
        while(x)
        {
            int ans=x%10;
            rem=rem*10+ans;
            x=x/10;
        }
        if(rem>=INT_MAX || rem<=INT_MIN)
        {
            return 0;
        }
        return rem;
    }
};