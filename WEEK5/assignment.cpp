// LEETCODE
// 242 VALID ANAGRAM
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int frequencytable[256] = {0};//only 256 characters are possible in char data type
        if (s.size() != t.size())
        {
            return false;
        }
        else
        {
            for (int i = 0; i < s.size(); i++) // s ke table me map krenge saare character ko
            {
                frequencytable[s[i]]++;
            }
            for (int i = 0; i < t.size(); i++) // s ke table map me se t ke  characers ke map ko substract krenge iske saare character ke mapping ko
            {
                frequencytable[t[i]]--;
            }
            for (int i = 0; i < s.size(); i++)
            {
                if (frequencytable[s[i]] != 0) 
                // agar zero hai poora table iska matlab saare characters 
                //jo s ke table me hain vo t ke saare charcters se match ho
                // gye hain aur finally table me kuch nhi bach hai
                    return false;
            }
            return true;
        }
    }
};

// LEETCODE
// 917 REVERSE ONLY LETTERS
class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        int i = 0;
        int j = s.size() - 1;
        while (i < j)
        {
            if (isalpha(s[i]) && isalpha(s[j])) // agar alphabet hai tabhi swap krenge
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if (!isalpha(s[i])) // left side nahi hai iska matlab i increase hoga
            {
                i++;
            }
            else if (!isalpha(s[j])) // right side nhi hai iska matlab j decrease hoga
            {
                j--;
            }
        }
        return s;
    }
};

// LEETCODE
// 14. Longest Common Prefix
class Solution
{
    //prefix check krna hai matlab left se start krna hai check krna 
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans;
        int i = 0;
        while (true)
        {
            char curr_ch = 0;//zero maan ne  ka reason ye bhi hai ki hamlofg ko ek condition mil jaayega while loop se bahar aane ka 
            for (auto str : strs)
            {
                if (i >= str.size())//agar kisi bhi string ke size se bada hai iska matlab wo out of bound ho jaayega
                { 
                    curr_ch = 0;
                    break;//for loop se bahar aa jaayenge
                }
                // just started
                if (curr_ch == 0)//abhi uninitialised hai
                {
                    curr_ch = str[i];
                }
                else if (str[i] != curr_ch)//baaki ki strings se compare krenge
                {
                    curr_ch = 0;
                    break;//for loop se bahar aa jaayenge
                }
            }
            if (curr_ch == 0)
            {
                break;
            }
            ans.push_back(curr_ch);
            i++;
        }
        return ans;
    }
};

// LEETCODE
// 345.REVERSE VOWELS OF A STRING
class Solution
{
public:
    bool isvowel(char ch)
    {
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string reverseVowels(string s)
    {
        int i = 0;
        int j = s.size() - 1;
        while (i < j)
        {
            if (isvowel(s[i]) && isvowel(s[j]))
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if (isvowel(s[i]) == 0)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return s;
    }
};

// LEETCODE
// 205. Isomorphic Strings

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int map[256] = {0};           // mapping of each character of language 's' to 't'
        bool ismapped[256] = {false}; // will keep track that one character of s is already mapped to t
        for (int i = 0; i < s.size(); i++)
        {
            if (map[s[i]] == 0 && ismapped[t[i]] == false)
                map[s[i]] = t[i];
            ismapped[t[i]] = true;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (char(map[s[i]]) != t[i])
            {
                return false;
            }
        }
        return true;
    }
};

// LEETCODE
// 767. Reorganize String
class Solution
{
public:
    string reorganizeString(string s)
    {
        int hash[26] = {0}; // 91-122 lowercase letters only
        for (int i = 0; i < s.size(); i++)
        {
            hash[s[i] - 'a']++;
        }
        // find the most occuring character
        char max_freq_char;
        int max_freq = INT_MIN;
        for (int i = 0; i < 26; i++)
        {
            if (hash[i] > max_freq)
            {
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }
        int index = 0;
        // max frequency character ko place krenge end tak
        while (max_freq > 0 && index < s.size())
        {
            s[index] = max_freq_char;
            max_freq--;
            index += 2;
        }
        // check krenge ki poora end tak place hua ya nhi

        if (max_freq != 0)
        {
            return "";
        }

        hash[max_freq_char - 'a'] = 0;
        // place ho gya hai to iska hash zero kar denge
        // let's place rest of characters
        for (int i = 0; i < 26; i++)
        {
            while (hash[i] > 0)
            {
                index = index >= s.size() ? 1 : index;
                s[index] = i + 'a';
                hash[i]--;
                index += 2;
            }
        }
        return s;
    }
};

// 49 GROUP ANAGRAMS
// method1

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<string, vector<string>> mp;
        // map banayenge sorted string ko strings se map krne ke liye
        for (auto str : strs)
        {
            string s;
            s = str;
            sort(s.begin(), s.end());
            mp[s].push_back(str); // sort kr ke map krenge taaki group bana sake
        }
        vector<vector<string>> ans; // answer storage ke liye
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            ans.push_back(it->second); // map ka  second part answer me return krna hai is liye
        }
        return ans;
    }
};
// method 2
// without sorting
class Solution
{
public:
    std::array<int, 256> hash(string s) // hash map banayenge array ka use kr ke
    {
        std::array<int, 256> hash = {0}; // sabka zero se initialise krenge
        for (int i = 0; i < s.size(); i++)
        {
            hash[s[i]]++;
        }
        return hash;
    }

    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {

        //  METHOD2
        map<std::array<int, 256>, vector<string>> mp; // ye yaad rakhna hai stl me arrays aise create kr skte hain

        for (auto str : strs)
        {                                 // map ka key element hash return krega jisko strings se map krenge
            mp[hash(str)].push_back(str); // O(NK) har string ke liye hash ko call kr rha hai
        }
        vector<vector<string>> ans;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
}

// LEETCODE 5
//  Given a string s, return the longest
//  palindromic
//  substring
//  in s.
//  Example 1:
//  Input: s = "babad"
//  Output: "bab"
//  Explanation: "aba" is also a valid answer.

class Solution
{
public:
    bool ispallindrome(string &s, int start, int end)
    {
        while (start < end)
        {
            if (s[start] != s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    };
    string longestPalindrome(string s)
    {

        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++)
            {
                if (ispallindrome(s, i, j))
                {
                    string t = s.substr(i, j - i + 1);
                    if (ans.size() < t.size())
                    {
                        ans = t;
                    }
                }
            }
        }
        return ans;
    }
};

// 28. Find the Index of the First Occurrence in a String
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int m = needle.size();
        int n = haystack.size();
        for (int i = 0; i <= n - m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (needle[j] != haystack[i + j])
                {
                    break;
                }
                if (j == m - 1)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};

// LEETCODE 8. String to Integer (atoi)
class Solution
{
public:
    int myAtoi(string s)
    {
        int num = 0;
        int i = 0;
        int sign = 1; // consider iniially as positive

        // remove spaces
        while (s[i] == ' ')
        {
            i++;
        }

        // finding sign
        if (i < s.size() && s[i] == '+' || s[i] == '-')
        {
            sign = s[i] == '+' ? 1 : -1;
            i++;
        }

        while (i < s.size() && isdigit(s[i]))
        {
            if ((num > INT_MAX / 10) || (num == INT_MAX / 10 && s[i] > '7'))
            {
                return sign == -1 ? INT_MIN : INT_MAX;
            }

            num = num * 10 + (s[i] - '0');
            i++;
        }
        return sign * num;
    }
};

// LEETCODE-443
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int index = 0;        // index lenge ek ek shift kr ke store krne ke liye
        char prev = chars[0]; // ek previous character consider krenge compare krne ke liye
        int count = 1;        // count lenge occurence ka store rakhne ke liye
        for (int i = 1; i < chars.size(); i++)
        {
            if (chars[i] == prev)
            {
                count++; // increase krenge count agar previous character aur current character same hoga
            }
            else
            {
                chars[index++] = prev;
                if (count > 1) // agar count bada hoga to ek ek character ke jaise store krna hoga
                {
                    int start = index;
                    while (count)
                    {
                        chars[index++] = (count % 10) + '0'; // character ke form me store krna hai isi liye '0' add kr rhe hain
                        count /= 10;
                    }
                    reverse(chars.begin() + start, chars.begin() + index); // start se index-1 tak reverse krna hoga
                }
                count = 1;       // reset
                prev = chars[i]; // naya previous
            }
        }

        // jap loop ke bahar aa jayenge to last waale ko store krna padega
        chars[index++] = prev;
        if (count > 1) // agar count bada hoga to ek ek character ke jaise store krna hoga
        {
            int start = index;
            while (count)
            {
                chars[index++] = (count % 10) + '0'; // character ke form me store krna hai isi liye '0' add kr rhe hain
                count /= 10;
            }
            reverse(chars.begin() + start, chars.begin() + index); // start se index-1 tak reverse krna hoga
        }
        return index;
    }
};

// LEETCODE 12. Integer to Roman
class Solution
{
public:
    string intToRoman(int num)
    {
        string romanSymbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}; // value upar ke saare symbols ka
        string ans = "";
        for (int i = 0; i < 13; i++) // total 13 symbols hain highest value symbol se shuru krenge
        {   
            while (num >= values[i])
            {
                ans += romanSymbols[i];
                num -= values[i];
            }
        }
        return ans;
    }
};

// LEETCODE 6. Zigzag Conversion
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
        {
            return s;
        }
        vector<string> zigzag(numRows);
        int i = 0;
        int row = 0;
        bool direction = 1; // Top->Bottom

        while (true)
        {
            if (direction == 1)
            {
                while (row < numRows && i < s.size())
                {
                    zigzag[row++].push_back(s[i++]);//row plus krenge aur ek ek kr se elements daalte jaayenge 
                }
                row = numRows - 2;//kyonki row ek zyaada badh jaayega loop se bahar aane ke baad
            }
            else // jab ulte direction wala case ho
            {
                while (row >= 0 && i < s.size())
                {
                    zigzag[row--].push_back(s[i++]);//row minus krenge aur ek ek elements daalte jaayenge
                }
                row = 1; // fir se initialise krna hoga row ko
            }
            if (i >= s.size())
            {
                break;
            }
            direction = !direction; // change direction krna hoga zig zag krne ke liye
        }
        string ans = ""; // to store answer
        for (int i = 0; i < zigzag.size(); i++)
        {
            ans += zigzag[i];
        }
        return ans;
    }
};

// LEETCODE 179. Largest Number
class Solution {
public:

static bool mycomparator(string a,string b)
{// ex:- a=30  b=3
string t1=a+b;//a+b=303
string t2=b+a;//b+a=330(bada hai)
return t1>t2;
}
    string largestNumber(vector<int>& nums) 
    {
        vector<string>snums;
        for(auto n:nums)
        {
            snums.push_back(to_string(n));
        }
        sort(snums.begin(),snums.end(),mycomparator);
         //lexicographical sorting in string
         string ans="";
        if(snums[0]=="0") return "0"; //first character zero hai iska matlab largest zero hai aur saare positive numbers hi hain jisme se largest zero hai iska automatically matlab saare zero hain matlab sirf zero retuen kar do
         for(auto str : snums) 
         {
             ans+=str;
         }
         return ans;
    }
};