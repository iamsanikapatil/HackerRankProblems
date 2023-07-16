#include<iostream>
#include <iomanip>
#include<vector>
using namespace std ;

void plusMinus(vector<int> arr) 
{
    
    int plus = 0;
    int minus = 0 ; 
    int zero = 0 ;
   
    int s = arr.size();

    cout<<s<<endl ;

    for(auto& i : arr )
    {
        if (i > 0 ) {
            
            plus ++;
        }
        else if (i < 0 ) {
            
            minus ++;
        }
        else {
            zero ++ ;
        }

    }
        float p = float(plus) / float(s) ;
        float  m = float(minus) / float(s);
        float  z = float(zero) / float(s);

        
        printf("%.6f",p);
        cout<<"\n";
        printf("%.6f",m);
        cout<<"\n";
        printf("%.6f",z);
    
    

}

int main()
{
    vector<int> arr = { 1,2,-1,-3,0};

    plusMinus(arr);

    return 0 ;
}