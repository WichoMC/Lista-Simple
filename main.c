#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main (){
    list *l;
    l=create_list();
    add_init(l , 2);
    add_end(l ,1);
    print_list(l);
    serach_data(l,2);
    delete_init(1);
    delete_data(l,1);
    l=NULL;
    return 0;

}
