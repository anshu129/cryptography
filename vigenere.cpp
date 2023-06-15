#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string plaintext;
    string cyphertext;
    string alpha;
    int n;
    
    cout<<"type the no. of key are there in key stream ";
    cin>>n;
    int k[n];
    cout<<"type the key stream ";
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    cout<<"type the plaintext ";
    cin>>plaintext;
    int temp[plaintext.length()];
    for(int j=0;j<plaintext.length();j++){
      temp[j]=plaintext[j]-'a';
    }
    
        int o=0;
        for(int m=0; m<plaintext.length(); m++){
            if(o==n){
              o=0;
              temp[m]= temp[m]+k[o];
                temp[m]=temp[m]%26;
            o++;
            }
            else{
                temp[m]= temp[m]+k[o];
                temp[m]=temp[m]%26;
            o++;
            
            }
        }
    
    for(int p=0; p<plaintext.length();p++){
       alpha=temp[p] +'a';
       cyphertext=cyphertext+alpha;

    }
cout<<cyphertext;
    return 0;
}
