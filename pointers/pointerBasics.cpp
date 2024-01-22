# include <iostream>

/*Pointers are variables whose values are addresses of other variables.
*Pointer can only store address of variables that are of same types as the pointer address
*/

int main(){
    int *pr_AGE{}; //initialize pointers with nullptr implicitly
    int *scores{nullptr}; //expicitly initialized pointers
    int AGE{27};
    int MARK{18};
    pr_AGE = &AGE;
    scores = &MARK;

    std::cout<<"The address of the variable age is: "<<pr_AGE<<std::endl;
    std::cout <<"The address of the variable score is: "<<scores<<std::endl;

  //dereferencing pointers

  std::cout<<"The actual values of the pointer pr_AGE is: "<<*pr_AGE<<std::endl;
  std::cout <<"The actual value of the pointer scores is: "<<*scores<<std::endl;

}