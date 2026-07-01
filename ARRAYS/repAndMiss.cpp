//Source- striver's atoz sheet 
//time-O(n)
//space-O(1) 
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int S=0;
        int S2=0;
        int n=nums.size();
        int SN= (n*(n+1))/2;
        int S2N=(n*(n+1)*(2*n+1))/6;
        for(int i=0; i<n;i++) {
            S+=nums[i];
            S2+=nums[i]*nums[i];
        }
        int val1=S-SN;
        int val2=S2-S2N;
        val2=val2/val1;

        int x=(val1+val2)/2;
        int y=val2-x;
        return {x,y};
    }
};