#include <set>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v(nums1.size() + nums2.size());
        vector<int>::iterator it;
        set<int> result;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        it = set_intersection(nums1.begin(), nums1.end() , nums2.begin(), nums2.end(), v.begin());
        v.resize(it - v.begin());
        printVector(v);
        result = set<int>(v.begin(), v.end());
        return (vector<int>(result.begin(), result.end()));
    }

    void printVector(vector<int> & list){
        vector<int>::iterator it;
        for(it = list.begin(); it != list.end(); ++it){
            cout << *it << ' ';
        }
        cout << endl;
    }
};


int main(){
    Solution test;
    vector<int> nums({1, 4, 3, 2, 2});
    vector<int> nums1({3, 2, 2, 5});

    test.intersection(nums, nums1);

    return (0);
}