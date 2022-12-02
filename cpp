#include <iostream>

int add (int a , int b)
{
   
   int result = a+b+10;
   return result;
   
}

int main()
{
    int x, y; 
    std::cin>>x>>y;

    int z = add(x,y);

    std::cout<<z<<std::endl;

    std::cin>>get();
    
    return 0;
}