class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, int>> sum;
        int n=points.size();
        for(int i=0;i<n;i++)
        sum.push_back({(points[i][0]*points[i][0]+points[i][1]*points[i][1]),i});
        sort(sum.begin(), sum.end());
        vector<vector<int>> result;
        for(int i=0;i<k;i++)
        {
            result.push_back(points[sum[i].second]);
        }
        return result;
    }
};
