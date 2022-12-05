#include <iostream>
#include <vector>
#include <map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> keys;
        for(int i = 0; i < nums.size(); i++){
            for (int j = i + 1; j < nums.size(); j++){
                if (nums.at(i) + nums.at(j) == target){
                    keys = {i, j};
                }
            }
        }

        return keys;
    }
};

int main(int argc, char const *argv[])
{
    Solution test;
    vector<int> num({2, 5, 7, 10, 11, 14});
    int target = 9;
    vector <int> sol = test.twoSum(num, target);
    cout << sol[0] << " " << sol[1] << endl;
    return 0;
}
