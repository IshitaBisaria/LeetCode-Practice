class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0; i< tokens.size(); i++) {
            if(tokens[i].size() > 1 || isdigit(tokens[i][0]))
                st.push(stoi(tokens[i]));
            else {
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();
                switch(tokens[i][0]) {
                    case '+' : st.push(val1 + val2);
                                break;
                    case '-' : st.push(val2 - val1);
                                break;
                    case '*' : st.push(val2 * val1);
                                break;
                    case '/' : st.push(val2 / val1);
                                break;
                }
            }
        }
        return st.top();
    }
};