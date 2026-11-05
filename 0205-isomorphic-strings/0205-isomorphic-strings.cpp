class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> sMap(256, -1);
        vector<int> tMap(256, -1);
        for(int i = 0; i < s.length(); i++){
            char a = s[i];
            char b = t[i];
            if(sMap[a] == -1 && tMap[b] == -1){
                sMap[a] = b;
                tMap[b] = a;
            }
            else if(sMap[a] != b && tMap[b] != a){
                return false;
            }
        }
        return true;
    }
};