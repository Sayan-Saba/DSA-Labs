#include <iostream>
using namespace std;
  
// function to heapify the tree
void heapify(int arr[], int n, int root)
{
   // build heapify
   int largest =root;
   int left_child = 2*root +1;
   int right_child = 2*root +2;
   

   //To check whether the left child is larger than the root
   if (left_child < n && arr[left_child] >arr[largest]) {
    largest = left_child;
   }
    //To check whether the right child is larger than the root or left child
    if (right_child <n && arr[right_child] > arr[largest]){
        largest = right_child;
    }

    //If largest is not root, swap with the largest child and heapify the affected sub tree
    if (largest != root){
        swap(arr[root], arr[largest]);
        //To heapify the subtree recursively
        heapify(arr, n,largest); 
    }
   
}
  
// implementing heap sort
void heapSort(int arr[], int n)
{
   // build heap
   for (int i = n / 2-1 ; i >= 0 ; i--){
    heapify(arr,n,i);
   }
  
   // extracting elements from heap one by one
   for (int i=n-1;i>0;i--){
    swap(arr[0], arr[i]);
    heapify(arr, i, 0);

   }

}
  
/* print contents of array */
void displayArray(int arr[], int n)
{
   for (int i=0; i<n; ++i)
   cout << arr[i] << " ";
   cout << "\n";
}
  
// main program
int main()
{

   int arr_size; // variable to hold the size of the array
   cout << "Enter the size of the array: ";
   cin >> arr_size;

   int arr[arr_size]; // declare an array of integers with size sizeofarray
   cout<<"Input array"<<endl;

    // read in the integers and store them in the array
    for (int i = 0; i < arr_size; i++) {
        cin >> arr[i];}
  
   heapSort(arr, arr_size);
  
   cout << "Sorted array"<<endl;
   displayArray(arr, arr_size);
  

}
