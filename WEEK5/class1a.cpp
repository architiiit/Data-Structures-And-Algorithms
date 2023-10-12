//IMPORTANT TO REMEMBER
// if cin is used to take input then space is considered as a null character
// strlen(name)-> lengthn of string 
// cin.getline(name,20)-> is used to take inputs with spaces









// CHAR AND STRING ARRAYS

// cin strings tab tak hi read krega jab tak spaces ya tabs ya new line na aa jaaye
#include <iostream>
#include <string.h>
using namespace std;
int getlength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
// TIME COMPLEXITY O(n)
// SPACE COMPLEXITY O(1)

void reversechararray(char name[])
{
    int i = 0;
    int n = getlength(name);
    int j = n - 1;
    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
// TIME COMPLEXITY O(n/2)->O(n)
// SPACE COMPLEXITY O(1)

void replacespaces(char sentence[])
{
    int i = 0;
    int n = strlen(sentence);   // O(n) time taken
    for (int i = 0; i < n; i++) // O(n) time
    {
        if (sentence[i] == ' ')
        {
            sentence[i] = '@';
        }
    }
}
// TIME COMPLEXITY O(n)
// SPACE COMPLEXITY O(1)

bool checkpallindrome(char word[])
{
    int i = 0;
    int n = strlen(word);
    int j = n - 1;

    while (i <= j)
    {
        if (word[i] != word[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
// time complexity O(n)
// space complexity O(1)

void convertintouppercase(char arr[])
{
    int n = getlength(arr);

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 'a' + 'A';
    }
}
// time complexity O(n)
// space complexity O(1)

void convertintolowercase(char arr[])
{
    int n = getlength(arr); // O(n)

    for (int i = 0; i < n; i++) // O(n)
    {
        arr[i] = arr[i] - 'A' + 'a';
    }
}
// time complexity O(n)
// space complexity O(1)
int main()
{

    // char name[100];
    // cout << "enter your name" << endl;
    // // ek saath bhi le sakte hain input arrays ki tarah input nhi lena hota hai
    // cin >> name; // by default ek null character input ke end me daal jaayega '/0'
    // cout << "your name is " << name << " hai" << endl;
    //*******************************
    // // le skte hain eke eke kr ke
    // char ch[100];
    // ch[0] = 'a';
    // ch[1] = 'b';
    // cin >> ch[2];
    // cout << ch[0] << ch[1] << ch[2] << endl;

    // //********************************

    char name[100];
    cin >> name;
    for (int i = 0; i < 7; i++)
    {
        cout << "index :" << i << " value: " << name[i] << endl;
    }

    int value = (int)name[6];               // agar 6 size ka word le raha hai
    cout << "value is : " << value << endl; // ye null character hai jo BABBAR ke baad add ho jaata hai uska ASCII value 0 hota hai

    // // //*****************************
    // char ch[100];
    // cin >> ch;
    // cout << ch; // sirf space ya tab ya enter ke pehle tak hi read karega
 
    //******************************************
    // char ch[100];
    // // getline(cin,ch);
    // cin.getline(ch, 50); // can take inputs with spaces tabs
    // cout << ch;
    //************************
    // length of string
    // char name[100];
    // cin >> name;
    // cout << "length is " << getlength(name) << endl;
    // cout << "length is " << strlen(name) << endl;
    // ************************
    // //reverse a string
    // char name[100];
    // cin >> name;
    // cout << "initially " << name << endl;
    // reversechararray(name);
    // cout << "finally :" << name << endl;

    // //***********************************
    // // replace all spaces by @ symbol

    // char name[100];
    // cin.getline(name, 100);
    // replacespaces(name);
    // cout << "printing sentence " << endl
    //      << name << endl;

    // // ********************************
    // // pallindrome check
    // // we will use 2 pointer approach
    // char arr[100] = "babbar";
    // cout << "pallindrome check :" << checkpallindrome(arr) << endl;

    // //**************************************************
    // //convert uppercase
    // char arr[100] = "babbar";
    // convertintouppercase(arr);
    // cout << arr << endl;

    // //**************************************************
    // // convert loweruppercase
    // char arr[100] = "BABBAR";
    // convertintolowercase(arr);
    // cout << arr << endl;

    // //*************************************************

    return 0;
}