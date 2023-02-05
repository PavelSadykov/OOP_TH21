//
//  main.cpp
//  ООП ДЗ 21 Компиляция  в голове
//
//  Created by Павел on 05.02.2023.
//
#include <vector>
#include <iostream>
#include <string>
#include <fstream>


class A {
public:
    virtual void foo(std::vector<int>& vec) = 0;
    
    virtual ~A(){}// добавил в код
};
class B : public A {
public:
    void foo(std::vector<int>& vec) override {
        std::cout << "foo function" << std::endl;
        vec.erase(vec.begin()); // чтобы на экране было 1,2,3   -  нужно убрать эту запись  : vec.erase(vec.begin())
        
    }
    
};


int main(int argc, const char * argv[]) {
    
            A* b = new B();
            std::vector<int> v = {1,2,3};
            b->foo(v);
       
        
        delete b;//добавил в код
        
        std::copy(  v.begin(),v.end(),std::ostream_iterator<int>(std::cout," "));
        std::cout<<std::endl;
        
    return 0;
}
