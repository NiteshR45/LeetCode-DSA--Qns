class Solution {
public:
    bool isValid(string str) {
        stack<char> st;
        for (int i = 0; i < str.size(); ++i) {
            //char c= str[i];
            if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
                st.push(str[i]);
            } else {
                if (st.size()==0) return false;
                //char top = st.top();
                // match top (opening) with current c (closing)
                if ((st.top() == '(' && str[i] == ')') ||
                    (st.top() == '{' && str[i] == '}') ||
                    (st.top() == '[' && str[i] == ']')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.size()==0;
    }
};