class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(candies[i],maxi);
        }
        vector<bool> result(n);
        for (int i=0;i<n;i++) {
            result[i]=(candies[i]+extraCandies >= maxi);
        }
        return result;
    }
};