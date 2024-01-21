# include <iostream>
//using the range for loop to iterate over array elements
int main(){
    /*int marks[]{15, 14, 16, 20, 19, 15,18, 20};
    for(auto value: marks){
        std::cout<<value<<std::endl;
    }*/

    //using constand arrays
    const double scores[]{34.56, 56.345, 34.0, 34.56, 25.566};
    int sum = 0;

    for(auto value:scores){
        sum +=value;
        std::cout<<sum<<std::endl;//displays the cummulation
    }
    std::cout <<sum<<std::endl; //displays the total sum
}