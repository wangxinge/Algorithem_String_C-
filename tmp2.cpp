#include <iostream>
using namespace std;

class Suffix {
public :
    int origin_node;
    int first_char_index;
    int last_char_index;
    Suffix( int node, int start, int stop )
            : origin_node( node ),
              first_char_index( start ),
              last_char_index( stop ){};
    int Explicit(){ return first_char_index > last_char_index; }
    int Implicit(){ return last_char_index >= first_char_index; }
    void Canonize();
};

const int MAX_LENGTH=1000;
char T[MAX_LENGTH];

int main()
{
cout<<"Enter string: "<<flush;
cin.getline(T,MAX_LENGTH-1);
cout<<"length of T "<<strlen(T)<<endl;
Suffix active(0,0,-1);
cout<<active.origin_node<<8;
cout<<active.origin_node<<'\t'<<active.first_char_index<<'\t'<<active.last_char_index<<endl;
return 0;
}
