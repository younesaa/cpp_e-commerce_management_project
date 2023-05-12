#ifndef PRODUCT_H
#define PRODUCT_H

#include<string>

class product
{
private:
    std::string name;
    std::string description;
    float price;
    int quantity;
public:
    product();
    product(std::string name_ ,std::string description_ , float price_ , int quantity_);
    ~product();
    std::string getName() const;
    void setName( const std::string &name_);
    std::string getDescription() const;
    void setDescription(const std::string &description_);
    float getPrice() const;
    void setPrice(const float &price_);
    int getQuantity() const;
    void setQuantity(const int &quantity_);
};
#endif