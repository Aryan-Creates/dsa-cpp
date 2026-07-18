// 50. PALINDROME NUMBER

bool isPalindrome(int x){
    long long int sum=0; 
    int num;
    if (x<0)
    return false;
    num = x;
    while(x!=0){
        sum = sum*10 + x%10;
        x = x/10;
    }
    x = num;
    return(sum==x);
}