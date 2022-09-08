#include "hash.h" 
#include <iostream>
using namespace std;

Hash::Hash(int max) {  
  length = 0;
  max_items = max;
  structure = new Aluno[max_items];   
}

Hash::~Hash(){
  delete [] structure;
}

bool Hash::isFull() const {
  return (length == max_items);
}

int Hash::getLength() const {
  return length;
}

void Hash::retrieveItem(Aluno& aluno, bool& found) {
  int location = getHash(aluno);
  Aluno aux    = structure[location];
  if (aluno.getRa() != aux.getRa()) {
    found      = false;
  } else {
    found      = true;
    aluno      = aux;
  }
}

void Hash::insertItem(Aluno aluno) {
  int location = getHash(aluno);
  structure[location] = aluno;
  length++;
}
void Hash::deleteItem(Aluno aluno) {
  int location = getHash(aluno);
  structure[location] = Aluno();
  length--; 
}

void Hash::print() {
  for (int i = 0; i < max_items; i++) {
    cout << i <<":"<<
      structure[i].getRa()<<", "<<
      structure[i].getNome()<<endl;
  }
}

int Hash::getHash(Aluno aluno){
  return aluno.getRa() % max_items;
}
