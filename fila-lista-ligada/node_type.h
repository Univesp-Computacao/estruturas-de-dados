
#ifndef NODETYPE_H   // Inclua esse bloco apenas se TIME_H não está definido
#define NODETYPE_H   // Na primeira inclusão, defina TIME_H para que este
		 // bloco não seja incluído mais de uma vez.
typedef char ItemType;

struct NodeType
{
  ItemType info;
  NodeType* next;
};

#endif
