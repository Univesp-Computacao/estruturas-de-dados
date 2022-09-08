#include "aluno.h"

class Hash {
 public:
  Hash(int max_items = 100);
  ~Hash();
  bool isFull() const;
  int getLength() const;
  
  void retrieveItem(Aluno& aluno, bool& found);   
  void insertItem(Aluno aluno); 
  void deleteItem(Aluno aluno);  
  void print();
 private:
  int getHash(Aluno aluno);
  int   max_items;
  int   length;
  Aluno* structure;
};


