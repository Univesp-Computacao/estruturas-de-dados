#include "search_tree.h"
using namespace std;

const int NUM_ALUNOS = 8;

int main() {
  SearchTree searchTree;

  int ras[NUM_ALUNOS] = {20, 18, 58, 7, 19, 26, 25, 30};     
  string nomes[NUM_ALUNOS] = {
    "Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta", "ulisses"};
  Aluno alunos[NUM_ALUNOS];

  for (int i = 0; i < NUM_ALUNOS; i++){
    Aluno aluno = Aluno(ras[i], nomes[i]);
    alunos[i] = aluno;
    searchTree.insertAluno(aluno);
  }

  cout << "Pre:  ";
  searchTree.printPreOrder();
  cout << endl;
  cout << "In:   ";
  searchTree.printInOrder();
  cout << endl;
  cout << "Post: ";
  searchTree.printPostOrder();
  cout << endl;

  // Removendo aluno na raiz;
  searchTree.deleteAluno(alunos[0].getRa());
  cout << "********" << endl;
  cout << "Pre:  ";
  searchTree.printPreOrder();
  cout << endl;
  cout << "In:   ";
  searchTree.printInOrder();
  cout << endl;
  cout << "Post: ";
  searchTree.printPostOrder();
  cout << endl;
}
