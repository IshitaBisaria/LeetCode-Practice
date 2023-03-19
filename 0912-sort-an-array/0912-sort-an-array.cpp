class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        int n1 = mid - low + 1;
        int n2 = high - mid;
        vector<int> L(n1, 0);
        vector<int> M(n2, 0);
        for (int i = 0; i < n1; i++)
            L[i] = nums[low + i];
        for (int j = 0; j < n2; j++)
            M[j] = nums[mid + 1 + j];
        int i = 0, j = 0, k = low;
        while (i < n1 && j < n2) {
            if (L[i] <= M[j]) {
                nums[k] = L[i];
                i++;
            } else {
                nums[k] = M[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            nums[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            nums[k] = M[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int>& nums, int low, int high) {
        if(low >= high)
            return;
        int mid = low + (high - low)/2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid+1, high);
        merge(nums, low, mid, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        return nums;
    }
};