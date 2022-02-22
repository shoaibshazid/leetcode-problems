class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
            words.push_back(tmp);

        string ans="";
        for(int i=words.size()-1;i>=0;i--){
            //reverse(words[i].begin(),words[i].end());
            ans+=words[i];
            if(i==0) continue;
            ans+=" ";
        }
        return ans;
    }
};