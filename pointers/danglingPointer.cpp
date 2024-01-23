# include <iostream>
/*
Dangling pointer are pointers that points to memory allocation that deleted, de-allocated or
memory that are not valid.
The following the the some different types of dangling pointers
Uninitialized pointers
Deleted pointers
Multiple pointers pointing to the same memory allocation.
*/

int main(){
   int *p_NUMBER;
   int *p_NUMBER1{new int{29}};
   std::cout<<"=================Case1:Uninitialized dangling pointers==========================\n\n";
   std::cout<<"The address of p_NUMBER is: "<<p_NUMBER<<std::endl;
   std::cout<<"The current value of p_NUMBER is: "<<*p_NUMBER<<std::endl;
   std::cout<<"Case1: Uninitialized dangling pointer\n";
   std::cout<<"The address of p_NUMBER is: "<<p_NUMBER1<<std::endl;
   std::cout<<"The current value of p_NUMBER is: "<<*p_NUMBER1<<std::endl;
   std::cout<<"=================Case2:deleted dangling pointers==========================\n\n";

   delete p_NUMBER1;
   std::cout<<"The address of the deleted pointer p_NUMBER is: "<<p_NUMBER1<<std::endl;
   std::cout<<"The current value of the deleted pointer p_NUMBER is: "<<*p_NUMBER1<<std::endl;

}

