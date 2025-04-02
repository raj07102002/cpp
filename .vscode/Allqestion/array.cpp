#include <iostream> 
using namespace std; 
int main(){ 

    // int arr[10]={1,2,5}; // stored rest values are (0) zero 
    // int arr[5]; // stored garbage value 
    // int s=sizeof(arr)/sizeof(arr[0]); // length of array  
    // cout<<"length of array="<<s<<"\n";  

    // for(int i=0,i<s,i++){ 
    //     cout<<arr[i]<<" "; // display the values of array
    // }    


    // Q1. W.A.P to display only even number in given values


    // int arr[5]; 
   
    // int s=sizeof(arr)/sizeof(arr[0]); // length of array  
    // cout<<"length of array="<<s<<" ";  
    // cout<<"enter "<<s<<" values\n"; 
    // for (int i = 0; i<s; i++)
    // {
    //     cin>>arr[i];/* code */
    // }
    // cout<<"\nstored data are\n";
    // for(int i=0;i<s;i++){  
    //     if (arr[i]%2==0)
    //     {
    //         cout<<arr[i]<<" ";/* code */
    //     }
        
    //      // display the values of array
    // }    

    // Q2. W.A.P to print the minimum value of the given number 

//     int arr[5]={2,9,1,5,3},min=0; 
//     int s=sizeof(arr)/sizeof(arr[0]);
//     cout<<"length of array="<<s<<"\n"; 
// min=arr[0];
//     for (int i = 0; i < s; i++)
//     {
//         if(arr[i]<min)/* code */ 
//         min=arr[i];
//     }  
//     cout<<"minimum value of the : "<<min;  

    // Q.3 W.A.P to print the maxmimum value of the given number

    int arr[5]; int max;
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"length of array : "<<s<<"\n";
    max=arr[0]; 
    for (int i = 0; i < s; i++)
    {
      cin>>arr[i]; /* code */
    }
    for (int i = 0; i < s; i++)
    {
       if (arr[i]>max)
       
         max=arr[i];/* code */
       
      /* code */
    }  
    cout<<"maxmimum number is : "<<max<<" ";
    


    




}