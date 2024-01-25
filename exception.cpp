# include <iostream>
//Alternative of exception could be nothrow
int main(){
    int limit{0};
    int denominator{2};
    for (int i=5; i>=limit; --i){
    try{
    i = i/denominator;
    }catch(std::exception& ex){
    std::cout<<"Cought exception ourselves:"<<ex.what()<<std::endl;
    }
    }
}