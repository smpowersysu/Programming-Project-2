#include <iostream>
#include <string>
using namespace std;

string barcode;
int factorial(int n);
int choose(int n, int k);
int x[4]; //puts the values of n into an array
int z[4]; // values of k into an array
int j; //place holder for the values of b[i]
int f; // output value
int k = 4; //values of k that decrement so that we can use them for z
int w;

int main(){
    for(int i=7; i>=0; i--){
       cout << "Enter your barcode(b&w): ";
        cin >> barcode[i];

        if(barcode[i] == 'b'){
            x[j] = i;
            z[j] = k;
            k--;
            j++;
        }
        else if(barcode[i] == 'w'){
            w++;
        }
    }
    if(j!=4 || w!=4){
        cout << "The number of b's is not correct";
    }
    else if(j==4){
    for(int i; i<4; i++){
        if(x[i] >= z[i]){
           f += choose(x[i], z[i]);
        }
        else{
           f+= 0;
        }
    }
    cout << f;
    }
}

int choose(int n, int k){
    int u;
    int t = n-k;
    //cout <<"called";
    u = factorial(n)/(factorial(k)*factorial(t));
    return u;
}

int factorial(int n){
    for(int i = n-1; i>0; i--){
        n = n*i;
    }
    if(n==0){
        n=1;
    }
    return n;
}
