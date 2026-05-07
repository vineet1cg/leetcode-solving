class Solution {
public:
    bool isPalindrome(int x) {

        //checking if it is a vaild integer for palindrome
        if (x < 0 || (x % 10 == 0 && x != 0)){
            return false;
        }
        //reverse the given integer in order to compare
        int rev = 0;
        
        while(x > rev){
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        
        //checking if the reversed integer is equal to the given 
        return (x==rev || x==rev/10);
    }
};