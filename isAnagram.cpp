class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        // Hash maps
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;
        // Check for incompatible lengths
        if (s.size() != t.size())
            return false;
        // Loop to fill hash maps
        for (int i = 0; i < s.size(); i++)
        {
            countS[s[i]]++;                 // Sets key to the frequency of char   
            countT[t[i]]++;
        }
        // Check for failure
        if (countS != countT)               // Compares the hash maps
            return false;

        return true;
    }
};