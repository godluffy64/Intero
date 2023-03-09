class Client {       // The class
  public:   
    string FirstName;       
    string LastName;  
    int Hash;  
    Client(){

    };
    Client(string f,string l){
        FirstName = f;
        LastName = l;
    } 
    bool operator<(const Client& other) const {
        if (LastName == other.LastName) {
            return FirstName < other.FirstName;
        }
        return LastName < other.LastName;
    }      
};


































struct client {             // Structure declaration
  string FirstName;         // Member (int variable)
  string LastName;   // Member (string variable)
  int Hash;
};