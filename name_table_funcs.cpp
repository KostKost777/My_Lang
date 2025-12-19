#include <TXLib.h>

#include "name_table_funcs.h"

void NameTableCtor(NameTable* name_table)
{
    assert(name_table);

    name_table->size = 0;
    name_table->now_visible_space = 0;
}

void NameTableDtor(NameTable* name_table)
{
    assert(name_table);

    for (size_t i = 0; i < name_table->size; ++i)
    {
        free(name_table->arr[i].name);
        name_table->arr[i].name = NULL;
    }
}
