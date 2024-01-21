# include <iostream>
int main(){
    int marks[5] {15, 18, 14, 19, 20};
    for (int i =0; i<sizeof(marks)/4; i++){
        std::cout<<marks[i]<<std::endl;
    }

return 0;
}