#include <iostream>
#include "product.h"


product::product() : name("Undefined") ,description("Undefined") , price(0.0) , quantity(0) {}

product::product(std::string name_ ,std::string description_ , float price_ , int quantity_) : name(name_) ,description(description_) , price(price_) , quantity(quantity_) {}

product::~product() { std::cout<< "product object is destroyed"<<std::endl;}

std::string product::getName() const { return name;}

void product::setName( const std::string &name_) { name = name_;}

std::string product::getDescription() const { return description;}

void product::setDescription( const std::string &description_) { description = description_;}

float product::getPrice() const { return price;}

void product::setPrice( const float &price_) { price = price_;}

int product::getQuantity() const { return quantity;}

void product::setQuantity( const int &quantity_) { quantity = quantity_;}