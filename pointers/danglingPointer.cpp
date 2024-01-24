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
   int *p_NUMBER2{new int{89}};
   int *p_NUMBER3{p_NUMBER2};
   /*
   std::cout<<"=================Case1:Uninitialized dangling pointers==========================";
   std::cout<<"The address of p_NUMBER is: "<<p_NUMBER<<" the current value is: "<<*p_NUMBER<<std::endl;
   std::cout<<"Case1: Uninitialized dangling pointer\n";
   std::cout<<"The address of p_NUMBER is: "<<p_NUMBER1<<"The current value of p_NUMBER is: "<<*p_NUMBER1<<std::endl;
   
   std::cout<<"=================Case2:deleted dangling pointers==========================\n\n";

   delete p_NUMBER1;
  p_NUMBER1 = nullptr;//Without reseting pointer to null, address and value will still be printed 
  //even after deleting the pointer.
  //But there is no guarentee that it would always be the case, program can crash unexpectedly. 
   std::cout<<"The address of the deleted pointer p_NUMBER is: "<<p_NUMBER1<<std::endl;
   std::cout<<"The current value of the deleted pointer p_NUMBER is: "<<*p_NUMBER1<<std::endl;
   std::cout<<"Done!";

  
   std::cout<<"=================Case3:Multiple pointers pointing to same address dangling pointers==========================\n\n";
   std::cout<<"The address of p_NUMBER is: "<<p_NUMBER2<<"The current value of p_NUMBER is: "<<*p_NUMBER2<<std::endl;
   std::cout<<"The address of p_NUMBER is: "<<p_NUMBER3<<"The current value of p_NUMBER is: "<<*p_NUMBER3<<std::endl;

   std::cout<<"===========delete parent variable for multiple memory allocation==================\n";
   */
   /*
   The code below will not run always since, the since we are trying to make use
   of memory we have already released and not longer in control of it.
   */
   //delete p_NUMBER;
   std::cout<<"The address of p_NUMBER is: "<<p_NUMBER<<"The current value of p_NUMBER is: "<<*p_NUMBER2<<std::endl;
   std::cout<<"The address of p_NUMBER is: "<<p_NUMBER<<"The current value of p_NUMBER is: "<<*p_NUMBER3<<std::endl;
   std::cout<<"Done!!!"<<std::endl;
   
   //Below are work around for this issue
  /*we can choose to initialized the pointer to null at the time of declaration
  example: int *p_NUMBER{} or int *p_NUMBER{nullptr}
  We can also check if the pointer is null with the following code.
  */
 if (p_NUMBER != nullptr){
  std::cout<<"p_NUMBER: "<<p_NUMBER<<std::endl;
 }
 else{
    std::cout<<"Invalide address!"<<std::endl;
 }
}

