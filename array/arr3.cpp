//insertion at the begining of the array 


#include <iostream>
#include <vector>
using namespace std ;


int main(){
    vector<int> arr ={1,2,3,4,5};
    int n = 5;
    int ele = 6;
    cout << "array before insertion :" ;
    for (int i = 0; i < n ; i++)

    {
        cout << arr[i] << " ";
    }
    for (int i = n ; i>=0 ; i--) //shifting elements to right 
    {
      arr[i]=arr[i-1];
    }
    arr[0] = ele; //inerting the element 

    cout << "\narray after insertion :";
    for (int i = 0; i <= n; i++)
    {
        cout<< arr[i] << " ";
    }

return 0;
}