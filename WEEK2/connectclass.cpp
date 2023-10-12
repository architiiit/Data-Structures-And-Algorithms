// Hello C++
#include <iostream>
using namespace std;
int main() {
  int age = 25;

  //(age>=18) ? cout << "Can Vote" : cout << "Cannot Vote";

  int num = 6;

  (num%2 == 0) ? cout << "Even" : cout << "Odd";

  cout<<endl;
//find digit from given numbers
int a[]={1,2,3};
int sum=0;
for(int i=0;i<3;i++)
{
    sum=sum*10+a[i];

}
  cout<<sum<<endl;
//find set bits
int n=-2;
int ans=0;
while(n!=0)
{
  if(n&1)
  {
    ans++;
  }
  n=n>>1;
}
cout<<ans<<endl;





  return 0;
}