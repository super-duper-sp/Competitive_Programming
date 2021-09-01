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
