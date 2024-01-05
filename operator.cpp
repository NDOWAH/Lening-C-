/*This file is intended to experiment prefix and post fix how the work and also to 
experiment compouded operators in c++*/
# include<iostream>

int main(){
    int value{5};
    std::cout<<"The value is: "<<value++<<std::endl;
    std::cout<<"The new value is: "<<value<<std::endl;
    std::cout<<"===================================="<<std::endl;

    std::cout<<"value: "<<++value<<std::endl;
    std::cout <<"new value: "<<value<<std::endl;
}