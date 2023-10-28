//can a constructor be made private-->YES
#include<iostream>
using namespace std;
class box{
private:
        int width;
    //constructor
    box(int _w):width(_w){};

public:
    //constructor
    // box(int _w):width(_w){};

    int getWidth()const{
        return width;
    }
    void setWidth(int _val)
    {
        width=_val;
    }
    friend class boxFactory;
};
class boxFactory{
    int count;
public:
    box getABox(int _w)
    {
        ++count;
        return box(_w);
    }
};
int main()
{
// box b(5);
// cout<<b.getWidth()<<endl;

boxFactory bfact;
box b=bfact.getABox(5);
cout<<b.getWidth()<<endl;

return 0;
}