# include <iostream>

/*signature: for(unsigned int{}; condition; increment/decrement){
    body
}
The following are the different sections of a loop.
iterator: variable for iterations.
starting point: initialization.
Test: Control when the loops stops.
Increment/decrement
Body
*/
int main(){
const size_t count{10};
for (int i{}; i< count; i++)
    std::cout<<"The value if i is: "<<i<<std::endl;

}