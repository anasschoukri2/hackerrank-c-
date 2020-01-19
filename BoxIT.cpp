#include<bits/stdc++.h>

using namespace std;
class Box{
        long long int l,b,h; 
    public:
        Box(){
            l=0,b=0,h=0;
        }
        Box(long long int ll,long long int bb,long long int hh){
            l=ll,b=bb,h=hh;
        }
        Box(const Box& B){
        l =  B.l;
        b = B.b;
        h =  B.h;

    }
        long long int getLength(){return l;}
        long long int getBreadth(){
            return b;
        }
        long long int getHeight() {
            return h;
        }
        long long CalculateVolume(){
            return l*b*h;
        }
         bool operator<(const Box &B)
    {
        long long int ll=B.l;
        long long int bb=B.b;
        long long int hh=B.h;
        if(l < ll || (b < bb && l==ll) || (h < hh && b==bb && l==ll))
            return true;
        else
            return false;
    }
    friend ostream& operator<<(ostream &out, const Box &B);

} ;
  ostream& operator<<(ostream  &out, const Box &B){
         out<< B.l<<" "<< B.b<< " " << B.h;
         return out;
    }
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
