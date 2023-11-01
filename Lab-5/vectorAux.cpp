//#include "vectorAux.h"

#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
void removeDup(std::vector<T> & v)
{
  for(int i = 0; i < v.size(); i++){
	int del_index = seqVectSearch(v, i+1, v.size(), v[i]);
	if(del_index < v.size())//after call to sequential search then it goes into an if to determine whther there are duplicates or not
		v.erase(v.begin() + del_index);
	
			}
}


template <typename T>
unsigned seqVectSearch(const std::vector<T> & v, unsigned first, 
		       unsigned last, const T& target)
{
  ///  Complete the code.   Use the text's sequential search
  
  ///  algorithm for arrays as a model.
  unsigned i = first;
  while(i != last && v[i] != target)
	  i++;// goes through each i value in the vector v to determine what is the value were looking for
  if(i < last) 
	  return i;
	return last;           // return last if target not found
}

template <typename T>
void writeVector(const std::vector<T> & v)
{
  unsigned i;
  unsigned n = v.size();

  for (i = 0; i < n; i++)
    std::cout << v[i] << ' ';
  std::cout << std::endl;
}
