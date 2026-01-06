//deletion of 1st element from array 
#include <iostream>
#include <vector>
using namespace std ;


int main(){
    vector<int> arr ={1,2,3,4,5};
    int n = arr.size();
   
    cout << "array before deletion :" ;
    for (int i = 0; i <= n ; i++)

    {
        cout << arr[i] << " ";
    }

    
    for (int i = 1; i <=n  ; i++) 
    {
      arr[i-1]=arr[i];
    }
    n--;
    

    cout << "\narray after deletion :";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " ";
    }

return 0;
}
