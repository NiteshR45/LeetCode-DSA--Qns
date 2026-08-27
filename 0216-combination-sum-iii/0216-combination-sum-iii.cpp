class Solution {
private:
    void solve( vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>output, int index , int count , int k ){
        if (count == k) {
            if (target == 0) {
                ans.push_back(output);
            }
            return;
        }
        if( index >= candidates.size()){
            return;
        }
        if(target < 0 ){
            return;
        }

        output.push_back(candidates[index]);

        solve(candidates , target-candidates[index], ans, output, index+1, count+1, k);

        output.pop_back();

        solve(candidates , target, ans, output, index+1, count, k);

    }    
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> output;
        vector<int> candidates ={1,2,3,4,5,6,7,8,9} ;
        solve( candidates ,n, ans, output, 0 ,0 , k );
        return ans;
    }
};