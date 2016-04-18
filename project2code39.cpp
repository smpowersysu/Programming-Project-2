#include <iostream>

using namespace std;

int factorial(int x){
    int y = x;
    for(int n = 1; n < y; n++){
        x = x*(y - n);
    }
    if(x == 0)
        x = 1;
    return x;
}

int main(){

char a[9];

for (int i=0;i<9;i++){
        cout << "Enter w or n: ";
        cin >> a[i];//Puts w or n into char array
        if (a[i] != 'w' and a[i] != 'n')
        {
        cout << "Invalid input." ;
        return 0;
        }

int x[3],z=0;

for(int i=0;i<9;i++,z++){
    if(a[i]=='w')
    x[z]=8-i;//Fills int array with values 8-0 depending on w position
    else
    z=z-1;//Restricts making int array bigger than 3
    }

if(z!=3){//If z is not 3 too many or few wide bars entered
    cout << "The number of wide bars is invalid";
    return(1);}

int k=4;//k runs from 4-2
int q=0;//This is the decoded sum

for(int i=0;i<3;i++,k--){//Sums
    q=q+factorial(x[i])/(factorial(k)*factorial(x[i]-k));}

cout <<"\n" << q;
return 0;
}
