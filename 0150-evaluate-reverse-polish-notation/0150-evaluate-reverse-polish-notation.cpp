class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0; i < tokens.size(); i++) {
            if(isdigit(tokens[i][0])) {
                int n = stoi(tokens[i]);
                cout << n << endl;
                st.push(n);
            } else if (tokens[i][0] == '-' && tokens[i].size() > 1) {
                int n = stoi(tokens[i].substr(0));
                cout << n << endl;
                st.push(n);
            } else {
                cout << tokens[i] << endl;
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(tokens[i] == "+")
                    st.push(b+a);
                if(tokens[i] == "-")
                    st.push(b-a);
                if(tokens[i] == "*")
                    st.push(b*a);
                if(tokens[i] == "/")
                    st.push(b/a);
            }
        }
        return st.top();
    }
};