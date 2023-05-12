#ifndef CART_H
#define CART_H

#include <vector>
#include "product.h"
/*name, email, password, and a list of products they are selling.*/
class cart
{
private:
    std::vector<product> cartProducts; 
public:
    cart();
    ~cart();
    void addProductToCart(product product_ , int &quantity);
    void removeProductFromCart(product product_ , int &quantity);
    std::vector<product> getSellingProduct() const;
    float getPriceCart() const;
};
#endif