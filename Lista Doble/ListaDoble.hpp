struct StructDoubleList;
typedef struct StructDoubleList *DoubleList;

struct StructDoubleNode;
typedef struct StructDoubleNode *DoubleNode;

// constructor
DoubleList createDoubleList(int dataSize);
DoubleNode createDoubleNode(DoubleList list, void *value);

// destructor
void destroyDoubleList(DoubleList list);
void destroyDoubleNode(DoubleNode node);

// insert
void insertDoubleListItem(DoubleList list, void *value, int index = 0);

// get
void *getDoubleListItem(DoubleList list, int index);
DoubleNode getDoubleListNode(DoubleList list, int index);

// remove
void removeDoubleListItem(DoubleList list, int index);

// functions
int getSizeDoubleList(DoubleList list);
int getDataSizeDoubleList(DoubleList list);
