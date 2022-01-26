#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str){

    for(int i=0, j=str.size()-1; i<str.size(), j>=0;i++,j--){

            bool isPalindrome=false;
            if((str[i]==str[j])){
                isPalindrome = true;
            }else{
                isPalindrome = false;
            }

            if(isPalindrome==true)
                return true;
            else
                return false;
    }


}
int main(){
    string str;
    cout<<"Enter string"<<endl;
    cin>>str;
    cout<<"\n Palindrome status: "<<checkPalindrome(str)<<endl;

return 0;
}
