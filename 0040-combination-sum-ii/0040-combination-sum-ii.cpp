class Solution {
private:
    void solve(vector<int>& candidates, int target, vector<vector<int>> &ans, vector<int>output, int index){

        if(target == 0){
            ans.push_back(output);
            return;
        }
        if(index >= candidates.size()){
            return;
        }
        if(target < 0){
            return;
        }
        
        output.push_back(candidates[index]);
        solve(candidates, target-candidates[index], ans, output, index+1);
        output.pop_back();

        while(index+1 < candidates.size()  &&  candidates[index] == candidates[index+1]){
            index++;
        }
        solve(candidates , target, ans, output, index+1);
        
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target){
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;

        solve(candidates , target, ans, output, index);
        return ans;
    }
};