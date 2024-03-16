#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double h,d,a;

    cout << "Enter the height:" << endl;
    cin>>h;
    cout<< "Enter the distance:" <<endl;
    cin>>d;
    cout<<" Enter the angle "<<endl;
    cin>>a;

    double height;
    height=h+d*tan(a);

    cout<<" The height of the tree is:"<<height<<"feet";

    return 0;
}
