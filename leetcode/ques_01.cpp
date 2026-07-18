//1281. Subtract the Product and Sum of Digits of an Integer
// link- https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/submissions/1923545219/

#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, prod=1;
        
        while(n>0){
            sum = sum + n%10;
            prod = prod*(n%10);
            n = n/10;
        }
        return prod-sum;
        
    }
};

int main(){
    Solution obj;
    int n = 4421;
    cout<<obj.subtractProductAndSum(n);
    return 0;
}