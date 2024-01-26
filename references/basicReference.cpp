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
    std::cout<<"==============================================\n\n";
    //changing actual values to see effects on references
    value = 50;
    double_value = 111;
    std::cout<<"New_value: "<<new_value<<" address: "<<&new_value<<" address of value: "
    <<&value<<std::endl;
    std::cout<<"new_double_value: "<<new_double_value<<" address: "<<&new_double_value<<" address of value "
    <<&double_value<<std::endl;
    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++\n\n";
    //use reference to change the value if reference variable
    new_value = 90;
    new_double_value = 120;
    std::cout<<"New_value: "<<new_value<<" address: "<<&new_value<<" address of value: "
    <<&value<<std::endl;
    std::cout<<"new_double_value: "<<new_double_value<<" address: "<<&new_double_value<<" address of value "
    <<&double_value<<std::endl;

}