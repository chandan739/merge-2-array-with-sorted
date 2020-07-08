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
    c[i]=a[i];
    c[i+5]=b[i];
  }
  for(i=0;i<10;i++)
  {
    for(int j=i+1;j<10;j++)
    {
      if(c[i]>c[j])
      {
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
      }
    }
    cout<<c[i]<<" ";
  }
return 0;
}
