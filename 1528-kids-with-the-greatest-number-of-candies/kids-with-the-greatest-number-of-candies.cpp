class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxi=INT_MIN;
        int i=0;
        while(i<n){
            maxi=max(candies[i],maxi);
            i++;
        }
        vector<bool>result(n);
        i=0;
        while(i<n){
            result[i]=(candies[i]+extraCandies >= maxi);
            i++;
        }
        return result;
    }
};