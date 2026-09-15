class Solution {
public:
    bool isValid(string s) {
        string temp = "";
        for (int i=0; i<s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                temp += s[i];
            }
            else {
                if (temp.length() == 0) {
                    return false;
                }

                if (s[i] == ')' && temp[temp.length() - 1] != '(') {
                    return false;
                }

                if (s[i] == ']' && temp[temp.length() - 1] != '[') {
                    return false;
                }

                if (s[i] == '}' && temp[temp.length() - 1] != '{') {
                    return false;
                }

                temp = temp.substr(0, temp.length() - 1);
            }
        }
        return temp.length() == 0;
    }
};