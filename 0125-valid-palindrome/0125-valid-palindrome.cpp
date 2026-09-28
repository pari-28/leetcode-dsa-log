class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.length() - 1;

        while (st < end) {
           

            while (st < end && (!(s[st] >= 'A' && s[st] <= 'Z' || s[st] >= 'a' && s[st] <= 'z' || s[st] >= '0' && s[st] <= '9'))) {
                st++;
            }
            
            
            while (st < end && (!(s[end] >= 'A' && s[end] <= 'Z' || s[end] >= 'a' && s[end] <= 'z' || s[end] >= '0' && s[end] <= '9'))) {
                    end--;
            }

             if (s[st] >= 'A' && s[st] <= 'Z') {
                s[st] = s[st] - 'A' + 'a';
            }
            if (s[end] >= 'A' && s[end] <= 'Z') {
                s[end] = s[end] - 'A' + 'a';
            }
            
            if (s[st] != s[end]) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};