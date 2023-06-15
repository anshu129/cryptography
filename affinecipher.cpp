#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int k1;
    int k2;
    string temp;
    string cyphertext;
    cout<<"type the multiplicative key ";
    cin>>k1;
    cout<<"type the additive key ";
    cin>>k2;
    string plaintext;
    cout<<"type the plaintext you want to encrypt ";
    cin>>plaintext;
    int p[plaintext.length()];
    for(int i=0; i<plaintext.length();i++){
        p[i]=plaintext[i]- 'a';
    }
    for(int j=0; j<plaintext.length();j++){
        p[j]=p[j]*k1;
        p[j]=p[j]+k2;
        p[j]=p[j]%26;
    }
    for(int l=0; l<plaintext.length();l++){
        temp = p[l] + 'a';
        cyphertext= cyphertext + temp;
    }
    cout<<cyphertext;
    return 0;
}
