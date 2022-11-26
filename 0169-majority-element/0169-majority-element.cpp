class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ind = 0, count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[ind] == nums[i])
                count++;
            else
                count--;
            if(count == 0) {
                ind = i;
                count = 1;
            }
        }
        count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == nums[ind])
                count++;
        }
        if(count > nums.size()/2)
            return nums[ind];
        return -1;
    }
};