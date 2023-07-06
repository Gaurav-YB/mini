#include <bits/stdc++.h>
using namespace std;

string encode(string str, int shift)
{
    string d = str;
    for (int i = 0; i < str.length(); i++) 
    {
        char l, u;
        // Checks if the letter is uppercase , lowercase or if it is valid
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            l = 'A';
            u = 'Z';
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            l = 'a';
            u = 'z';
        } else 
        {
            return "Invalid ";
        }

        //  to Encod with positive and negative shifts
        if (str[i] + shift > u)
        {
            d[i] = str[i] - 26 + shift;
        } 
        else if (str[i] + shift < l) 
        {
            d[i] = str[i] + 26 + shift;
        } else
        {
            d[i] = str[i] + shift;
        }
    }
    return d;
}

int main() {
    string o, d;
    int shift;
    //take the input-character
    cout << "Enter the string to be encoded: ";
    cin >> o;
    //take the input-shift number
    cout << "Enter the shift: ";
    cin >> shift;
    d= encode(o, shift);
    //output
    cout << "The encoded string is: " << d;
    return 0;
}