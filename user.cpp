#include<iostream>
#include "user.h"

user::user() :     name("Unknown") , email("Unknown") , password("password") {}

user::user(std::string name_ ,std::string email_ , std::string password_)    :     name(name_) , email(email_) , password(password_) {}

user::~user() { std::cout<< "user is destroyed "<<std::endl;}

std::string user::getName() const { return name;}

void user::setName(const std::string &name_){name = name_;}

std::string user::getEmail() const { return email;}

void user::setEmail(const std::string &email_){email = email_;}

std::string user::getPassword() const { return password;}

void user::setPassword(const std::string &password_){password = password_;}

std::vector<product> user::getSellingProduct() const { return sellingProduct;}

void user::addProduct(const product &product_){
    sellingProduct.push_back(product_);
}
void user::removeProduct(const product &product_){
    if(!sellingProduct.empty()){
        for(auto it=sellingProduct.begin() ; it !=sellingProduct.end();++it){
            if(it->getName() == product_.getName()) {
                sellingProduct.erase(it);
                break;
            }
        }
    }
}