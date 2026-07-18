//  7- Reverse Integer

#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x!=0){
            if((rev>INT_MAX/10) || (rev<INT_MIN/10)){
                return 0;
            }
            rev = rev*10 + x%10;
            x = x/10;
        }
        return rev;
    }
};

int main(){
    Solution obj;
    int x = 123;
    cout<<obj.reverse(x);
    return 0;
}
