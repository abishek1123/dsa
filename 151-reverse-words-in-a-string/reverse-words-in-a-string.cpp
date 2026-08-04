#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {

        string sr = "";
        string h = "";
        vector<string> a;

        int c = 1;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                sr += s[i];
                c = 0;
            }
            else
            {
                if (c == 0)
                {
                    sr += ' ';
                    c = 1;
                }
            }
        }

        if (!sr.empty() && sr.back() == ' ')
            sr.pop_back();

        for (int i = 0; i < sr.length(); i++)
        {
            if (sr[i] != ' ')
            {
                h += sr[i];
            }
            else
            {
                a.push_back(h);
                h = "";
            }
        }

        if (!h.empty())
            a.push_back(h);

        sr = "";

        for (int i = a.size() - 1; i >= 0; i--)
        {
            sr += a[i];

            if (i != 0)
                sr += " ";
        }

        return sr;
    }
};