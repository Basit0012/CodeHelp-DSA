class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto it:s){
            if(it=='(' or it == '{' or it == '['){
                st.push(it);
            }
            else{
                if(st.empty())return false;
                char top=st.top();
                if(top=='(' and it==')' or
                top=='{' and it=='}' or
                top=='[' and it==']'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty())return true;
        return false;
    }
};