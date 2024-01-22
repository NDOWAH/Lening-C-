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
     */
    std::cout<<"====================================================\n\n";
   
/*The statement below initializes a pointer to null
it is equavalent to *p_number1{nullptr}
This indicates that the pointer points to nowhere
The program below crashes because we are trying to use
memory that is not ours.*/
/*
   std::cout<<"The program below crashes"<<std::endl;
    int *p_number1{};//
    *p_number1 = 54; //Writing to a pointer that points to nowhere: Bad practice.
    std::cout<<"Reading and writing to null pointers"<<std::endl;
    std::cout<<"The pointer *p_number1 points to: "<<p_number1<<" address"<<std::endl;
    std::cout<<"Its value is: "<<*p_number1<<std::endl;
    */
   std::cout<<"Dynamic memory allocation from a heap\n";
   /*
   The code below dynamically allocate space for a single int in the heap memory.
   This memory belongs to the program from now on.
   The system can't used it for anything else until we release it.
   After the line of code below executes we would have a valid memory allocated.
   The size of the allocated memory will be such that it can store the type 
   pointed to by the pointer.

   */
  /*
   int *p_number2{nullptr};
   p_number2 = new int;

   *p_number2 = 34; //writing to dynamically allocated memory, 34 is now stored in heap not stack.

   std::cout<<"dynamically allocating memory"<<std::endl;
   std::cout <<"*p_number2: "<<*p_number2<<std::endl;
   //release memory back to the OS.
   delete p_number2;
   p_number2 = nullptr; //Good practice to reset released memory to null.
   We now try to store data in memory we have already released, we have no access to.
   the program crashes.
   */
  /*
  std::cout<<"Writing to bad memory\n";
  *p_number2 = 56;
  std::cout<<"Done writing\n";
  */

  std::cout<<"================================================\n";
  std::cout<<"Dynamically initialized pointer at declaration\n";
  int *p_number3{new int}; //memory location has junk values.
  int *p_number4{new int(36)}; //use direct initialization.
  int *p_number5{new int{90}}; //use uniform initializstion.
  std::cout<<"*p_number3: "<<p_number3<<std::endl;
  std::cout<<"*p_number3: "<<*p_number3<<std::endl;
  std::cout<<"*p_number4: "<<p_number4<<std::endl;
  std::cout<<"*p_number4: "<<*p_number4<<std::endl;
  std::cout<<"*p_number5: "<<p_number5<<std::endl;
  std::cout<<"*p_number5: "<<*p_number5<<std::endl;

//release the memories.

  delete p_number3;
  p_number3 = nullptr;
  delete p_number4;
  p_number4 = nullptr;
  delete p_number5;
  p_number5 = nullptr;



    return 0;
}