#include <iostream>

using namespace std;

int LinearSearch(int arr[], int n, int key){


    for (int i=0; i < n; i++){

        if (arr[i] == key)

            return i;
    }

return -1;





}


int main()
{

  int arr[] = {1,2,3,5,6};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Enter the element" << endl;
  int num;
  cin >> num;
  int result = LinearSearch(arr , n , num);



  if (result == -1)
    cout << "Element not found!" << endl;

  else
    cout << "Element (" << num << ") was found at the index :" << result << endl;


    return 0;
}
