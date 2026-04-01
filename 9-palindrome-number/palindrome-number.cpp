class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        if(x == 0) return true;  // Handle 0 case
        
        long temp = x;
        long rev = 0;
        
        while(x > 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }
        
        // Check only AFTER the loop completes
        return temp == rev;
    }
};
