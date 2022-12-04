#include <iostream>
#include <set>

using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        int prev = 0;
        string numstr = to_string(n);
        set<int> hashset;

        while (true)
        {
            int newNum = 0;
            numstr = prev ? to_string(prev) : numstr;
            for(char i : numstr){
                newNum += (int (i - '0')) * (int (i - '0'));
            }
            cout << newNum << endl;
            if (newNum == 1)
                return true;
            if (hashset.count(newNum) > 0)
                return false;
            hashset.insert(newNum);
            prev = newNum;
        }
        return (false);
    }
};

int main(){
    Solution test;
    cout << test.isHappy(19) << endl;
    return (0);
}