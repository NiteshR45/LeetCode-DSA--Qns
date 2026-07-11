class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        if(x % 10 == 0 && x != 0) return false;   // ager last no. zero h or no. zero nhi h to ...

        int rev =0;
        while( x > rev){   // sirf half part ke no. ko reverse karenge...
          int digit = x % 10;
          rev = rev*10 + digit;
          x = x/10; 
        }
         // Even no. ke liye( x== rev)      odd no ke liye( x== rev /10 )se 
        return (x==rev) || (x == rev/10);
    }
};