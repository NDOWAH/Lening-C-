# include <iostream>

/*
This sections is intended to practice how to make use of the heap
memory allocation.
When a variable is declared by default, it uses the stack memory.*/
int main(){
    /*it is a bad habit writing to an uninitialized pointer through dereferencing 
    as demonstrated below.
    */
   /*std::cout<<"====================================================\n";
    int *p_number; //contain junk address which could be anything.
    *p_number = 55; //writing into junk address: Bad practice.

    std::cout<<"Writing into uninitialized pointer"<<std::endl;
    std::cout<<"p_number points to: "<<p_number<<" address"<<std::endl;
    std::cout<<"The dereferenced value is: "<<*p_number<<std::endl;
    std::cout<<"====================================================\n\n";
    */
/*The statement below initializes a pointer to null
it is equavalent to *p_number1{nullptr}
This indicates that the pointer points to nowhere*/

    int *p_number1{};//
    *p_number1 = 54; //Writing to a pointer that points to nowhere: Bad practice.
    std::cout<<"Reading and writing to null pointers"<<std::endl;
    std::cout<<"The pointer *p_number1 points to: "<<p_number1<<" address"<<std::endl;
    std::cout<<"Its value is: "<<*p_number1<<std::endl;



    return 0;
}