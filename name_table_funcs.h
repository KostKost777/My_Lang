#ifndef NAME_TABLE_FUNCS
#define NAME_TABLE_FUNCS

const int MAX_NUM_OF_IDENT = 100;

enum IdentType
{
    VAR = 0,
    FUNC = 1
};

struct NameTableEl
{
    IdentType type;
    char* name;
    size_t hash;
    size_t visible_space;
    size_t address;
    char* func_ptr;
};

struct NameTable
{
    NameTableEl arr[MAX_NUM_OF_IDENT];
    size_t now_visible_space;
    size_t size;
};

void NameTableCtor(NameTable* name_table);

void NameTableDtor(NameTable* name_table);

#endif
