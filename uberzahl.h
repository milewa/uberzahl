#ifndef UBERZAHL_H
#define UBERZAHL_H
#include<iostream>
#include<string>
#include<vector>

class uberzahl {
  public:
    uberzahl ( void );
    ~uberzahl ( void );
    uberzahl ( const char* );
    uberzahl ( unsigned long long );
    uberzahl ( const uberzahl& );
    const uberzahl& operator = ( const uberzahl& );
    
    friend std::ostream& operator << ( std::ostream&, const uberzahl& );
    
    // arithmetic
    uberzahl operator + ( const uberzahl& ) const;
    uberzahl operator - ( const uberzahl& ) const;
    uberzahl operator * ( const uberzahl& ) const;
    uberzahl operator / ( const uberzahl& ) const; // Alex Check
    uberzahl operator % ( const uberzahl& ) const;
    
    // comparators
    bool operator > ( const uberzahl& ) const; // Alex Update
    bool operator < ( const uberzahl& ) const;
    bool operator >= ( const uberzahl& ) const;
    bool operator <= ( const uberzahl& ) const;
    bool operator == ( const uberzahl& ) const;
    bool operator != ( const uberzahl& ) const;
    
    // bitwize operators
    uberzahl operator | ( const uberzahl& ) const; // Alex's Stuff
    uberzahl operator & ( const uberzahl& ) const;
    uberzahl operator ^ ( const uberzahl& ) const;
    uberzahl operator >> ( unsigned int ) const;
    uberzahl operator << ( unsigned int ) const;

    // Emily Update
    // inverses
    // random

  private:
    std::string string_value;
    std::vector<unsigned int> value_vector;
    void convert_to_numeric ( void );
    void convert_to_string ( void ); // Emily do this too
    void clean_bits ( void );
};

#endif
