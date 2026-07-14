class Solution {
public:
    string reverseWords(string s) {
    vector<string>vt;
    int i=0;
    int n=s.size();
    while(i<n){
        while(i<n and s[i]==' '){
            i++;
        }
        if(i>=n)break;
        string word="";
        while(i < n and s[i] !=' '){
            word += s[i];
            i++;
        } 

        vt.push_back(word);
    }
    string ans = "";
    for(int j=vt.size() - 1 ;j >= 0;j--){
     ans += vt[j];
     if(j > 0){
        ans += " ";
     }   
    }

    return ans;
    }
};