class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;
        while(low <= high) {
            int mid = low + (high - low)/2;
            if(mid > 0 && arr[mid] >= arr[mid - 1] && mid < arr.size()-1 && arr[mid] >= arr[mid + 1])
                return mid;
            else if(mid > 0 && arr[mid] < arr[mid - 1])
                high = mid - 1;
            else if(mid < arr.size() - 1 && arr[mid] < arr[mid + 1])
                low = mid + 1;
        }
        return -1;
    }
};