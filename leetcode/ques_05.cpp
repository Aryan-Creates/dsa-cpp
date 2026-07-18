//231. Power of Two

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0; i<31; i++){
            int x = pow(2, i);
            if(n==x)
            return true;
        }
        return false;
    }
};

int main(){
    Solution obj;
    int n = 16;
    cout<<obj.isPowerOfTwo(n);
    return 0;
}