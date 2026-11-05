class Solution {
public:
    bool rotateString(string s, string goal) { 
        return (s.length() == goal.length() && strstr((s + s).data(), goal.data()));
    }
};