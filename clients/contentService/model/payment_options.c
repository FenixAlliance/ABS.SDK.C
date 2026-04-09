#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_options.h"



payment_options_t *payment_options_create(
    list_t *payment_methods
    ) {
    payment_options_t *payment_options_local_var = malloc(sizeof(payment_options_t));
    if (!payment_options_local_var) {
        return NULL;
    }
    payment_options_local_var->payment_methods = payment_methods;

    return payment_options_local_var;
}


void payment_options_free(payment_options_t *payment_options) {
    if(NULL == payment_options){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_options->payment_methods) {
        list_ForEach(listEntry, payment_options->payment_methods) {
            payment_method_free(listEntry->data);
        }
        list_freeList(payment_options->payment_methods);
        payment_options->payment_methods = NULL;
    }
    free(payment_options);
}

cJSON *payment_options_convertToJSON(payment_options_t *payment_options) {
    cJSON *item = cJSON_CreateObject();

    // payment_options->payment_methods
    if(payment_options->payment_methods) {
    cJSON *payment_methods = cJSON_AddArrayToObject(item, "paymentMethods");
    if(payment_methods == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *payment_methodsListEntry;
    if (payment_options->payment_methods) {
    list_ForEach(payment_methodsListEntry, payment_options->payment_methods) {
    cJSON *itemLocal = payment_method_convertToJSON(payment_methodsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(payment_methods, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

payment_options_t *payment_options_parseFromJSON(cJSON *payment_optionsJSON){

    payment_options_t *payment_options_local_var = NULL;

    // define the local list for payment_options->payment_methods
    list_t *payment_methodsList = NULL;

    // payment_options->payment_methods
    cJSON *payment_methods = cJSON_GetObjectItemCaseSensitive(payment_optionsJSON, "paymentMethods");
    if (payment_methods) { 
    cJSON *payment_methods_local_nonprimitive = NULL;
    if(!cJSON_IsArray(payment_methods)){
        goto end; //nonprimitive container
    }

    payment_methodsList = list_createList();

    cJSON_ArrayForEach(payment_methods_local_nonprimitive,payment_methods )
    {
        if(!cJSON_IsObject(payment_methods_local_nonprimitive)){
            goto end;
        }
        payment_method_t *payment_methodsItem = payment_method_parseFromJSON(payment_methods_local_nonprimitive);

        list_addElement(payment_methodsList, payment_methodsItem);
    }
    }


    payment_options_local_var = payment_options_create (
        payment_methods ? payment_methodsList : NULL
        );

    return payment_options_local_var;
end:
    if (payment_methodsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, payment_methodsList) {
            payment_method_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(payment_methodsList);
        payment_methodsList = NULL;
    }
    return NULL;

}
