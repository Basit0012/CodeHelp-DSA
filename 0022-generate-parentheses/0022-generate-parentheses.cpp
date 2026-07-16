class Solution {
public:
    void helper(vector<string>& ans, string temp, int n,int op, int cp){
        if(temp.length() == 2 * n){
            ans.push_back(temp);
            return;
        }
        if(op<n)
        helper(ans,temp+'(',n,op+1,cp);
        if(op>cp)
        helper(ans,temp+')',n,op,cp+1);
        
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(ans,"",n,0,0);
        return ans;
    }
};