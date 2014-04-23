class Solution {
public:
    int reverse(int x) {
        if (x==0) return 0;
        int ans = 0;
        bool isNegative = false;
        if (x < 0){
            isNegative = true;
            x = -x;
        }
        while (x){
            ans = ans * 10 + x%10;
            x /= 10;
        }
        if (isNegative)
            return -ans;
        else
            return ans;
    }
};
