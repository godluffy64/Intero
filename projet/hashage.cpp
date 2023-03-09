#include "hashage.hpp"
#include "client.hpp"
int main(){
int nombre = 0;
vector<Client> clients = { Client("Alice", "Smith"),
                                    Client("Bob", "Jones"),
                                    Client("Alice", "Jones"),
                                    Client("Bob", "Smith") };
Client c;
c.FirstName = "Aslan";
c.LastName = "Taleb";


clients[0] = c;

string fullName = c.FirstName + c.LastName;
    clients[0].Hash = NAMEHASH(get(fullName));
    sort(clients.begin(), clients.end());
 
    for( Client c: clients){
        cout<<"--Client"<<++nombre<<" : "<<endl;
        cout<<"Nom : "<<c.FirstName<<endl;
        cout<<"Preonm : "<<c.LastName<<endl;
        fullName = c.FirstName + c.LastName;
        cout<<"Hash : "<<NAMEHASH(get(fullName))<<endl;
        clients[nombre].Hash = NAMEHASH(get(fullName));

    }


    return 0;
}