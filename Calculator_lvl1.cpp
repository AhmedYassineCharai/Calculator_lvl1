#include <iostream>


int main(int argc, char const *argv[])
{
    int x {};
    int y {};
    int o {};

    std::cout << "Enter X: " << "\n";
    std::cin >> x ;

    std::cout << "Enter Y: " << "\n";
    std::cin >> y;

    std::cout << "Enter Your operator : \n (note this calculator only add or substract or multiply or divide) \n      1 == + \n      2 == - \n      3 == * \n      4 == / \n" << "\n";
    std::cin >> o;


    if (o == 1)
    {
        std::cout << x+y << "\n";
    }else if (o == 2)
    {
        std::cout << x-y << "\n";
    }else if (o == 3)
    {
        std::cout << x*y << "\n";
    }else if (o == 4)
    {
        std::cout << x/y << "\n";
    }else{
      std::cout << "Error pls enter a number between 1 and 4 to choose your type of operation" ;
    };
    
    
    
    
   
    




    return 0;
}
