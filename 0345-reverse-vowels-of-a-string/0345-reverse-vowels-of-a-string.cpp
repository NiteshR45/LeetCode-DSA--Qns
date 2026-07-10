class Solution {
public:
    bool isVowel(char ch) {
             return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }
    string reverseVowels(string s) {
       int left = 0;
       int right = s.size()-1;

       while(left < right){
            // left vowel n ho to...
            if( !isVowel(s[left])){
                left++;
            }else if( !isVowel(s[right])){   // right vowel n ho to ....
                right--;
            }else{
                (s[left] == s[right]);      // dono vowel ho to .....
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
       return s;
    }
};