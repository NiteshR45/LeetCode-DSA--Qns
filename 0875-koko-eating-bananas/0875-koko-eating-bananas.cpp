class Solution {
public:
    long long totalHours(vector<int>& piles, int k) {
        long long hour = 0;
        for(int pile : piles){
        hour += (pile + k-1)/k;
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right= *max_element(piles.begin(), piles.end());

        while( left < right){
            int mid = left +(right - left)/2;
            if(totalHours(piles,mid) <= h){
                right = mid;
            }else{
                left = mid+1;
            }
        }
        return left;
    }
};