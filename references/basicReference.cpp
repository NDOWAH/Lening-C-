# include <iostream>

/*Referencing is a way of setting up aliases for variables. 
With this aliases we can modify the variables with them*/
int main(){
    int value{30};
    double double_value{235543};
    int &new_value{value};
    double &new_double_value{double_value};

    std::cout<<"New_value: "<<new_value<<" address: "<<&new_value<<" address of value: "
    <<&value<<std::endl;
    std::cout<<"new_double_value: "<<new_double_value<<" address: "<<&new_double_value<<" address of value "
    <<&double_value<<std::endl;
}