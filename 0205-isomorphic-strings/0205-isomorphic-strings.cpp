class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int arr[256] = {0};
        int arr2[256] = {0};

        for (int i=0; i<s.length(); i++) {
            if(arr[s[i]] != arr2[t[i]]) {
                return false;
            }
                arr[s[i]]= i+1;
                arr2[t[i]]= i+1;

        }
        return true;
    }
};