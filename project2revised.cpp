#include <iostream>
#include <string>
using namespace std;

int factorial_39(int x);
int factorial_48(int n);
int choose_48(int n, int k);

int main(){
int type;
    do{
    cout << "0 = exit program" << endl;
    cout << "1 = simple binary" << endl;
    cout << "2 = code 39" << endl;
    cout << "3 = code 48" << endl;
    // display choices for user
    cout << "\nWhich code do you want to decrypt? " << endl;
    cin >> type; //ask for input
    if(type == 1){
    int b; //number of bars
    int i = 0; //loop variables
    int d = 0;
    int l = 0;
    cout << "Number of bars in code (between 1 and 21): " ;
    cin >> b;
    char arraychars[b]; //barcode as w's and n's
    int arrayint[b]; //whole barcode as ints
    while (b <= 21 && b >= 1) //b is in range
    {
    for (i=0; i<b; i++)
    {
    cout << "Enter character (w for wide, n for narrow): ";
    cin >> arraychars[i];
    }
    for (d=0; d<b; d++)
    {
    if (arraychars[d] == 'w')
    arrayint[d] = 1;
    else if (arraychars[d] == 'n')
    arrayint[d] = 0;
    else
    break;
    }
    for (l=0; l<d; l++)
    cout << arrayint[l] ;
    break; //exits loop
    } //while loop
    }
    else if(type == 2){
    char a[9];
    for (int i=0;i<9;i++){
    cout << "Enter w or n: ";
    cin >> a[i];}//Puts w or n into char array
    int x[3],z=0;
    for(int i=0;i<9;i++,z++){
    if(a[i]=='w')
    x[z]=8-i;//Fills int array with values 8-0 depending on w position
    else
    z=z-1;}//Restricts making int array bigger than 3
    if(z!=3)//If z is not 3 too many or few wide bars entered
    cout << "The number of wide bars is invalid";
    else if(z==3){
    int v=4;//k runs from 4-2
    int q=0;//This is the decoded sum
    for(int i=0;i<3;i++,v--){//Sums
    q=q+factorial_39(x[i])/(factorial_39(v)*factorial_39(x[i]-v));}
    cout <<"\n" << q;
    }}
    else if(type == 3){
    string barcode;
    int x2[4]; //puts the values of n into an array
    int z2[4]; // values of k2 into an array
    int j=0; //place holder for the values of b[i]
    int f=0; // output value
    int k2=4; //values of k2 that decrement so that we can use them for z
    int w=0;
    for(int p=7; p>=0; p--)
    {
    cout << "Enter your barcode(b&w): ";
    cin >> barcode[p];
    if(barcode[p] == 'b' && k2>0)
    {
    x2[j] = p;
    z2[j] = k2;
    k2--;
    j++;
    }
    else if (barcode[p] == 'w')
    w++;
    }
    if (j!=4 || w!=4)
    {
    cout << "The number of b's is not correct.";
    }
    else if (j==4){
    for(int p = 0; p<4; p++)
        {
        if(x2[p] >= z2[p]){
        f += choose_48(x2[p], z2[p]);
        }
        else
        f+= 0;
        }
        cout << f;
        }
        }
    else{
        cout << "Invalid input." << endl;
        }
        cout << "\n\n";
    }while(type != 0); //repeat program until user inputs "0"
return 0;
}
//--------Functions
int factorial_39(int x){
int y = x;
for(int n = 1; n < y; n++)
{
x = x*(y - n);
}
if(x <= 0)
x = 1;
return x;
}

int choose_48(int n, int k2){
int u;
int t = n-k2;
//cout <<"called";
u = factorial_48(n)/(factorial_48(k2)*factorial_48(t));
return u;
}
int factorial_48(int n){
for(int i = n-1; i>0; i--){
n = n*i;
}
if(n==0){
n=1;
}
return n;
}
