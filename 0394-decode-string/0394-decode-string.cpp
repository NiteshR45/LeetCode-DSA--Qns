class Solution {
public:
    string decodeString(string s) {
        stack<int>numStack;
        stack<string>strStack;
        

        string current= "";
        int nums =0;

        for(char ch : s){
            if(isdigit(ch)){
                nums = nums*10 + (ch - '0');
            }else if(ch == '['){

                numStack.push(nums);
                strStack.push(current);
                nums =0;
                current = "";
            }else if(ch ==']'){
                int repeat = numStack.top();
                numStack.pop();
                string previous = strStack.top();
                strStack.pop();

                string temp = "";

                while(repeat--){
                    temp += current;
                }
                current = previous +temp;
            }else{
                current +=ch;
            }
        }
        return current;
    }
};