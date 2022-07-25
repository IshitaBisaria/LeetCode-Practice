class Solution {
public:
    int search(vector<int> nums, int target, bool pos) {
        int low = 0, high = nums.size()-1;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(nums[mid] == target) {
                if(pos) {
                    if(mid == 0 || nums[mid-1] < target) {
                        return mid;
                    } else {
                        high = mid - 1;
                    }
                }
                else {
                    if(mid == nums.size()-1 || nums[mid + 1] > target) {
                        return mid;
                    } else {
                        low = mid + 1;
                    }
                }
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(search(nums, target, true));
        ans.push_back(search(nums, target, false));
        return ans;
    }
};