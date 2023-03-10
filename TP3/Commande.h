#ifndef COMMANDE_H_INCLUDED
#define COMMANDE_H_INCLUDED
#include "Client.h"
#include "Product.h"
#include <vector>
#include <iostream>
namespace commande {
class Commande {

public:
    // constructeurs

        Commande(client::Client& client, int confirmation , std::vector<product::Product> products , int id);

    // declaration des setters
    void setclient(client::Client& client);
    void setconfirmation(int confirmation);

    // declaration des getters
        client::Client* getclient() const ;
        std::vector<product::Product> getproduct() const;
        int getid() const;
        int getconfirmation() const;




private:
    // declaration des menbre prive
        client::Client* _client;
        std::vector<product::Product> _products;
        int _confirmation;
        int _id;

};
std::ostream& operator << (std::ostream& os, const Commande& commande) ;
}

#endif // COMMANDE_H_INCLUDED
