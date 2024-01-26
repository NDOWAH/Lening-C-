# include <iostream>

//illustration of how reference and pointers work.
int main(){
double value{35};
double number{23};
double &ref_value{value};
double *p_double_value{&value};
std::cout<<"value: "<<value<<std::endl;
std::cout<<"ref_value: "<<ref_value<<std::endl;
std::cout<<"p_double_value: "<<*p_double_value<<std::endl;
std::cout<<"=========================================\n";
//showing that we can't change a reference to reference something else except for pointers
ref_value = number;//this still works since we are just assigning number to the address ref_value i.e the address hasn't changed

p_double_value = &number;
std::cout<<"ref_value: "<<ref_value<<" ref_value address: "<<&ref_value<<std::endl;
std::cout<<"p_double_value: "<<*p_double_value<<" p_double_value address: "<<&ref_value<<std::endl;
std::cout<<"===================changing the reference==========================\n";
ref_value = 34.55;
/*
The statement below prints 34.55 but the address still remains the 
same as in previous case*/
std::cout<<"ref_value: "<<ref_value<<" ref_value address: "<<&ref_value<<std::endl;





}