/*

ZOOS


Problem
You are required to enter a word that consists of  and  that denote the number of Zs and Os respectively. The input word is considered similar to word zoo if 
2 X x =y.

Determine if the entered word is similar to word zoo.

For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

Input format

First line: A word that starts with several Zs and continues by several Os.
Note: The maximum length of this word must be 20 .
Output format

Print Yes if the input word can be considered as the string zoo otherwise, print No.

Sample Input
zzzoooooo
Sample Output
Yes
Time Limit: 0.5
Memory Limit: 256
*/

#include <iostream>
 
#include<string>
 
using namespace std;
 
 
 
int main()
 
{
 
    string word;
 
    cin>>word;
 
 
 
    int cz = 0;
 
    int co = 0;
 
 
 
    for(int i = 0; i<20; i++)
 
    {
 
        if(word[i] == 'z')
 
            cz++;
 
 
 
        else if(word[i] == 'o')
 
            co++;
 
    }
 
    if(cz*2==co)
 
        cout<<"Yes";
    else
 
        cout<<"No";
 
}
