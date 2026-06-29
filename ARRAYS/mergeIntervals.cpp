//Source- striver's atoz sheet and leetcode 56
//time-O(n + nlogn)
//space-O(1) and O(n) (worst case) 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
        if(intervals.empty()) return {};
            result.push_back({intervals[0][0],intervals[0][1]});
        for(int i=1; i<intervals.size();i++) {
            if(result.back()[1]>=intervals[i][0]) {
                result.back()[1]=max(result.back()[1],intervals[i][1]);
            }
            else {
                result.push_back({intervals[i][0],intervals[i][1]});
            }
        }
        return result;
    }
};