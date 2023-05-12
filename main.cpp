#include <iostream>
#include<string>
#include "main.h"

int main() {
    /* product test*/
    product product1("T-Shirt" , "T-Shirt", 19.99, 10);
    product product2("Jeans","Jeans", 49.99 , 10);

    std::cout << "Product 1 name: " << product1.getName() << std::endl;
    std::cout << "Product 1 price: $" << product1.getPrice() << std::endl;

    std::cout << "Product 2 name: " << product2.getName() << std::endl;
    std::cout << "Product 2 price: $" << product2.getPrice() << std::endl;

    product1.setPrice(24.99);
    product2.setName("Blue Jeans");

    std::cout << "Product 1 new price: $" << product1.getPrice() << std::endl;
    std::cout << "Product 2 new name: " << product2.getName() << std::endl;
    /*user test*/
    std::string name,email,password;
    std::vector<user> users;
    bool isLoged = false ; 
    std::cout << "create account ! " << std::endl;
    std::cout << "account name  : " << std::endl;
    std::cin>> name;
    std::cout << "account email  : " << std::endl;
    std::cin>> email;
    std::cout << "account password  : " << std::endl;
    std::cin>> password;
    user user1(name , email , password);
    users.push_back(user1);
    std::cout << "log in : your mail please ! " << std::endl;
    std::cin>> email;
    for(auto it = users.begin() ; it != users.end(); it++){
        if(it->getEmail() == email) {
            std::cout << "log in : your password please ! " << std::endl;
            std::cin>> password;
            if(it->getPassword() == password) {
            std::cout << "log in : welcome ! " << std::endl;
            isLoged = true;   
            break;
            }else {std::cout << "log in : khroj t9awed " << std::endl;}
        }
    }
    if (isLoged == true){
        user1.addProduct(product1);
        user1.addProduct(product2);
        for(const auto &product : user1.getSellingProduct()){
            std::cout << "Product : " << product.getName() << " with price : " << product.getPrice() << std::endl;
        }
        user1.removeProduct(product2);
        for(const auto &product : user1.getSellingProduct()){
            std::cout << "Product : " << product.getName() << " with price : " << product.getPrice() << std::endl;
        }


        /* test cart*/

        cart cart1;
        int quantity = 5 ; 
        cart1.addProductToCart(product1,quantity);
        for(const auto &product : cart1.getSellingProduct()){
            std::cout << "Product : " << product.getName() << " with price * quantity : " << product.getPrice() * product.getQuantity() << std::endl;
        }
        quantity = 2 ;
        cart1.removeProductFromCart(product1,quantity);
        for(const auto &product : cart1.getSellingProduct()){
            std::cout << "Product : " << product.getName() << " with price * quantity : " << product.getPrice() * product.getQuantity() << std::endl;
        }  
        cart1.addProductToCart(product2,quantity);
        for(const auto &product : cart1.getSellingProduct()){
            std::cout << "Product : " << product.getName() << " with price * quantity : " << product.getPrice() * product.getQuantity() << std::endl;
        } 
        payment payment("paypal" , cart1.getPriceCart() );
        int resutl = payment.paymentProcess();
    }
    return 0;
}