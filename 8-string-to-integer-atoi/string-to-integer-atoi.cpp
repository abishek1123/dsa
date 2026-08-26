class Solution {
public:
    int myAtoi(string s) {
        int start = s.find_first_not_of(' ');

        if (start == string::npos)
            return 0;

        int i = start;
        int sign = 1;
        long long result = 0;

        if (s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (s[i] == '+') {
            i++;
        }

        while (i < s.size() && isdigit(s[i])) {
            int num = s[i] - '0';

            result = result * 10 + num;

            if (sign == 1 && result > 2147483647)
                return 2147483647;

            if (sign == -1 && result > 2147483648LL)
                return -2147483648LL;

            i++;
        }

        return sign * result;
    }
};