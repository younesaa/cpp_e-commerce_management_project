#include<iostream>
#include "cart.h"

cart::cart(){}
cart::~cart(){}

void cart::addProductToCart(product product_ , int &quantity){
    product_.setQuantity(quantity);
    cartProducts.push_back(product_);
}
std::vector<product> cart::getSellingProduct() const { return cartProducts;}
void cart::removeProductFromCart(product product_ , int &quantity){
    if(!cartProducts.empty()){
        for(auto it=cartProducts.begin() ; it !=cartProducts.end();++it){
            if(it->getName() == product_.getName()) {
                if(it->getQuantity() > quantity){
                    it->setQuantity(it->getQuantity() - quantity);
                    break;
                }else{
                cartProducts.erase(it);
                break;
                }
            }
        }
    }
}
float cart::getPriceCart() const {
    float price = 0.0 ; 
    if(cartProducts.empty()) return 0.0;
    for(auto it=cartProducts.begin() ; it !=cartProducts.end();++it){
            price+=it->getPrice() * it->getQuantity();
    }
    return price;
};
