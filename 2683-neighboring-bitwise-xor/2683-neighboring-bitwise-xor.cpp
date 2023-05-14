class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xor_ = 0;
        for(int i = 0; i < derived.size(); i++)
            xor_ ^= derived[i];
        return xor_ == 0;
    }
};