#ifndef PAYMENT_H
#define PAYMENT_H

#include <vector>
#include <string>
/*name, email, password, and a list of products they are selling.*/
class payment
{
private:
    std::string paymentMethods; 
    int paymentAmount;
public:
    payment(std::string paymentMethods_ , int paymentAmount_);
    ~payment();
    int paymentProcess() const ;
};
#endif