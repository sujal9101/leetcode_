class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        vector<int> ans(n, 0); // Initialize the answer vector with 0s.
        stack<int> s; 
        for (int i = 0; i < n; i++) {
            // While the current temperature is greater than the temperature at the index stored in the stack.
            while (!s.empty() && T[i] > T[s.top()]) {
                int index = s.top(); // Get the index of the colder temperature.
                s.pop();
                ans[index] = i - index; // Calculate the number of days until a warmer temperature.
            }
            s.push(i); // Push the current index onto the stack.
        }
        return ans;
    }
};