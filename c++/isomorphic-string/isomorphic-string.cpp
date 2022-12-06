#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_t, t_s;
        int len = s.length();

        for(int i = 0; i < len; i++){
            if( (s_t.count(s[i]) > 0 && s_t[s[i]] != t[i]) ||
                (t_s.count(t[i]) > 0 && t_s[t[i]] != s[i]) )
                return false;
            t_s[t[i]] = s[i];
            s_t[s[i]] = t[i];
        }
        return true;
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
