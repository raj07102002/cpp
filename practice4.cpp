#include<iostream>
using namespace std; 
int main(){ 


    // Q.1 sum of the number 

    // int a =1,b,sum=0;
    // cout<<"Enter the number\n";
    // cin>>b;
    // for(a;a<=b;a++){
    // sum=sum+a;  

    
    //cout<<"Answe is: "<<sum;  
    
    // Q.2 write a program factore 

    // int a;
    // cout<<"enter the number\n";
    // cin>>a;

    // for(int b;b<=a;b++){ 
    //   if(a%b==0)  {  
    //     cout<<b; 
        

    //   }

    // } 

    // Q write a program print prime number 

    // int a=20,c=0,i; 
    // cout<<"enter the number";
  
    // for( i=1;i<a;i++){
    //   if(a%i==0) 
    //   c++;
    // } 
    // if(c==2){ 
    //   cout<<"prime no"<<i;
    // }  
    // else{ 
    //   cout<<"not a prime np";
    // }   
    
    //  Q opratore question 

    // int c=2;
    // if(--c,--c,c++){ 
    //   cout<<c++;
    // } 
    // else 
    // cout<<--c;  
  
    // Q  program swap a variabale without using third variable 

//     int a,b;
//     cout<<"enter the value";
//     cin>>a>>b; 
    
//     a=a+b;
//     b=a-b;
//    a=a-b;

     
//     cout<<a<<" "<<b;  

// Q table 

// int table;
// cout<<"Enter the table\n";
// cin>>table;
// for (int i = 1; i<=10; i++)
// {
    
//     cout<<table<<"*"<<i<<"="<<table*i<<"\n";
// }     

//  Q . using array terminate the digit 

// int a=0;
// while (a<10)
// { 
//     a++;
//     if(a==5 || a==9){
//     continue; 
//     }
// cout<<a<<" ";
// }

int a[5],s,;
s=sizeof (a)/sizeof a[0]; 
cout<<"array size :"<<s<<endl;
cout<<"enter the number of array\n";
for (int i = 0; i < s; i++)
{
    cin>>a[i];/* code */
}  
cout<<"reversed the array"<<endl;

for (int i = s-1; i >= 0; i--)
{
    cout<<a[i]<<" ";/* code */
}



}

