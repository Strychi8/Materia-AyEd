#include "ListaDoble.hpp"
#include <iostream>
using namespace std;

struct StructDoubleList
{
  int dataSize;
  int size;
  DoubleNode first;
};

struct StructDoubleNode
{
  void *value;
  DoubleNode next;
  DoubleNode prev;
};

// constructor
DoubleList createDoubleList(int dataSize)
{
  DoubleList list = new StructDoubleList;

  list->dataSize = dataSize;
  list->size = 0;
  list->first = NULL;

  return list;
}
DoubleNode createDoubleNode(DoubleList list, void *value)
{
  DoubleNode node = new StructDoubleNode;

  int dataSize = getDataSizeDoubleList(list);

  node->next = NULL;
  node->prev = NULL;

  node->value = malloc(dataSize);

  memcpy(node->value, value, dataSize);

  return node;
}

// destructor
void destroyDoubleList(DoubleList list)
{
  DoubleNode node = list->first;
  DoubleNode next;

  while (node != NULL)
  {
    next = node->next;
    destroyDoubleNode(node);
    node = next;
  }

  delete list;
}
void destroyDoubleNode(DoubleNode node)
{
  free(node->value);
  delete node;
}

// insert
void insertDoubleListItem(DoubleList list, void *value, int index)
{
  DoubleNode node = createDoubleNode(list, value);

  int size = getSizeDoubleList(list);

  if (index < 0)
    index = 0;
  if (index > size)
    index = size;

  if (index == 0)
  {
    if (size != 0)
    {
      node->next = list->first;
      list->first->prev = node;
    }
    list->first = node;
  }
  else
  {
    DoubleNode prev = getDoubleListNode(list, index - 1);
    DoubleNode next = prev->next;

    prev->next = node;
    node->prev = prev;
    if (index != size)
    {
      node->next = next;
      next->prev = node;
    }
  }
  list->size++;
}

// get
void *getDoubleListItem(DoubleList list, int index)
{
  if (index < 0 || index >= getSizeDoubleList(list))
    return NULL;

  return getDoubleListNode(list, index)->value;
}
DoubleNode getDoubleListNode(DoubleList list, int index)
{
  DoubleNode node = list->first;

  for (int i = 0; i < index; i++)
    node = node->next;

  return node;
}

// remove
void removeDoubleListItem(DoubleList list, int index)
{
  int size = getSizeDoubleList(list);

  if (index < 0 || index >= size)
    return;
  
  if (index == 0)
  {
    DoubleNode node = list->first;
    list->first = node->next;
    list->first->prev = NULL;
    destroyDoubleNode(node);
  }
  else
  {
    DoubleNode prev = getDoubleListNode(list, index - 1);
    DoubleNode node = prev->next;
    DoubleNode next = node->next;

    prev->next = next;
    if (index != size - 1)
      next->prev = prev;
    destroyDoubleNode(node);
  }
  list->size--;
}

// functions
int getSizeDoubleList(DoubleList list)
{
  return list->size;
}
int getDataSizeDoubleList(DoubleList list)
{
  return list->dataSize;
}
