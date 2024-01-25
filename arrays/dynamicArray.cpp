# include <iostream>
//using the range for loop to iterate over array elements
int main(){
    size_t size{10};
    /*int marks[]{15, 14, 16, 20, 19, 15,18, 20};
    for(auto value: marks){
        std::cout<<value<<std::endl;
    }*/

    //using constand arrays
   /*const double scores[]{34.56, 56.345, 34.0, 34.56, 25.566, 55.0};
    int sum = 0;

    for(auto value:scores){
        sum +=value;
        std::cout<<sum<<std::endl; //displays the cummulation
    }
    std::cout <<sum<<std::endl; //displays the total sum

    std::cout << std::size(scores)<<std::endl; //displays the size of an array at run time.
*/ 

//dynamically allocating arrays in the heap memory
double *p_salary{new double[size]}; //array declared in heap with null/gabbage values
for(size_t i=0; i<=size; ++i){
    std::cout<<i<<"--->"<<p_salary[i]<<std::endl;
}
int *p_student{new(std::nothrow) int[size]}; //all values initialized to 0
for(size_t i=0; i<=size; ++i){
    std::cout<<i<<"--->"<<p_student[i]<<std::endl;
}
/*Since array is declared of size 10, first 6 variables will be contain the values below
the the remaing 4 memory will be initialized to 0*/
double *p_score{new(std::nothrow) double[size]{2,4, 6, 8, 34,}};
for(size_t i=0; i<=size; ++i){
    std::cout<<i<<"--->"<<p_score[i]<<std::endl;
}
//Releasing array memory in heap
delete[] p_salary;
p_salary = nullptr;
delete[] p_salary;
p_student = nullptr;
delete[] p_score;
p_score = nullptr;
}