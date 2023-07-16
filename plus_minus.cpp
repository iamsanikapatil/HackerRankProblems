#include<iostream>
#include <iomanip>
#include <cmath> 
using namespace std ;

int main()
{
    int arr[] = {1,1,-1,-1,0};

    int plus= 0 ;
    int minus = 0 ;
    int zero = 0 ;


    for(int i= 0 ; i < 5; i ++ )
    {
        if (arr[i] > 0 ) {
            
            plus ++;

        }
        else if (arr[i] < 0 ) {
            
            minus ++;
        }
        else {
            zero ++ ;
        }

    }

        float p = float(plus) / float(5) ;
        float  m = float(minus) / float(5 );
        float  z = float(zero) / float(5);

       //cout<<setprecision(6) << p ;

       printf("%.6f",p);
        cout<<"\n";
        printf("%.6f",m);
        cout<<"\n";
        printf("%.6f",z);
   
}