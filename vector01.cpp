#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v;
for(int i=1;i<=5;i++)
v.push_back(i);
for(int i=0;i<=4;i++)
cout<<v[i]<<" "<<endl;
cout<<"size: "<<v.size()<<endl;
cout<<"capacity: "<<v.capacity()<<endl;
cout<<"max-size: "<<v.max_size()<<endl;
if(v.empty())
cout<<"vector is empty";
else
cout<<"vector is not empty";
return 0;
}
