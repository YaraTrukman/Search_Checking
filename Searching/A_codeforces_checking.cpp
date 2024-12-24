#include<iostream>
#include<string>
using namespace std;
int main(){
        string str= "codeforces";
    int t;
    cin>>t;
    while (t--)
    {
        char c;
        cin>>c;

        bool flag = 0;
        for(int i=0 ; i<str.size() ; i++)
        {
            if(str[i] == c)
            {
                flag = 1;
                break;
            }
        }
        if (flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
     }
    
    
  
  return 0;
}