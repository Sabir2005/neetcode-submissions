
class Solution {
public:
    bool isPalindrome(string s) {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end());
        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) {return !std::isalnum(c);}), s.end());
        string left, right;
        for (int i = 0; i < s.size(); i++) {
            left.push_back(s[i]);
        }
        for (int i = s.size() - 1; i >= 0; i--) {
            right.push_back(s[i]);
        }
        return left == right;
    }
};
