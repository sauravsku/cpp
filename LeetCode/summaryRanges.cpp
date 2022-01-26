class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int l = 0;
        int r = 1;
        vector<string> ans;
        while(r < nums.size()){
            int pre = nums[l];
            while(r < nums.size() && pre + 1 == nums[r]){
                pre = nums[r];
                r++;
            }
            
            string a = to_string(nums[l]);
            if(l != r - 1){
                a += "->";
                a += to_string(nums[r - 1]);
            }
            ans.push_back(a);
            l = r;
            r = l + 1;
            
        }
        
        if(l < nums.size()){
            string a = to_string(nums[l]);
            if(l != r - 1){
                a += "->";
                a += to_string(nums[r - 1]);
            }
            ans.push_back(a);
        }

        
        return ans;
        
    }
};