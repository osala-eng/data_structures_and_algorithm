#include <iostream>
#include <set>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int vowa = 0, vowb = 0;
        char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        set<char> vowel = set<char>(vowels, vowels+10);

        for (int i = 0; i < (s.length() / 2); i++){
            if(vowel.count(s[i]) > 0)
                vowa++;
        }

        for (int i = s.length() / 2; i < s.length(); i++){
            if(vowel.count(s[i]) > 0)
                vowb++;
        }

        return (vowa == vowb);
    }
};

int main(){
    Solution test;
    cout << test.halvesAreAlike("book") << endl;
}