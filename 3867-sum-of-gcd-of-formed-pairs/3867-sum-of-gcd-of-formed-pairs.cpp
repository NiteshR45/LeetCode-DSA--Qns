class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n= nums.size();
        vector<int>prefixGcd;
        //RUNNING MAX KAISE MAINTAIN KARNA H ....
        int mx = nums[0];
        for(int i=0; i<n; i++){
            mx = max(mx , nums[i]);
            prefixGcd.push_back(gcd(nums[i], mx));
        }

        //SORT KARNA H ...
        sort(prefixGcd.begin(), prefixGcd.end());
        //PAIR BANANA H TO POINTER USE KARKE ...
        long long ans=0;
        int left =0;
        int right = n-1;

        while(left < right){
            ans += gcd(prefixGcd[left] , prefixGcd[right]);
            left++, right--;
        }
        return ans;
    }
};