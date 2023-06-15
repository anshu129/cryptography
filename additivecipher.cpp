#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int k;
    string plaintext;
    string cyphertext;
    string temp;
    cout<<"the secret key is";
    cin>>k;
    //taking palintext 
    cout<<"type the plain text you want to encrypt";
    cin>>plaintext;
    //storing it in the form of integer
    int a[plaintext.length()];
    for(int i=0; i<plaintext.length();i++){
        a[i]=plaintext[i]-'a';
    }
    for(int j=0; j<plaintext.length();j++){
        a[j]=a[j]+k;
        a[j] = a[j]%26;
    }
    for(int l=0;l<plaintext.length();l++){
        temp = 'a' + a[l]; 
        cyphertext = cyphertext + temp;
     }
    cout<<cyphertext;
    return 0;
}
