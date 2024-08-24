#include<iostream>
#include <vector>
using namespace std;

template<typename T>
void move_vectors(std::vector<T> &a, std::vector<T> &b)
{
b = std::move(a);
}
int main()
{
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    std::cout << "one" << std::endl;
    
    for(auto & temp: one){
    
    std::cout << temp << " " ;
    }
    move_vectors(one, two);
    std::cout << "\ntwo" << std::endl;
    for(auto & temp: two){
    
    std::cout << temp << " " ;
    }
    return 0;
}