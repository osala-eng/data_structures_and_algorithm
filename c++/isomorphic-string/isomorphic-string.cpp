#include <iostream>
#include <set>
#include <cstring>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        set<char> _s;
        string replace(0, s.length(), ' ');
        for (int i = 0; i < t.length(); i++){
            if(_s.count(t[i]) > 0)
                continue;
            char at_s = s[i];
            for(int j = 0; j < s.length(); j++){
                if(s[j] == at_s)
                     replace[j] = t[i];
            }
            _s.insert(t[i]);
        }
        cout << replace << endl << t << endl;
        return (replace == t);
    }
};

int main(int argc, char const *argv[])
{
    if(argc != 3){
        cout << "Expected 2 arguments" << endl;
        exit(1);
    }
    Solution test;
    string s = argv[1];
    string t = argv[2];
    cout << test.isIsomorphic(s, t) << endl;
    return 0;
}
