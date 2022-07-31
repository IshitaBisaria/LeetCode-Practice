class NumArray {
public:
    vector<int> arr;
    int sum;
    NumArray(vector<int>& nums) {
        arr = nums;
        sum = 0;
        for(int i = 0; i < arr.size(); i++)
            sum += arr[i];
    }
    
    void update(int index, int val) {
        sum -= arr[index];
        arr[index] = val;
        sum += val;
    }
    
    int sumRange(int left, int right) {
        int res = sum;
        for(int i = 0; i < left; i++)
            res -= arr[i];
        for(int i = right+1; i < arr.size(); i++)
            res -= arr[i];
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */