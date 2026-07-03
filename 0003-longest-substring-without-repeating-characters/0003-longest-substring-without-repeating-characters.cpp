class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> count(256 , 0);
        int first =0, sec=0, length =0;

        while(sec <s.size()){
            while(count [s[sec]]){
                count[s[first]]=0;
                first++;
            }
            count[s[sec]]=1;
            length = max(length , sec-first+1);
            sec++;
        }
        return length;
    }
};