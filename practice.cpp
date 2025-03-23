#include <iostream>
using namespace std;
int main(){ 
// Q.1 marksheet


//    int p,c,m,per; 
//    cout<<"ENTER THE NUMBER OF (P,C,M)\n";
//    cin>>p>>c>>m;
//    per=(p+c+m)/3;
//   // cout<<per<<"%";

//    // marks
//    if((p<0 || p>100) ||  (c<0 || c>100) || (m<0 || m>100) ) { 

//     cout<<"marks are invalid";
//    } 

// //    // supplementry

//    else if(p<35 && c>=35 && m>=35) {
//    cout<<"suplly in physics"; 
//    }
//    else if(p>=35 && c<35 && m>=35) {
//    cout<<"supply in chemistry"; 
//    }
//    else if(p>=35 && c>=35 && m<35){
//    cout<<"supply in maths";

//    } 

// //    // fail 

//    else if((p<35 || c<35 ) && (p<35 || m<35) && (c<35 || m<35))
//    { 
//     cout<<"fail";
//    } 
   

// //    // per 

//    else if(per>60 && per<100) { 
//     cout<<per<<"%"<<" first divison";
//    } 
//    else if (per>50 && per<60){ 
//     cout<<per<<"%"<<" second divison";
//    } 
//    else if(per>35 && per<50){ 
//     cout<<per<<"%"<<" third divison";
//    }  


// Q.2 tax calculator

// int amt, tax, total;
// cout<<"enter amount\n";
// cin>>amt;

// if(amt<10000){
//    tax=(amt*10/100);
//    total = amt-tax;
//    cout<<"total amount:"<<amt<<"\ntax:"<<tax<<"\ntotal sal="<< total; 

// } 

// else if(amt>10000 && amt<30000) {
// tax=(amt*20/100);
// total = amt-tax;
// cout<<"total amount:"<<amt<<"\ntax:"<<tax<<"\ntotal sal="<< total; 

// } 

// else if(amt>30000 && amt<50000){ 
// tax=(amt*30/100);
// total = amt-tax;
// cout<<"total amount:"<<amt<<"\ntax:"<<tax<<"\ntotal sal="<< total;

// } 
// else { 
// tax=(amt*50/100);
// total = amt-tax;
// cout<<"total amount:"<<amt<<"\ntax:"<<tax<<"\ntotal sal="<< total;
// }
   
// Q.3 ATM  
int amount;
cout<<"enter the amount\n"; 
cin>>amount;
if(amount>=5){ 
 cout<<"5*"<<amount/5;
  amount=amount%5; 
  //cout<<"5*"<<amount;
} 
if(amount>=10){ 
  amount/10;
  amount=amount%10;
} 
if(amount>=20){ 
  amount/20;
  amount=amount%20;
}
if(amount>=50){ 
  amount/50;
  amount=amount%50;
}
if(amount>=100){ 
  amount/100;
  amount=amount%100;
}
if(amount>=500){ 
  amount/500;
  amount=amount%500;

} 

 
} 
