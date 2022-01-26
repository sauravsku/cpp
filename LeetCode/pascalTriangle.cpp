
class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>>ans;
        ans.push_back({1});
        if(numRows==1)
            return ans;

        ans.push_back({1,1});
        if(numRows==2)
            return ans;

        vector<int>st = {1,2,1};
        ans.push_back(st);
        if(numRows==3)
            return ans;

        int size=4;
        while(numRows-- >3){
            vector<int>temp(size);
            temp[0]=st[0];
            for(int i=0;i<st.size()-1;i++){
                temp[i+1] = st[i]+st[i+1];
            }
            temp[size-1] = st[st.size()-1];
            st = temp;
            ans.push_back(temp);
            size++;
        }

        return ans;
    }
};
