class Solution {
public:



    int p1(int i, int size, string& s) {
        int counter = 0;
        if ( i >= 0 and i < size) counter += 1;
        int j = i + 1;
        i = i - 1;
        while (i > -1 and j < size ) {
            if (s[i] == s[j]) {
                counter += 1;
            } else { break;}
            i--; j++;

        }
        return counter;
    }

    int p2(int i, int j, int size, string& s) {
        int count = 0;
        if (i<0 or j>size - 1) return 0;
        if ( s[i] != s[j] ) { return 0;} else {
            count += 1;
        }
        i--; j++;

        while (i >= 0 and j < size ) {
            if (s[i] == s[j]) {
                count += 1;
            } else { break;}
            i--; j++;
        }

        return count;
    }

    int countSubstrings(string s) {
        int size = s.size();
        int counter = 0; // we exclude ends
        for (int i = 0 ; i < s.size(); i++) {
            counter += p1(i, size, s) + p2(i, i + 1, size, s);

        }
        return counter;
    }
};