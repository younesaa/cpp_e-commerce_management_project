#include<iostream>
#include "payment.h"

#include <string>

payment::payment(std::string paymentMethods_ , int paymentAmount_) : paymentMethods(paymentMethods_) , paymentAmount(paymentAmount_) {}
payment::~payment(){}

int payment::paymentProcess() const {
    std::string confirmation;
    std::cout<< "ypu will pay : " << paymentAmount <<std::endl;
    std::cout<< "confirm : " << paymentAmount <<std::endl;
    std::cin>> confirmation;

    if(confirmation == "yes"){
           std::cout<< " payment confirmed with : " << paymentMethods << " and amount of : " << paymentAmount <<std::endl;
           return 1 ; 
    }else{
         std::cout<< " payment denied " <<std::endl;
         return 0 ; 
    }

}