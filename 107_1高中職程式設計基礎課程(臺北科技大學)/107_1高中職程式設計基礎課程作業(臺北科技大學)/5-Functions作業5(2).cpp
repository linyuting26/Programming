#include <iostream>

void fn_GetCircleInfo(double N);
     const double double_ctd_PI=3.1415;//double_ctd_PI為圓周率

int main(){
    double Number = 0;
    std::cout<< "Please enter a double number:";
    std::cin>> Number;
    fn_GetCircleInfo(Number);

    return 0;
}

void  fn_GetCircleInfo(double N){
      const double double_ctd_PI=3.1415;//double_ctd_PI為圓周率
      std::cout<< "Diameter is "<< N*2 <<" units"<<std::endl;
      std::cout<< "Circumference is "<< N*2*double_ctd_PI <<" units"<<std::endl;
      std::cout<< "Area is "<< N*N*double_ctd_PI <<" units"<<std::endl;
}
