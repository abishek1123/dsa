class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int i = 0 ;
        unordered_map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int total=0;
        for(i=0;i<n;i++)
        {
            if(mp[s[i+1]]>mp[s[i]])
            {
                    total=total+(mp[s[i+1]]-mp[s[i]]);
                    i++;
            }
            else
            {
                total=total+mp[s[i]];
            }
        }
        return total;  
    }
};