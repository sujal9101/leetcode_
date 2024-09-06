class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        int n=s.length();
        int i = 0, j = n-1;
        while (i < j) {
            // Move i forward if s[i] is not a vowel
            while(i<j && vowels.find(s[i]) == string::npos) {
                i++;
            }           
            // Move j backward if s[j] is not a vowel
            while(i<j && vowels.find(s[j]) == string::npos) {
                j--;
            }
            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
