#include <iostream>
using namespace std;
#include <cstdlib>
/* template class for 2D-Array.h
*  
*  contains overloaded [] operator
*  and << operator.
*/
template <class T>
class Array2D { 

  template <class V>
    friend ostream& operator<<(ostream&, const Array2D<V>&);
  public:
    Array2D(int=5, int=25);
    ~Array2D();
    T* operator[](int);
    int getLength();
    int getWidth();
  private:
    int  length; 
    int  width; 
    T**  elements;
};

template <class T>
Array2D<T>::Array2D(int l, int w) {
  if(l < 0 || w < 0) {
    cerr<<"invalid length or width"<<endl;
    exit(1);
  }
  
  length = l;
  width  = w;
  elements = new T*[length];
  for(int i = 0; i < length; ++i) {
    elements[i] = new T[width];
  }
}

template <class T>
Array2D<T>::~Array2D() {
  for(int i = 0; i < length; ++i) {
    delete[] elements[i];
  }
  delete[] elements;
}

template <class T>
T* Array2D<T>::operator[](int s) {
  if (s<0 || s >= length || s>= width) {
    cerr<<"Overflow"<<endl;
    exit(1);
  }
  return elements[s];//returns an array so cascading can happen
}

template <class T>
ostream& operator<<(ostream& output, const Array2D<T>& arr) { 
  for (int i=-1; i< arr.length+1; ++i) {
    output << "|"; //wall for grid not actually apart of 2D-Array
    for (int j=0; j< arr.width; ++j) {
      if(i == -1 || i == arr.length) {
        output << "-";//ceiling/floor
        continue;
      }
      output << arr.elements[i][j]; 
     }
     if(i == 1 || i == 2 || i == 3) {
       output << "=" <<endl;//gate
       continue;
     }
     output << "|" << endl;//wall
   }
  return output;
}

template <class T>
int Array2D<T>::getLength() { return length; }

template <class T>
int Array2D<T>::getWidth() { return width; }

