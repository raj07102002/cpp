#include <iostream>
using namespace std;
// int a = 900; //global variable

int main() {
    // int a,b;
    // int c = a-b;
    // cout<<"enter a : ";
    // cin>>a;
    // cout<<"enter b : ";
    // cin>>b;
    
    // (c>0)?cout<<(c):cout<<(b-a);


    //     int a,b,c;
    //     cout<<"enter 1 no\n";
    //     cin>>a;
    //     cout<<"enter 2 no\n";
    //     cin>>b;
    //     c = (a>b)?a-b:b-a;
    //     cout<<c;

    // int pass1 ;
    // cin>>pass1;
    // int pass2;
    // cin>>pass2;
    // (pass1==pass2)?cout<<("valid"):cout<<"invalid";    

    //even odd program
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // (num % 2 == 0) ? cout << "Even" : cout << "Odd";

    //program of finding larger number
    // int num1, num2;
    // cout << "Enter first number: ";
    // cin >> num1;
    // cout << "Enter second number: ";
    // cin >> num2;
    // (num1 > num2) ? cout << num1 : cout << num2;

    //scope resolution operator
    //:- it is used to access the global variable

    // {
    //     int a = 100; //local variable
    //     cout << a << endl;
    //     cout << ::a << endl;// scope resolution operator
    // }

    //referrence variable example
//     int a = 10;//a is a normal variable
//     int &b = a;//b is a referrence variable
//     cout << "a = " <<a << endl; //value of a
//     cout << "b = " <<b << endl;//value of b
//     cout<<"address of a = "<<&a<<endl;//address of a
//     cout<<"address of b = "<<&b<<endl;//address of b
//     b = 90;
//     cout << "a = " <<a << endl;
//     cout << "b = " <<b << endl;

    //pointer variable example
//   int a = 300;
//   int b = 900;
//   int *p;// * is pointer
//   p=&a;//reference (& is address/reference)
//   cout<< "address of a = "<<&a<<endl;
//   cout<<*p;//dereference

   //Q1 write a program to print,subtract,multiply,modulus% & division/ of two numbers;
//    int a,b;
//    cout<<"enter 1 no = " <<endl;
//    cin>>a;
//     cout<<"enter 2 no = "<<endl;
//     cin>>b;
//     cout<<"the ans of a+b is = "<<a+b<<endl;
//     cout<<"the ans of a-b is = "<<a-b<<endl;
//     cout<<"the ans of a*b is = "<<a*b<<endl;
//     cout<<"the ans of a/b is = "<<a/b<<endl;
//     cout<<"the ans of a%b is = "<<a%b<<endl;


   //Q2 write a program to find area of circle;
    //  int r;
    //     cout<<"enter the radius of circle = "<<endl;
    //     cin>>r;
    //     cout<<"the area of circle is = "<<3.14*r*r<<endl;


   //Q3 write a program to find simple interest;
    // int p,t,r;
    // cout<<"enter the principle amount = "<<endl;
    // cin>>p;
    // cout<<"enter the time = "<<endl;
    // cin>>t;
    // cout<<"enter the rate = "<<endl;
    // cin>>r;
    // cout<<"the simple interest is = "<<(p*t*r)/100<<endl;


   //Q4 write a program to convert celsius to fahrenheit;
    // float c;
    // cout<<"enter the celsius = "<<endl;
    // cin>>c;
    // cout<<"the fahrenheit is = "<<(c*9/5)+32<<endl;


   //Q5 write a program to find square root of a number;
    // int a;
    // cout<<"enter the number = "<<endl;
    // cin>>a;
    // cout<<"the square root of a number is = "<<a*a<<endl;


   //Q6 write a program to find cube of a number;
    // int a;
    // cout<<"enter the number = "<<endl;
    // cin>>a;
    // cout<<"the cube of a number is = "<<a*a*a<<endl;

    //Control flow statement:- it includes 3 types of statements:-
    //1 conditional statement-- there are 4 types:- single,BI,Ladder,nested
    //2 transfer statement--there are 3 types:- goto,Break,continue,switch
    //3 looping statement-there are 3 types:- do while,while,for

    //1 conditional statement :-
    //1 single conditional statement :- singal candition will be executed if and only if the condition is true otherwise it will not be executed
    // syntax:- if(condition/expression)
    // {
    // statement
    // }
    // int age;
    // cout<<"enter the age = "<<endl;
    // cin>>age;
    // if(age>=18)
    // {
    //     cout<<"you are eligible for voting"<<endl;
    // }


    //condition with expression example
    // int a = 1;
    // if (a,a--,a++)
    // {
    //     cout<<"true"<<endl;
    // }

    //2 BI conditional statement:- two conditions will be executed if and only if the condition is true otherwise it will not be executed
    // syntax:- if(condition/expression)
    // {
    // statement
    // }
    // else
    // {
    // statement
    // }

    //Q7 write a program to find out the given no is even or odd;
    // int a;
    // cout<<"enter the number = "<<endl;
    // cin>>a;
    // if(a%2==0)
    // {
    //     cout<<"the given no is even"<<endl;
    // }
    // else
    // {
    //     cout<<"the given no is odd"<<endl;
    // }    

    //Q8 write a program to find out the large no between 2 integers;
    // int a,b;
    // cout<<"enter 1 no = "<<endl;
    // cin>>a;
    // cout<<"enter 2 no = "<<endl;
    // cin>>b;
    // if(a>b)
    // {
    //     cout<<"the large no is = "<<a<<endl;
    // }
    // else
    // {
    //     cout<<"the large no is = "<<b<<endl;
    // }

    //Q9 write a program to find out the given character is vowel or consonant;
    // char ch;
    // cout<<"enter the character = "<<endl;
    // cin>>ch;
    // if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' )
    // {
    //     cout<<"the given character is vowel"<<endl;
    // }
    // else
    // {
    //     cout<<"the given character is consonant"<<endl;
    // }

   //3 nested example //Q10   4 digit password program 
//     int pw,otp;
//     int opw = 2025;
//     int ootp = 1000;
//    cout<<"create password = ";
//    cin>>pw;
   
//     if (pw>=1000 && pw<=9999)
//     {
       
//       if (pw==opw)
//         {
//             cout<<"enter the otp = ";
//             cin>>otp;
//             if (otp==ootp)
//             {
//                cout<<"welcome";
//             }
//             else
//             {
//                 cout<<"invalid otp";
//             }
            
//         }
//         else
//         {
//             cout<<"wrong password";
//         }  
//     }
//     else
//     {
//         cout<<"invalid";
//     }
    
    //ladder conditional 
    // syntax:-
    // if (condition)
    // {
    //     /* code */
    // }
    // else if (condition)
    // {
    //     /* code */
    // }
    // else
    // {
    //     /* code */
    // }
    
    //Q check btwn 3 numbers either one is larger or all are same?
    
    // int a,b,c;
    // cout<<"enter the value of a = ";
    // cin>>a;
    // cout<<"enter the value of b = ";
    // cin>>b;
    // cout<<"enter the value of c = ";
    // cin>>c;
    // if (a==b && b==c)
    // {
    //     cout<<"all are same";
    // }
    // else if (a>b && a>c)
    // {
    //     cout<<"a is larger";
    // }
    // else if (b>a && b>c)
    // {
    //     cout<<"b is larger";
    // }
    // else if (a == b && a > c)
    // {
    //     cout<<"a and b are larger";
    // }
    // else if (a == c && a > b)
    // {
    //     cout<<"a and c are larger";
    // }
    // else if (b == c && b > a)
    // {
    //     cout<<"b and c are larger";
    // }
    // else
    // {
    //     cout<<"c is larger";
    // }

    //Q11 write a program to find out the percentage between 3 subjects, per subject have total of 100 marks and total marks of all subject is 300 and give the grades according to the percentage for 1st division 60% and above,2nd division 50% to 59% ,3rd division 35% and above and fail below 33% in any subject.

    // float p, c, m,tot, per;
    // cout << "enter the marks of physics, chemistry, maths = "<<endl;
    // cin >> p >> c >> m;
    // tot = p + c + m;
    // per = tot / 3;
    // if (p<0 || p> 100 || c<0 || c> 100 || m<0 || m> 100)
    // {
    //     cout << "invalid marks";
    // }
    // else if (p<35 && c>=35 && m>=35)
    // {
    //     cout<<"supply in physics";
    // }
    // else if (m<35 && c>=35 && p>=35)
    // {
    //     cout<<"supply in maths";
    // }
    // else if (c<35 && p>=35 && m>=35)
    // {
    //     cout<<"supply in chemistry";
    // }
    // else if ((p<35 && c<35) || (p<35 && m<35) || (c<35 && m<35))
    // {
    //     cout<<"fail";
    // }
    // else if (per >= 60)
    // {
    //     cout << "1st division"<<"marks= "<<tot<<"percentage= "<<per;
    // }
    // else if (per<60 && per>=50)
    // {
    //     cout << "2nd division"<<"marks= "<<tot<<"percentage= "<<per;
    // }
    // else if (per<50 && per>=35)
    // {
    //     cout << "3rd division"<<"marks= "<<tot<<"percentage= "<<per;
    // }
    // else
    // {
    //     cout << "fail"<<"marks= "<<tot<<"percentage= "<<per;
    // }

    
//Q Write a program to find out the given year is leap year or not ?

    //  int year;
    //     cout<<"enter the year = ";
    //     cin>>year;
    //     if ((year%4==0 && year%100!=0 || year%400==0))
    //     {
    //         cout<<"is  a leap year";
    //     }
    //     else
    //     {
    //         cout<<"not a leap year";
    //     }

//Q currency Denomination program when u have the notes of 5,10,20,50,100,500 but u should use the minimum no of notes to get the given amount and output should be for example 5*0,10*0,20*0,50*0,100*0,500*0 you should display every quaniity of notes in the format of the given example.

// int amount;
//     cout<<"enter the amount = "<<endl;
//     cin>>amount;
//     if (amount>=500)
//     {
//         cout<<"500*"<<amount/500<<endl;
//         amount = amount%500;
//     }
//     if (amount>=100)
//     {
//         cout<<"100*"<<amount/100<<endl;
//         amount = amount%100;
//     }
//     if (amount>=50)
//     {
//         cout<<"50*"<<amount/50<<endl;
//         amount = amount%50;
//     }
//     if (amount>=20)
//     {
//         cout<<"20*"<<amount/20<<endl;
//         amount = amount%20;
//     }
//     if (amount>=10)
//     {
//         cout<<"10*"<<amount/10<<endl;
//         amount = amount%10;
//     }
//     if (amount>=5)
//     {
//         cout<<"5*"<<amount/5<<endl;
//         amount = amount%5;
//     }
//     if (amount>=1)
//     {
//         cout<<"1*"<<amount/1<<endl;
//         amount = amount%1;
//     }

//here ends conditional statement------------------

//2 transfer statement
//1 goto statement:- it is used to transfer the control of the program to the specified label.
//  cout<<"hello"<<endl;
//     goto end;
//     cout<<"world"<<endl;
//     end:
//     cout<<"bye"<<endl;

//Q write a program to print the table of any number using goto statement;

    // int a;
    // int i=1;
    // cout<<"enter the number = ";
    // cin>>a;
    // start:
    // cout<<a<<"*"<<i<<"="<<a*i<<endl;
    // i++;
    // if (i<=10)
    // {
    //     goto start;
    // }
    // else
    // {
    //     cout<<"end";
    // }

// Q write a program to print the descending of a number upto 1 using goto statement;

    // int a;
    // cout<<"enter the number = ";
    // cin>>a;
    // start:
    // cout<<a<<endl;
    // a--;
    // if (a>=1)
    // {
    //     goto start;
    // }
    // else
    // {
    //     cout<<"end";
    // }

        //Transfer statement:
        //switch case:- when we have to make menu based program then we use switch case statement;
        // syntax:-
        // switch(condition/expression)
        // {
        //     case value1:
        //     statement/code;
        //     break;
        // }
        // case value2:
        // {
        //     statement/code;
        //     break;
        // }
        // -
        // -
        // -
        // default:
        // {
        //     statement/code;
        //     break;
        // }


        //Q write a program to perform the addition,subtraction,multiplication,division of 2 numbers using switch case statement;

        // int a,b,c;
        // cout<<"enter 2 different numbers = "<<endl;
        // cin>>a>>b;
        // cout<<"1.addition\n2.subtraction\n3.multiplication\n4.division\n";
        // cout<<"enter the choice = ";
        // cin>>c;
        // switch (c)
        // {
        // case 1:
        //     cout<<"the addition is = "<<a+b<<endl;
        //     break;
        // case 2: 
        //     cout<<"the subtraction is = "<<a-b<<endl;
        //     break;
        // case 3:
        //     cout<<"the multiplication is = "<<a*b<<endl;
        //     break;
        // case 4:
        //     cout<<"the division is = "<<a/b<<endl;
        //     break;
        // default:
        //     cout<<"invalid choice";
        //     break;
        // }

        //Q write a program to find out the given number is even odd,leap year,square,cube using switch case statement;

        // int a;
        // cout<<"enter the number = ";
        // cin>>a;
        // cout<<"1.even odd \n 2.leap year \n 3.square \n 4.cube \n";
        // cout<<"enter the choice = ";
        // cin>>a;
        // switch (a)
        // {
        // case 1:
        //     if (a%2==0)
        //     {
        //         cout<<"even";
        //     }
        //     else
        //     {
        //         cout<<"odd";
        //     }
        //     break;
        // case 2:
        //     if ((a%4==0 && a%100!=0 || a%400==0))
        //     {
        //         cout<<"leap year";
        //     }
        //     else
        //     {
        //         cout<<"not a leap year";
        //     }
        //     break;
        // case 3:
        //     cout<<"the square is = "<<a*a<<endl;
        //     break;
        // case 4:
        //     cout<<"the cube is = "<<a*a*a<<endl;
        //     break;
        // default:
        //     cout<<"invalid choice";
        //     break;
        // }

    //     int a;
    //     char c;
    //     cout<<"enter the character = ";
    //     cin>>c;
    //     cout<<"select 1 to display vowel/consonant \n 2 for gender program = ";
    //     cin>>a;
    //     switch (a)
    //     {
    //     case 1:
    //         if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U' )
    //         {
    //             cout<<"the given character is vowel"<<endl;
    //         }
    //         else
    //         {
    //             cout<<"the given character is consonant"<<endl;
    //         }
    //         break;
    //     case 2:{
    //         if((c=='m')|| (c=='M'))
    //         {
    //             cout<<"male";
    //         }
    //         else if (c=='f'||c=='F')
    //         {
    //             cout<<"female"
    //         }
    //         else
    //         {
    //             cout<<"invalid";
    //         }
    //         break;
    //     default:
    //         cout<<"invalid choice";
    //         break;
    //     }
    // return 0;
    //     }

    //Q  write a program to print numbers 1 to 15 using goto without printing 5;
    

    //3 looping statement- there are three type of loop(Iteration)- Do-while,While,For;
     //dowhile loop syntax:-
     //do
     //{
     //statement;
     //}
     //while(condition/expression);

     //example;
    //ascending order
    //  int a = 1;
    //  do
    //  {
    //      cout<<a<<endl;
    //      a++;
    //  }
    //  while (a<=15);

    //descending order
    // int a = 15;
    // do
    // {
    //     if (a==5)
    //     {
    //         a--;
    //         continue;
    //     }
    //     cout<<a<<endl;
    //     a--;
    // }
    // while (a>=1);

    //Q write a program to print even number between 1 to 10;
    // int a = 1;
    // do
    // {
    //     if (a%2==0)
    //     {
    //     cout<<a<<" "<<endl;
    //     }
    //     a++;
        
    // } while (a<=10);
    
    //Q write a program to generate table of any number using do-while loop;

    // int a;
    // cout<<"enter any number";
    // cin>>a;
    // int m = 1;
    // if (a<0)
    // {
    //     cout<<"invalid input";
    // }
    // else{
    //     do
    // {
    //  cout<<a*m<<" ";
    //  m++;   
    // } while (m<=10);
    // }
    
    //Q write a program to find out the prime number between 1 to 20 using do-while;

    // int a = 1;
    // do
    // {
    //     int b = 2;
    //     int c = 0;
    //     do
    //     {
    //         if (a%b==0)
    //         {
    //             c++;
    //         }
    //         b++;
    //     } while (b<=a);
    //     if (c==1)
    //     {
    //         cout<<a<<" "<<endl;
    //     }
    //     a++;
    // } while (a<=20);


    //Q write a program to print the sum of the values between 1 to 50;

    
    // int a = 1;
    // int sum = 0;
    // do
    // {
    //     sum = sum + a;
    //     a++;
    // } while (a<=50);
    // cout<<"the sum is = "<<sum<<endl;
    // return 0;


    //Q write a program to findout the given 3 digit number is armstrong number or not (153);

    
    // int n;
    // cout<<"enter the 3 digit number = ";
    // cin>>n;
    // int b = n;
    // int sum = 0;    
    // if (n<1000 && n>99)
    // {
    //     do
    // {
    //     int c = n%10;
    //     sum = sum + (c*c*c);
    //     n = n/10;
    // } while (n>0);
    // if (sum==b)
    // {
    //     cout<<"armstrong number";
    // }
    // else
    // {
    //     cout<<"not an armstrong number";
    // }
    // }
    // else{
    //     cout<<"invalid 3 digit no"<<endl;
    // }
    
    // return 0;


    //Q write a program to findout the given numbers is palindrome or not;
    // int a;
    // cout<<"enter the number = "; 
    // cin>>a;
    // int b = a;
    // int sum = 0;
    // do
    // {
    //     int c = a%10;
    //     sum = sum*10 + c;
    //     a = a/10;
    // } while (a!=0);
    // if (sum==b)
    // {
    //     cout<<"palindrome number";
    // }
    // else
    // {
    //     cout<<"not a palindrome number";
    // }
    // return 0;

    //Q write a program to findout the factors of given number;
    // int a;
    // cout<<"enter the number = ";
    // cin>>a;
    // int b = 1;
    // do
    // {
    //     if (a%b==0)
    //     {
    //         cout<<b<<" ";
    //     }
    //     b++;
    // } while (b<=a);
    // return 0;

    //while loop :- while loop is called entry loop it will execute the statement till the condition is true otherwise it will be terminated;
    // int a = 1;
    // while(a<=10){
    //     cout<<a<<endl;
    //     a++;
    // }
    
    // int a = 1;
    // while(a<=10){
    //     cout<<a*a<<endl;
    //     a++;
    // }

    // int a = 1;
    // while(a<=10){
    //     if (a%2==0)
    //     {
    //         cout<<a*a<<endl;
            
    //     }
    //     a++;
    // }
    
    //Q write a program to check the user if the password is corect or not and if three attempts are wrong then give the message try again tomorrow

    // int opw = 2025;
    // int pw;
    // cout<<"enter password"<<endl;
    // cin>>pw;
    // int a = 1;
   
    // while(pw!=opw && a<=3)
    // {
    //     if (pw!=opw)
    //     {
    //     cout<<"wrong password try again!"<<endl;
    //     cout<<"Enter again : "<<endl;
    //     cin>>pw;
    //     a++;
    //     }  
    // }
    // if (pw!=opw)
    // {
    //     cout<<"Try again tomorrow"<<endl;
    // }
    // if (pw==opw)
    // {
    //     cout<<"Correct password"<<endl;
    // }
    //Q print the sum of 1 to n;

    // int i,n;
    // int sum = 0;
    // cin>>n;

    // for(i=1; i<=n; i++)
    // {
    //     sum=sum+i;
    // }
    // cout<<sum;

    //Q print the even number between 1 to n;

    // int i,n;
    // int sum = 0;
    // cin>>n;
    // for ( i = 1;i<=n; i++)
    // {
    //     if (i%2==0)
    //     {
    //         sum=sum+i;
    //     }
        
    // }
    // cout<<sum;

    //Q prime number 1 - n;

    //    int i,n;
    //    cin>>n;
    //    int count = 0;
    //    for ( i = 1; i<=n; i++)
    //    {
    //     if (n%i==0)
    //     {
    //     count++;
    //     }
    //    }
    //    if (count==2)
    //    {
    //     cout<<"prime";
    //    }
    //    else{
    //     cout<<"not prime";
    //    }

    //Q write a program to findout the power 

    // int b,p, k=1;
    // cout<<"enter the base no = "<<endl;
    // cin>>b;
    // cout<<"enter the power = "<<endl;
    // cin>>p;
    // for (int i = 1; i<=p; i++)
    // {
    //     k=k*b;
    // }
    // cout<<k<<endl;

    //Q to sum any number

    // int n;
    // int c = 0;
    // cout<<"enter any no = "<<endl;
    // cin>>n;
    // while (n>0)
    // {
    //    c = c+n%10;
    //    n=n/10; 
    // }
    // cout<<c<<endl;

    //Q reverse any no

    // int n;
    // int c = 0;
    // cout<<"enter any no = "<<endl;
    // cin>>n;
    // while (n>0)
    // {
    //    c = c*10 + n%10;
    //    n=n/10; 
    // }
    // cout<<c<<endl;
    
    //Q palindrome 

    // int n;
    // int c = 0,k;
    // cout<<"enter any no = "<<endl;
    // cin>>n;
    // k=n;
    // while (n>0)
    // {
    //    c = c*10 + n%10;
    //    n=n/10; 
    // }
    // if (c==k)
    // {
    //     cout<<"palindrome"<<endl;
    // }
    // else
    // {
    //     cout<<"not palindrome"<<endl;
    // }
    
    //Q Fibonacci

    int a = 0;
    int b = 1,c,n;
    cout<<"enter any no = "<<endl;
    cin>>n;
    //cout<<a<<"\t"<<b<<"\t";
    for (int i = 1; i <=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<"\t";
    } 
    // cout<<c<<"\t";
    
    //* patterns
    
    //Q print
    //*
    //*   *
    //*   *   *

    // for (int r = 1; r <= 3; r++)
    // {
    //     for (int c = 1; c <= r; c++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //Q print
    //1
    //1 2
    //1 2 3

    // for (int r = 1; r <= 3; r++)
    // {
    //     for (int c = 1; c <= r; c++)
    //     {
    //         cout<<"c ";
    //     }
    //     cout<<endl;
    // }

    //Q
    //1
    //2 2
    //3 3 3 

    // for (int r = 1; r <= 3; r++)
    // {
    //     for (int c = 1; c <= r; c++)
    //     {
    //         cout<<"r ";
    //     }
    //     cout<<endl;
    // }

    //Q
    //1
    //2 3
    //4 5 6 
    //7 8 9 10 

    // int k = 1;

    // for (int r = 1; r <= 4; r++)
    // {
    //     for (int c = 1; c <= r; c++)
    //     {
    //         cout<<k++<<" ";
            
    //     }
    //     cout<<endl;
    // }
    
    //Q print
    //1
    //4 9
    //16 25 36

    //  int k = 1;

    // for (int r = 1; r <= 3; r++)
    // {
    //     for (int c = 1; c <= r; c++)
    //     {
    //         cout<<k*k<<" ";
    //         k++;
    //     }
    //     cout<<endl;
    // }

    //Q
    //a
    //a b
    //a b c

    // for (char r= 'a'; r <= 'c'; r++)
    // {
    //     for (char c = 'a'; c <= r; c++)
    //     {
    //         cout<<c<<" ";
    //     }
    //     cout<<endl;
    // }

    //Q
    //a
    //b b
    //c c c

    // for (char r= 'a'; r <= 'c'; r++)
    // {
    //     for (char c = 'a'; c <= r; c++)
    //     {
    //         cout<<r<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //Q
    //     *
    //    **
    //   ***
    //  ****
    // ***** 

    // for (int r=1; r<=5; r++)
    // {
    //     for (int s=4; s>=r; s--)
    //     {
    //         cout<<" ";
    //     }
    //     for (int c=1;c<=r; c++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl; 
    // }

    //Q1
    //     1
    //    12
    //   123
    //  1234
    // 12345

    // for (int r=1; r<=5; r++)
    // {
    //     for (int s=4; s>=r; s--)
    //     {
    //         cout<<" ";
    //     }
    //     for (int c=1;c<=r; c++)
    //     {
    //         cout<<c;
    //     }
    //     cout<<endl; 
    // }

    //Q2
    //      a
    //     ab
    //    abc
    //   abcd
    //  abcde 

    // int b = 5;
    // for (int r=1; r<=5; r++)
    // {
    //     for (int s=4; s>=r; s--)
    //     {
    //         cout<<"  ";
    //     }
    //     char ch ='a';
    //     for (int c=1;c<=r; c++)
    //     {
    //         cout<<ch++<<" ";
    //     }
    //     cout<<endl; 
    // }
    

    
    //Q3
    //      1
    //     22
    //    333
    //   4444
    //  55555 
    // for (int r=1; r<=5; r++)
    // {
    //     for (int s=4; s>=r; s--)
    //     {
    //         cout<<" ";
    //     }
    //     for (int c=1;c<=r; c++)
    //     {
    //         cout<<r;
    //     }
    //     cout<<endl; 
    // }

    //Q4
    //      1
    //     23
    //    456
    //  78910

    // int a=1;
    // for (int r=1; r<=4; r++)
    // {
    //     for (int s=3; s>=r; s--)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int c=1;c<=r; c++)
    //     {
    //         cout<<a++<<" ";
    //     }
    //     cout<<endl; 
    // }

}