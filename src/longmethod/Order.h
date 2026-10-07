#pragma once

#include <optional>
#include <stdexcept>
#include <string>
#include <vector>

#include "longmethod/Customer.h"
#include "longmethod/OrderItem.h"
#include "longmethod/OrderSummary.h"

namespace refactoring::longmethod {

class IllegalStateException : public std::runtime_error {
public:
    explicit IllegalStateException(const std::string& message) : std::runtime_error(message) {}
};

class Order {
public:
    Order(std::optional<std::vector<OrderItem>> items, Customer customer);

    OrderSummary summarise() const;

private:
    void validate() const;
    double calculateSubtotal() const;
    double applyDiscount(double subtotal) const;
    double calculateTax(double subtotal, double discount) const;
    double calculateTotal(double subtotal, double discount, double tax) const;

    std::optional<std::vector<OrderItem>> items_;
    Customer customer_;
};

} // namespace refactoring::longmethod
