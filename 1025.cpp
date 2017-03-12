#include<iostream>

using namespace std;

void print(int n)
{
  int men[n],women[n],sum=0;
  for(int i=0;i<n;i++)
    cin>>men[i];
  
  for(int i=0;i<n;i++)
    cin>>women[i];

  for(int i=0;i<n;i++)
    men[i]=men[i]*women[i];
  
  for(int i=0;i<n;i++)
    sum=sum+men[i];
  cout<<sum<<endl;
  return;

}
int main()
{
  int cases;
  cin>>cases;
  while(cases)
    {
      int n;
      cin>>n;
      print(n);
      cases--;
    }
  return 0; 
}
