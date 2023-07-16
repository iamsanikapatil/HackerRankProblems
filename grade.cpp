#include<iostream>
#include <iomanip>
#include<vector>
using namespace std ;

vector<int> gradingStudents(vector<int> grade) {

    vector<int> ans;

    for(int i : grade){

        if(i >=38 ){
            int rem = i % 5 ;
            if(rem <= 3 ){

                i = i + 5 - rem ;

               ans.push_back(i);

            }else if( rem == 3 ){
                ans.push_back(i);
               
            }
        }
        else{
            ans.push_back(i);
        }
    }
    
    return ans ;
    

}

int main()
{

    vector<int> grade = {83,33, 56, 67, 73};


    vector<int> result = gradingStudents(grade);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    return 0 ;
}