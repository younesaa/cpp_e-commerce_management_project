#ifndef USER_H
#define USER_H

#include<string>
#include<vector>
#include "product.h"
/*name, email, password, and a list of products they are selling.*/
class user
{
private:
    std::string name;
    std::string email;
    std::string password;
    std::vector<product> sellingProduct; 
public:
    user();
    user(std::string name_ ,std::string email_ , std::string password_);
    ~user();
    std::string getName() const;
    void setName(const std::string &name_);
    std::string getEmail() const;
    void setEmail(const std::string &email_);
    std::string getPassword() const;
    void setPassword(const std::string &password_);
    std::vector<product> getSellingProduct() const;
    void addProduct(const product &product_);
    void removeProduct(const product &product_);
};
#endif