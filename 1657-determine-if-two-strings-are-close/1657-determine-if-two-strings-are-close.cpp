class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) {
            return false;
        }

        int freq1[26] = {0};
        int freq2[26] = {0};

        for (int i=0; i<word1.length(); i++) {
            freq1[word1[i] - 'a']++;
        }

        for (int i=0; i<word2.length(); i++) {
            freq2[word2[i] - 'a']++;
        }

        for (int i=0; i<26; i++) {
            if (freq1[i] == 0 && freq2[i] != 0 ||
            freq2[i] == 0 && freq1[i] != 0) {
                return false;
            }
        }

        int used[26] = {0};

        for (int i=0; i<26; i++) {

            bool found = false;
            
            if (freq1[i] == 0) {
                continue;
            }

            for (int j=0; j<26; j++) {
                if (freq1[i] == freq2[j] && used[j] == 0) {
                    used[j] = 1;
                    found = true;
                    break;
                }
            }

            if (found == false) {
                return false;
            }
        }
        return true;
    }
};