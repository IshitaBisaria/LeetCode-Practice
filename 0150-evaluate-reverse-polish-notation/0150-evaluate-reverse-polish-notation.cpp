class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0; i < tokens.size(); i++) {
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                int num = stoi(tokens[i]);
                st.push(num);
            } else {
                if(tokens[i] == "+") {
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int c = b + a;
                    st.push(c);
                } else if(tokens[i] == "-") {
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int c = b - a;
                    st.push(c);
                } else if(tokens[i] == "*") {
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int c = b * a;
                    st.push(c);
                } else if(tokens[i] == "/") {
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int c = b / a;
                    st.push(c);
                }
            }
        }
        return st.top();
    }
};