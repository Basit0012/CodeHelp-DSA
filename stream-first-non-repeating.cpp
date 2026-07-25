// Stream First Non-repeating
// Solved
// Difficulty: MediumAccuracy: 31.65%Submissions: 244K+Points: 4Average Time: 15m
// Given a string s consisting of only lowercase alphabets, for each index i in the string (0 ≤ i < n), find the first non-repeating character in the prefix s[0..i]. If no such character exists, use '#'.

// Examples:

// Input: s = "aabc"
// Output: a#bb
// Explanation: 
// At i=0 ("a"): First non-repeating character is 'a'.
// At i=1 ("aa"): No non-repeating character, so '#'.
// At i=2 ("aab"): First non-repeating character is 'b'.
// At i=3 ("aabc"): Non-repeating characters are 'b' and 'c'; 'b' appeared first, so 'b'. 
// Input: s = "bb" 
// Output: "b#" 
// Explanation: 
// At i=0 ("b"): First non-repeating character is 'b'.
// At i=1 ("bb"): No non-repeating character, so '#'.

#include <unordered_map>
#include <queue>
#include <string>
using namespace std;

class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        unordered_map<char,int>mp;
        queue<char>q;
        string ans = "";
        // First non repeating character queue ke help se
        for(char ch:s){
            if(!mp.count(ch)){
            q.push(ch);
            mp[ch]++;
        }else{
            mp[ch]++;
        }
        // check while q.front() has frequency more than 1 in map
        while(!q.empty() && mp[q.front()]>1){
            q.pop(); // then pop the queue
        }
        // if the queue is empty then push '#' in ans
        if(q.empty()){
            ans += '#';
        }else{
            ans +=q.front();
        }
        }
        // if it is not push q.front
        return ans;
        
    }
};