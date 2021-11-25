#include <iostream>
using namespace std;
int main()
{int a=25,b=39,c;
cout<<"Input 1st number : " <<a<<endl;
cout<<"Input 2nd number : " <<b<<endl;
c=b;//c=39
b=a;//b=25
a=c;
cout<<"After swapping 1st number:"<<a<<endl;
cout<<"After swapping 2nd number:"<<b;
return 0;
}
