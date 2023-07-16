#include<iostream>
#include<vector>
#include <algorithm>  
using namespace std ;

int findMedian(vector<int> arr) {
    
    int c = 0 ;

    sort(arr.begin(), arr.end());

    for(int i : arr){
        c = c + 1;
    }   

    if(c % 2 != 0)
        return (double)arr[c/2]; 
    return (double)(arr[(c-1)/2] + arr[c/2]) / 2.0;

}


int main()
{

    vector<int> arr = {1,2,3,4,5,6,7,9};

    cout<<"Median is :";

    cout<< findMedian(arr);

    cout<<endl<<"array of sum  :";

    int sum = 0 ;
    int n = arr.size();

    for(int n : arr ){
        sum = sum + n ;
    }

    cout<<sum;

    cout<<endl<<"Mean is :";

    double ans = (double)sum / n;

    cout<< ans ;

    
}