class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_size=s.length();
        int t_size=t.length();
        int i=0;
        int j=0;
        while(j<t_size){
            if(s[i]==t[j]){
                i++;
                j++;
            }else{
                j++;
            }
        }
        return {i==s_size};
    }
};