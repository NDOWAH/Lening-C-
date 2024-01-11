# include<iostream>
# include<iomanip>

int main(){
    int name_col{5};
    int rul_col{8};
    int salary_col{5};
    int experience_col{5};
    //endl give the option to move to a new line
    //Experimentation without endl from iostream library
    std::cout <<"Hello Jane ";
    std::cout <<"how are you doing?\n";
    std::cout <<"=========================================\n\n";
    //With endl
    std::cout <<"Hello Jane " << std::endl;
    std::cout <<"how are you doing?"<<std::endl;

   //========================================================
   //flush gives the option to send data directly to the terminal without passing through buffer
   //Experiement with flush from iostream library, no difference interm of display on how flush works unless behind the scences
   std::cout << "++++++++++++++++++++++++++++++++++++++++++++\n\n";
   std::cout <<"This is a begginner level C++ programming"<<std::endl<<std::flush;
   std::cout <<"++++++++++++++++++++++++++++++++++++++++++++++\n\n";
   //====================================================================
   //formating tables
   std::cout <<"Unformatted table\n";
   std::cout <<"Janifer Lopes"<<" Senior SoftWare Engineer"<<" $3000 " << 10<<std::endl;
   std::cout <<"Donald Richard"<<" Data Scienctist "<<" $2500 " << 4<<std::endl;
   std::cout <<"Daniel Forba"<<" Senior Machine Learning Engineer"<<" $9000 " << 11<<std::endl;
   std::cout <<"Jame Robinger"<<" SoftWare Engineer"<<" $3000 " << 2<<std::endl;
   std::cout <<"Jeremy Gics"<<" Senior Data scientist"<<" $85000 " << 10<<std::endl;
   std::cout <<"Jude Rogan"<<" SoftWare Engineer"<<" $3000 " << 1<<std::endl;
   std::cout <<"Warrason Paul"<<" Machine Learning Engineer"<<" $3500 " << 2<<std::endl;
   std::cout <<"formatted table\n";
   std::cout <<std::setw(name_col) <<"Employee name"<<std::setw(rul_col) <<" Rule"<<std::setw(salary_col)<<" Salary "<<std::setw(experience_col) << "Years of experience"<<std::endl;
   std::cout <<std::setw(name_col)<<"Janifer Lopes"<<std::setw(rul_col)<<" Senior SoftWare Engineer"<<" $3000 " << 10<<std::endl;
   std::cout <<std::setw(name_col)<<"Donald Richard"<<std::setw(rul_col)<<" Data Scienctist "<<std::   setw(salary_col)<<" $2500 "<<std::setw(experience_col) << 4<<std::endl;
   std::cout <<std::setw(name_col) <<"Daniel Forba"<<std:: setw(rul_col)<<" Senior Machine Learning Engineer"<<std::setw(salary_col)<<" $9000 " <<std::setw(experience_col)<< 11<<std::endl;
   std::cout <<std::setw(name_col)<<"Jame Robinger"<<std:: setw(rul_col)<<" SoftWare Engineer"<<std::setw(salary_col)<<" $3000 " << 2<<std::endl;
   std::cout <<std::setw(name_col)<<"Jeremy Gics"<<std::setw(rul_col)<<" Senior Data scientist"<<std::setw(salary_col)<<" $85000 "<<std::setw(experience_col) << 10<<std::endl;
   std::cout <<std::setw(name_col)<<"Jude Rogan"<<std::setw(rul_col)<<" SoftWare Engineer"<<std::setw(salary_col)<<" $3000 " << 1<<std::setw(experience_col)<<std::endl;
   std::cout <<std::setw(name_col)<<"Warrason Paul"<<std::setw(rul_col)<<" Machine Learning Engineer"<<std::setw(salary_col)<<" $3500 " <<std::setw(experience_col)<< 2<<std::endl;


}