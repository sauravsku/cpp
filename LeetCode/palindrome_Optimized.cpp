#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s){

  int h=s.size()-1, l=0;
        bool isPalindrome=true;
        while(h>l){
            if(s[l++]!=s[h--])
                isPalindrome= false;
        }
        return isPalindrome;

}
int main(){
    string str;
    cout<<"Enter string"<<endl;
    cin>>str;
    cout<<"\n Palindrome status: "<<checkPalindrome(str)<<endl;

return 0;
}

