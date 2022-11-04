class Solution {
public:
    string reverseVowels(string s) {
        string v = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                v += s[i];
        }
        cout << v << endl;
        reverse(v.begin(), v.end());
        int j = 0;
        for(int i = 0; i < s.size(); i++) {
            if((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') && j < v.size()) {
                s[i] = v[j];
                j++;
            }
        }
        return s;
    }
};
