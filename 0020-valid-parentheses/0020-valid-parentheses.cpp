class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char ch : s) {
            // If it's an opening bracket, push to stack
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } 
            else {
                // If stack is empty or doesn't match the top, it's invalid
                if (st.empty()) return false;
                
                char top = st.top();
                if ((ch == ')' && top == '(') || 
                    (ch == ']' && top == '[') || 
                    (ch == '}' && top == '{')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        
        // Valid only if all brackets were matched and popped
        return st.empty();
    }
};