#include <iostream>
#include "Func1/inc/testFunc.h"
#include "Matrix/inc/eigen3_test.hpp"

using std::cout;

int main(int argc,char **argv) 
{
    funcc();
    eigen3_test();
    cout << "666!" << std::endl;
    
    std::cout << "Press Enter to continue...";
    std::cin.get(); // 等待用户按下回车键
    return 0;
}