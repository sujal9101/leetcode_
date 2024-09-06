class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int write=0;
        int i=0;
        while (i<n){
            char currentChar = chars[i];
            int count = 0;
            while (i < n && chars[i] == currentChar) {
                count++;
                i++;
            }
            chars[write] = currentChar;
            write++;
            if(count>1){
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[write]=c;
                    write++;
                }
            }
        }
        return write;
    }
};
