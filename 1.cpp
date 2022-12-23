#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
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

int max(int b[3][2],int row,int col);

float avg(int b[][2],int rows,int col);

void findmaxind(int b[][2],int rows,int col,int max);
//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{
//Declar array and show variable
int a[3][2] = {{15,18} , {19,12} , {14,117}};

//Show array
show(a,3,2);


//Seperator
cout<<endl<<"-------------------------"<<endl;

//Maximum of values

int max2 = max(a,3,2);

cout<<"Maximum of values = "<<max2;

//Seperator
cout<<endl<<"-------------------------"<<endl;

//Show of index array

findmaxind(a,3,2,max2);


//Seperator
cout<<endl<<"-------------------------"<<endl;

//avarage of number
    cout<<fixed<<setprecision(2);
cout<<"Average of number = "<<avg(a,3,2);

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

//--------------------------------

//Function for find maximum of values
int max(int b[3][2],int row,int col)
{

    int max = b[0][0];

     for(int i = 0; i<row; ++i)
     {
        for(int j = 0; j<col; ++j)
        {
         
            if(max < b[i][j])
            {
            max = b[i][j];
            }
        }
     }

     return max;
}

//--------------------------------------------

//This function find index if max
void findmaxind(int b[][2],int rows,int col,int max)
{


     for(int i = 0; i<rows; ++i)
     {
        for(int j = 0; j<col; ++j)
        {
         
            if(max == b[i][j])
            {

            cout<<"Index of max array = "<<"b["<<i<<"]"<<"["<<j<<"]";
            cout<<endl;
            cout<<"Max in Rows"<<(i+1);
            cout<<endl;

            }
        }
     }

}

//---------------------------------------------

//Function for Calc avarage

float avg(int b[][2],int rows,int col)
{

float avg1;
float sum = 0;

for(int i=0; i<rows; ++i)
{
    for(int j=0; j<col; ++j)
    {
        sum += b[i][j];
    }
}

avg1 = sum/(rows * col);

return avg1;
}