// insertion at a given position of the array 

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

    int idx = 3;
    for (int i = n ; i> idx ; i--) //shifting elements to right 
    {
      arr[i]=arr[i-1];
    }
    arr[idx] = ele; //inerting the element 

    cout << "\narray after insertion :";
    for (int i = 0; i <= n; i++)
    {
        cout<< arr[i] << " ";
    }

return 0;
}