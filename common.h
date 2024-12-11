// Handwrite this code for Week14 SAFE quiz and the End Semester Exam
// DO NOT take a print out or xerox
// you will NOT be allowed to use an electronic copy of this either, during the exam,
// so the only option is for you to handwrite this neatly on a notebook/paper
// Copy the comments as well, just in case...

const unsigned int MAXSTR = 20; //Maximum number of characters in a string (excluding null char for termination)
const char NULLCHAR = '\0';
const double epsilon= 0.0001;

//Defines a message
struct Message{
  bool is_decrypted = false; //Should be set to true only when decrypted part has been assigned
  char encrypted[MAXSTR+1]= {NULLCHAR}; //An encrypted message that is MAXSTR characters long (excluding NULLCHAR)
  char decrypted[MAXSTR+1]= {NULLCHAR}; //A decrypted message that is MAXSTR characters long (excluding NULLCHAR)
};

//Defines a commodity
struct Commodity{
    unsigned int uid; //A number used to identify the commodity
    double quantity; //Total quantity of the commodity
    double cost; //Total cost or value of the commodity
    double calc; //Some calculated value associated with the commodity
};

//Defines a struct for aiding in performing comparisons
struct Comparable{
    double* key;
    Commodity* fc;
};

//Strictly greater than check
bool gt (Comparable a, Comparable b){
    return *a.key >(*b.key + epsilon);
}

//Greater than or equal to check
bool gte (Comparable a, Comparable b){
    return *a.key >= (*b.key - epsilon);
}

//Strictly less than check
bool lt (Comparable a, Comparable b){
    return *a.key < *b.key - epsilon;
}

//Less than or equal to check
bool lte (Comparable a, Comparable b){
    return *a.key <= *b.key + epsilon;
}

const int num_commodities = 7;
//An array of commodities with number of array elements = num_commodities
Commodity commodity_arr[num_commodities];

//Initializes commodity_arr array in a predefined way
//Note that the calc data members are not initialized here
void initialize_commodities(){
    for(int i=0; i<num_commodities; i++){
        commodity_arr[i].uid = i+1;
        double x= i + 1.0;
        commodity_arr[i].cost = x/10.0 + (x-3.0)*(x-3.0);
        commodity_arr[i].quantity = x/10.0 + (x-4.0)*(x-4.0);
    }
}
