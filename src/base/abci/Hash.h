// Yu-Cheng added
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////////////////////////////////////////////////////////////////////////
///                         BASIC TYPES                              ///
////////////////////////////////////////////////////////////////////////
typedef struct HashNode_Struct HashNode;

struct HashNode_Struct
{
    char* sKey;
    int nValue;
    HashNode* pNext;
};

////////////////////////////////////////////////////////////////////////
///                    FUNCTION DECLARATIONS                         ///
////////////////////////////////////////////////////////////////////////
extern void         hash_table_init(); 
extern unsigned int hash_table_hash_str(const char* skey);
extern void         hash_table_insert(const char* skey, int nvalue);
extern void         hash_table_remove(const char* skey);
extern HashNode*    hash_table_lookup(const char* skey);
extern void         hash_table_print();
extern void         hash_table_release();

