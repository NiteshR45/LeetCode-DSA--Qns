class Solution {
private:
    void solve( int start, int target, vector<vector<int>>& ans, vector<int>&output, int k ){
        if (k == 0) {
            if (target == 0) {
                ans.push_back(output);
            }
            return;
        }

        for(int i=start; i<=9; i++){
            if(i > target){
                break;
            }
            output.push_back(i);

            solve(i + 1, target - i, ans ,output, k-1);

            output.pop_back();
        }

    }    
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> output;
        solve( 1 ,n, ans, output, k );
        return ans;
    }
};