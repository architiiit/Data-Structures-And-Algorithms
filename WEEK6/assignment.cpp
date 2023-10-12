//POINTERS ASSIGNMENT
//LETS PRACTICE POINTERS

//QUES1
// #include<iostream>
// using namespace std;

// int main()
// {
// float f=10.5;
// float p=2.5;
// float* ptr=&f;
// (*ptr)++;
// *ptr=p;
// cout<<*ptr<<" "<<f<<" "<<p;//2.5 2.5 2.5
// return 0;
// }


// //QUES2
// #include<iostream>
// using namespace std;

// int main()
// {
// int a=7;
// int b=17;
// int* c=&b;
// *c=7;
// cout<<a<<" "<<b<<endl;//7 7
// return 0;
// }

// //QUES3
// #include<iostream>
// using namespace std;

// int main()
// {
// int* ptr=0;//null ptr
// int a=10;
// *ptr=a;
// cout<<*ptr<<endl;
// //RUNTIME ERROR->

// return 0;
// }

//QUES4
//  #include<iostream>
//  using namespace std;
 
//  int main()
//  {
//  int b=10;
//  int*a=&b;
//  cout<<"address of b is given by a: "<<a<<endl;
//  return 0;
//  }

// QUES5
// #include<iostream>
// using namespace std;

// int main()
// {
// char ch='a';
// char* ptr=&ch;
// ch++;//97+1=98->ASCII
// cout<<*ptr<<endl;//b
// return 0;
// }

// //QUES6
// #include<iostream>
// using namespace std;

// int main()
// {
// int a=7;//&a->300
// int* c=&a;
// c=c+1;//dusre address pe chala jaayega jisme koi bhi gabage value ho sakta hai
//300+1=304
// cout<<a<<" "<<*c<<endl;
// return 0;
// }

//QUES7
//assume memory address of variable 'a' is 400, what will be the O/P

// #include<iostream>
// using namespace std;
// int main()
// {
// int a=7;
// int*c =&a;
// c=c+3;
// cout<<&a<<endl;
// cout<<c<<endl;//->400+3=412->according to question
// return 0;
// }

// //QUES8
// #include<iostream>
// using namespace std;
// //double takes 8 bytes
// int main()
// {
// double a=10.54;//assumed address is 200
// double* d=&a;
// d=d+1;//208
// cout<<&a<<endl;
// cout<<d<<endl;//200+(1.8)
// return 0;
// }

// //QUES9
// #include<iostream>
// using namespace std;
// //suppose int->4 bytes 
// //suppose pointer->8 bytes
// int main()
// {int a[5];
// int*c;
// cout<<sizeof(c)<<" "<<sizeof(c)<<endl;
// //20 and 8
// return 0;
// }

// //QUES 10
// #include<iostream>
// using namespace std;

// int main()
// {
// int a[]={1,2,3,4};
// cout<<*(a)<<" "<<*(a+1)<<endl;//1 2 
// return 0;
// }


// //QUES11
// #include<iostream>
// using namespace std;

// int main()
// {
// int a[3]={1,2,3};
// cout<<*(a+2)<<endl;
// return 0;
// }

// //QUES12
// #include<iostream>
// using namespace std;

// int main()
// {
// int a[]={1,2,3,4};
// int* p=a++;//a is a constant pointer a++  ->  a=a+1
// //we cannot change base address
// cout<<*p<<endl;
// //RUNTIME ERROR
// return 0;
// }

// //QUES 13
// #include<iostream>
// using namespace std;

// int main()
// {int arr[]={4,5,6,7};
// int* p=(arr+1);
// cout<<*arr+9<<endl;//output->13

// return 0;
// }

// //QUES14
// #include<iostream>
// using namespace std;

// int main()
// {
// char b[]="xyz";
// char *c=&b[0];
// cout<<c<<endl;prints upto null character//xyz
// return 0;
// }

// //QUES 15
// #include<iostream>
// using namespace std;

// int main()
// {char s[]="hello";
// char *p=s;
// cout<<s[0]<<" "<<p[0]<<endl;//both are pointing to base address only
// //output->h h
// return 0;
// }


// //QUES 16
// #include<iostream>
// using namespace std;

// int main()
// {
// char arr[20];
// int i;
// for(i=0;i<10;i++)
// {
//     *(arr+i)=65+i;//ASCII->65->A
// }
// *(arr+i)='\0';
// cout<<arr<<endl;
// return 0;
// }

// //QUES16
// #include<iostream>
// using namespace std;

// int main()
// {
// char* ptr;
// char Str[]="abcdefg";
// ptr=Str;
// ptr+=5;
// cout<<ptr<<endl;//print karo jab tak null na mil jaaye
// return 0;
// }

// //QUES17
// #include<iostream>
// using namespace std;

// int main()
// {
//     int numbers[5];
//     int*p;
//     p=numbers;//p->numbers[0]
//     *p=10;//numbers[0]=10
//     p=&numbers[2];//p->numbers[2]
//     *p=20;//numbers[2]=20
//     p--;//p=p-1;
//     *p=30;//numbers[1]=30
//     p=numbers+3;//p->&numbers[3]
//     *p=40;//numbers[3]=40
//     p=numbers;//p->numbers[0]
//     *(p+4)=50;//numbers[4]=50
//     for(int n=0;n<5;n++)
//     {
//         cout<<numbers[n]<<",";
//     }
// return 0;
// }

// //QUES18
// #include<iostream>
// using namespace std;

// int main()
// {
//     char st[]="ABCD";
//     for(int i=0;st[i]!='\0';i++)
//     {
//         cout<<st[i]<<" "<<*(st)+i<<" "<<*(i+st)<<" "<<i[st]<<" "<<endl;
//         //                 char+int=int
//     }
// return 0;
// }

// //QUES 19
// #include<iostream>
// using namespace std;

// int main()
// {
// float arr[5]={12.5,10.0,13.5,90.5,0.5};
// float* ptr1=&arr[0];
// float* ptr2=ptr1+3;
// cout<<*ptr2<<" "<<endl;
// cout<<ptr2-ptr1<<endl;
// return 0;
// }


// //QUES 20
// #include<iostream>
// using namespace std;
// void changeSign(int* p)
// {
// *p=(*p)*-1;

// }
// int main()
// {int a=10;
// changeSign(&a);
// cout<<a<<endl;

// return 0;
// }

// //QUES20
// #include<iostream>
// using namespace std;
// void fun(int a[])//naya pinter copy hoga
// {
//     cout<<a[0]<<" ";//*(a+0)
// }
// int main()
// {
// int a[]={1,2,3,4};
// fun(a+1);
// cout<<a[0];
// return 0;
// }

// //QUES21
// #include<iostream>
// using namespace std;
// void square(int* p)
// {
//     int a=10;//loacal variable
//     p=&a;//naya address update ho jaayega jo ki naye wale local variable ka address hoga 
//     *p=(*p)*(*p);//10*10=100
//     //local a ka value 100 ho jaayega
// }
// int main()
// {
//     int a=10;
//     square(&a);
//     cout<<a<<endl;//main a change nhi hoga 10 hi rhega
// return 0;
// }

// //QUES22
// #include<iostream>
// using namespace std;
// void Q(int z)
// {
//     z+=z;
//     cout<<z<<" ";
// }
// void P(int* y)
// {
//     int x=*y+2;
//     Q(x);
//     *y=x-1;
//     cout<<x<<" ";
// }
// int main()
// {
// int x=5;
// P(&x);
// cout<<x;
// return 0;
// }

// //QUES23
// #include<iostream>
// using namespace std;

// int main()
// {int a=10;
// int* p=&a;
// int**q=&p;
// int b=20;
// *q=&b;
// (*p)++;
// cout<<a<<" "<<b<<endl;
// return 0;
// }

// //QUES24
// #include<iostream>
// using namespace std;

// int f(int x,int*py,int** ppz)
// {
//     int y,z;
//     **ppz+=1;//5
//     z=**ppz;//z=5
//     *py+=2;//7
//     y=*py;//y=7
//     x+=3;//7
//     return x+y+z;//5+7+7
// }
// int main()
// {
//  int c,*b,**a;
//  c=4;
//  b=&c;
//  a=&b;
//  cout<<f(c,b,a);
// return 0;
// }

// //QUES25
// #include<iostream>
// using namespace std;

// int main()
// {
//     int ***r,**q,*p,i=8;
//     p=&i;
//     (*p)++;
//     q=&p;
//     (**q)++;
//     r=&q;
//     cout<<*p<<" "<<**q<<" "<<***r;
// return 0;
// }

// //QUES 26
// #include<iostream>
// using namespace std;
// void increment(int**p )
// {
//     (**p)++;
// }
// int main()
// {
// int num=10;
// int*ptr=&num;
// increment(&ptr);
// cout<<num<<endl;
// return 0;
// }