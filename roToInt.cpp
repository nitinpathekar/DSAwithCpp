class Solution {
public:
    int val(string r, int i) {
        if (r[i] == 'I') {
            return 1;
        }
        if (r[i] == 'V') {
            return 5;
        }
        if (r[i] == 'X') {
            return 10;
        }
        if (r[i] == 'L') {
            return 50;
        }
        if (r[i] == 'C') {
            return 100;
        }

        if (r[i] == 'D') {
            return 500;
        }

        if (r[i] == 'M') {
            return 1000;
        }
        return {};
    }
    int romanToInt(string s) {
        
        int num = 0;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s.length() == 1) {
                return val(s, 0);
            }
            if (val(s, i) >= val(s, i + 1)) {
                num += val(s, i);

            } else {
                num -= val(s, i);
            }
        }
        return num;
    }
};