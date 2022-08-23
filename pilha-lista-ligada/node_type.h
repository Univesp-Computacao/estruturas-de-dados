typedef char ItemType;
/*
 Estrutura usada para guardar 
 a informação e o endereço do 
 próximo elemento.
*/
struct NodeType
{
  ItemType info;
  NodeType* next;
};

