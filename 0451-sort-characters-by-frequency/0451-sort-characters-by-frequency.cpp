class Solution {
public:
    string frequencySort(string s) {
        int freq[256] = {0};

        for (int i=0; i<s.length(); i++) {
            freq[s[i]]++;
        }

        string st = "";

        for (int k=0; k<256; k++) {
        int maxfreq = 0;
        char maxchar = -1;
        for (int i=0; i<256; i++) {
            if (freq[i] > maxfreq) {
                maxfreq = freq[i];
                maxchar = i;
            }  
        }
        // No characters left
            if (maxchar == -1)
                break;
        while (maxfreq > 0){
                        st += maxchar;
                        maxfreq--;
                    
        }
        freq[maxchar] = 0;
        }
        return st;
    }
};