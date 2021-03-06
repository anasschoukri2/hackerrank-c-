#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
template <typename temp>
class AddElements
{
    private:
        temp x;
    public:
        AddElements(const temp& x):
            x {x}
        { }

        temp add(const temp& y)
        {
            return y + x;
        }
};
template <>
class AddElements<string>
{
    private:
        string x;
    public:
        AddElements(const string& x):
            x {x}
        { }
        string concatenate(const string& y)
        {
            return x + y;
        }
};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
