////Important string commands
// in strings also if we take inputs with cin it takes until spaces only
// str.push_back('A');
// cout << str.substr(0, 7) << endl; // YE PAKKA BHULOGE->0 index se start karo aur 7 length ka ha
// str1.compare(str2)
// sentence.find(target) == string::npos//index return krega first letter ka
// // str.replace(0,4,word);//0 index se start krna hai 4 character hatane hain
// str.erase(10, 10); // 10th index se 10 character delete kr do

// STRINGS
#include <iostream>
#include <string>
using namespace std;
// string is a datatype collection of character
// character array is a data structure of character type
bool comparestring(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    else
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    // string str;
    // //cin>>str;//cin me space tak hi lega
    // getline(cin, str);
    // cout<<str<<endl;
    // cout << "length: " << str.length() << endl;
    //  cout << "is empty check :" << str.empty() << endl;
    // str.push_back('A');
    // cout << "after pushback :" << str << endl;
    // str.pop_back();
    // cout << "after pop back :" << str << endl;

    // cout << str.substr(0, 7) << endl; // YE PAKKA BHULOGE->0 index se start karo aur 7 length ka hai
    // cout << str;

    // string str1 = "Love";
    // string str2 = "Love";

    // if (str1.compare(str2) == 0)
    // {
    //     cout << "a and b are exactly same" << endl;
    // }
    // else
    // {
    //     cout << "a and b are not same " << endl;
    // }

    // string x = "bbbbabb";
    // string y = "bbbb";
    // cout << x.compare(y); // x ke pehle character ke ASCIIvalue ko y ke pehle character
    // se compare krega agar different hoga to
    //(x>y)->positive value (y>x)->negative value aur same hai pehla character to next character compare krega

    // string sentence = "hello ji kaise ho saare"; /// YAAD RAKHNA HAI
    // string target = "ji";

    // cout << sentence.find(target) << endl;     // index return krta hai
    // if (sentence.find(target) == string::npos) // output mila hai ya nhi check krne ke liye
    // {
    //     cout << "not found" << endl; 
    // }

    // string str = "This is my first message";
    // string word = "babbar";

    // str.replace(0, 4, word); // 0 index se start krna hai 4 character hatane hain
    // cout << str << endl;

    // str.replace(0, 5, "second"); // 0 index se start krna hai 5 character hatane hain
    // cout << str << endl;

    // string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // str.erase(10, 10); // 10th index se 10 character delete kr do
    // cout << str << endl;
    return 0;
}
