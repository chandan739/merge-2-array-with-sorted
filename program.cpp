#include<iostream>
using namespace std;
int main()
{
  int i,temp;
  int a[5],b[5],c[10];
  for(i=0;i<5;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<5;i++)
  {
    cin>>b[i];
  }
  for(i=0;i<5;i++)
  {
    if(a[i] > b[i])
    {
      temp=a[i];
      a[i]=b[i];
      b[i]=temp;
    }
    c[i]=a[i];
    c[i+5]=b[i];
  }
  for(i=0;i<10;i++)
  {
    cout<<c[i]<<" ";
  }
  cout<<(a[5]+b[0])/2<<endl;
return 0;
}
