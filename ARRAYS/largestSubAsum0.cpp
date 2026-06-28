//Source- striver's atoz sheet 
//time-O(n)
//space-O(n) 
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int maxlen=0;
         int n=arr.size();
         unordered_map<int,int> mpp;
         int ps=0;
         for(int i=0; i<n;i++) {
            ps+=arr[i];
            if(mpp.find(ps)!=mpp.end()) {
                maxlen=max(maxlen, i-mpp[ps]);
            }
            else if(mpp.find(ps)==mpp.end()) {
                mpp[ps]=i;
            }
            else if(ps==0) {
                maxlen=max(maxlen, i+1);
            }
         }
         return maxlen;
    }
};