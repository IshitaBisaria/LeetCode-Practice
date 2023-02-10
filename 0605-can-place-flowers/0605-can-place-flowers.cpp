class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // if(n == 0)
        //     return true;
        // int count = 0;
        // if(flowerbed.size() == 1 && flowerbed[0] == 0 && n == 1)
        //     return true;
        // if(flowerbed[0] == 0 && flowerbed.size() > 1 && flowerbed[1] == 0) {
        //     count++;
        //     flowerbed[0] = 1;
        // }
        // for(int i = 1; i < flowerbed.size()-1; i++) {
        //     if(flowerbed[i] == 0 && flowerbed[i-1] != 1 && flowerbed[i+1] != 1) {
        //         count++;
        //         flowerbed[i] = 1;
        //     }
        // }
        // if(flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size()-2] == 0)
        //     count++;
        // if(count >= n)
        //     return true;
        // return false;
        int count = 0;
        for(int i = 0; i < flowerbed.size() && count < n; i++) {
            if(flowerbed[i] == 0) {
               int next = (i == flowerbed.size() - 1) ? 0 : flowerbed[i + 1]; 
               int prev = (i == 0) ? 0 : flowerbed[i - 1];
               if(next == 0 && prev == 0) {
                   flowerbed[i] = 1;
                   count++;
               }
            }
        }
        return count == n;
    }
};