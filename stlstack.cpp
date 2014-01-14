#include<algorithm>
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main()
{

    stack<char> ch;
    char c;
    int flag = 0;
    string s;
    cin>>s;
    int len = s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i] == '(')
            ch.push(s[i]);
        else if(s[i] == ')')
        {
            if(ch.empty())
            {
                flag = 1;
                cout<<"invalid";
                break;
            }
           c = ch.top();
           if(c == '(')
           {
            ch.pop();

           }
           else
           {
               cout<<"invalid";
               break;
           }

        }

    }
    if(ch.empty() && flag==0) // if empty
        cout<<"valid";
    else if(!ch.empty()) // if not empty
        cout<<"invalid";
}
