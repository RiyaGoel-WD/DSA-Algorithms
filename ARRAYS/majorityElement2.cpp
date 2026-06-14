//Source- striver's atoz sheet and leetcode 229
//time-O(n)
//space-O(n) (only space used to return the answer)
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0;
        int cnt2=0;
        int elem1= 0;
        int elem2=0;
        for(int i=0; i<nums.size();i++) {
            if(cnt1==0 && elem2!=nums[i]) {
                cnt1=1;
                elem1=nums[i];
            }
            else if(cnt2==0 && elem1!=nums[i]) {
                cnt2=1;
                elem2=nums[i];
            }
            else if(elem1==nums[i]) {
                cnt1++;
            }
            else if(elem2==nums[i]) {
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        vector<int>result;
        int mini= (nums.size()/3);
        for(int i=0; i<nums.size(); i++) {
            if(elem1==nums[i]) cnt1++;
            else if(elem2==nums[i]) cnt2++;
        }
        if(cnt1>mini) result.push_back(elem1);
        if(cnt2>mini) result.push_back(elem2);
        return result;
    }
};