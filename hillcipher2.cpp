#include<iostream>
using namespace std;
int modulo(int a, int b) {
    int result = a % b;
    return (result >= 0) ? result : (result + b);
}
int main(int argc, char const *argv[])
{
    int m;
    cout<<"type the m value";
    cin>>m;
    string plaintext;
    cout<<"type the plain text";
    cin>>plaintext;
     int l;
    int temp= plaintext.length()/m;
    l=temp+1;
    //the code for the key 
    int k[m][m];
    int p[l][m];
    int c[l][m];
    int n;
    cout<<"choose 1 for the key to be in string and 2 to be in integer";
    cin>>n;
    if(n==1){
        int x=0;
        string key;
        cout<<"type the string key ";
        cin>>key;
        for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            k[i][j]=key[x]-'A';
            x++;
        }
        }
    }
    else{
        cout<<"type the no's";
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                cout<<"type the k["<<i<<"]["<<j<<"]";
                cin>>k[i][j];
            }
        }
    }
  //the code for the plain text strats
  
    
    int o=0;
    for(int i=0;i<l;i++){
        for(int j=0;j<m;j++){
            p[i][j]= plaintext[o]-'a';
            o++;
        }
    }
  //the plaintext is stored in the array
   // encrypt starting

    for(int r=0;r<l;r++){
        int z =0;
        for(int q=0;q<m;q++){
            c[r][q]=0;
          for (int i = 0; i < m; i++) {
                c[r][q] += p[r][i] * k[q][i]; 
            }
       c[r][z] = modulo(c[r][z], 26);
        z++;
    }
    }
    for(int pr=0; pr<l;pr++){
        for(int qr=0;qr<m;qr++){
            cout<<c[pr][qr]<<" ";
        }
        cout<<endl;

    }

    return 0;
}
