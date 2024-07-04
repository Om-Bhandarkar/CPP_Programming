#include<iostream>
#include <math.h>
using namespace std;

class Solution{
    public:
        bool powerOfTwo(int num){
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
    bool ans = obj.powerOfTwo(num);
    cout<<ans;
    return 0;

}


// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter the Number : ";
//     cin>> num;
//     int flag = 0;
//     for (int i = 0;i<=30;i++){
//         int ans = pow(2,i);
//         if (ans == num){
//             flag = 1;
//         }
//     }
//     if(flag == 1){
//         cout <<"true";
//     }else{
//         cout <<"false";
//     }

//     return 0;
// }
