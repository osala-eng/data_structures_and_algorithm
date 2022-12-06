#include <iostream>
#include <cstring>
#include <unordered_map>
#include <vector>

using namespace std;
typedef unordered_map<int, vector<string>> mmap;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int lis, index2, index1, i, j;
        int len1 = list1.size();
        int len2 = list2.size();
        mmap lis_map;

        for(i = 0; i < len1; i++){
            if(i != lis && i > lis && lis_map.count(lis) > 0)
                goto KILL;
            for(j = 0; j < len2; j++){
                if(list1[i] == list2[j] && (lis >= i + j || !lis)){
                    lis = i + j;
                    lis_map[lis].push_back(list1[i]);
                }
            }
        }
KILL:   return lis_map[lis];
    }
};


int main(int argc, char const *argv[])
{
    Solution test;
    vector<string> vec1({"KFC", "Burger King", "Tapioca Express", "Shogun"});
    vector<string> vec2({"Shogun", "Tapioca Express", "Burger King", "KFC"});

    for (auto i: test.findRestaurant(vec1, vec2)){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
