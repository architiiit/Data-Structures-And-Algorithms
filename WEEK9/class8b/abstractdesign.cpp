//I am client and vendor has provided me the implementation of bird.h

#include<iostream>
#include"bird.h"
using namespace std;

void birdDoesDomething(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->fly(); 
    bird->eat();
}
int main()
{
    Bird *bird=new sparrow();
    // sparrow *sp=new sparrow();
    // sp->eat();//this cannot be accesed bacause it is declared private
    //We can only interface through bird only 
    birdDoesDomething(bird);

    //Eagle calling only
    Bird *bir=new eagle();
    birdDoesDomething(bir);
    //faayda hua sirf ek line change kara aur poora functionality change ho jaayega

    // Bird* b2=new Bird();//it is rule that bird is an interface and it cannot be used to create an object
return 0;
}