#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
//create namespace
/*Branch name
*
*
*/
//prototype
void show(int b[][2],int row,int col);
//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{
//Declar array and show variable
int a[3][2] = {{15,18} , {19,12} , {14,17}};

//Show array
show(a,3,2);



getch();
}
//function variable

//--------------------------
//functions

//for show variable of function
void show(int b[][2],int row,int col)
{
    cout<<"number"<<"    c++   php"<<endl;
    cout<<"--------------------------"<<endl;
    for (int i=0; i<row; ++i)
    {
        cout<<"Row "<<(i + 1)<<" : ";
        for(int j=0; j<col; ++j)
        {
          cout<<"   "<<b[i][j];
        }
        cout<<endl;
    }
}

