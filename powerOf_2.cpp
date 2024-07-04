#include<iostream>
#include <math.h>
using namespace std;

class Solution{
    public:
        int powerOfTwo(int num){
            for (int i =0;i<=30;i++){
                int ans = pow(2,i);
                if (ans == num){
                    return true;
                }
            }
            return false;
        }
};
int main(){
    int num;
    cout<< "Enter Number : ";
    cin>>num;
    Solution obj;
    int ans = obj.powerOfTwo(num);
    cout<<ans;
    return 0;

}