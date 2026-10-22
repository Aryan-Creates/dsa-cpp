class Solution {
public:
    bool isPalindrome(long long int x) {
        if(x<0){
            return false;
        }
        long long int sum = 0;
        long long int num = x;
        while(num>0){
            sum = sum*10 + num%10;
            num = num/10;
        }
        return (sum == x);
    }
};