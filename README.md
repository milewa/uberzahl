Herzlich willkomen auf der Uber Zahl!

=======================================================================

Compiling : g++ filename.cpp uberzahl.cpp -o outputfile

Check uberzahl.h for public functionality of the uberzahl class

Currently there is no way to generate primes with uberzahl
however you can uncomment the mpz class functions and generate
a prime with mpz.

Alternatively Rabin-Miller Primality testing will be available Friday

======================================================================

The number is stored in two forms :
  - string format where it is updated by the user
  - vector<unsigned int> format where the arithmetic is done
      the vector is in reverse order: position 0 is the low order bits
    these representations are updated on seperate occassions:
      string format -- only when inputing/outputing the number
      integer format -- whenever an arithmetic operation is performed

The main purpose of this library is to give an unoptimized version
of the traditional modular operation for use at the University of Michigan
in EECS 475.

This code was written by Alexander James, Emily Graetz, and Sai Gouravajhala
beginning 03/10/14

If you notice any glaring mistakes please contact the authors to
correct the error
  -  aljames.arctic@gmail.com
