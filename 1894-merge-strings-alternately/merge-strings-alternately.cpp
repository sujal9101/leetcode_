class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        int i=0,j=0;
        string merge="";
        while(i<n||j<m){
            if(i<n){
                merge=merge+word1[i++];
            }
            if(j<m){
                merge=merge+word2[j++];
            }
        }
        return merge;
    }
};