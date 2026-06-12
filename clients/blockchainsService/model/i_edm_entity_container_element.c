#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_entity_container_element.h"


char* i_edm_entity_container_element_container_element_kind_ToString(blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_e container_element_kind) {
    char* container_element_kindArray[] =  { "NULL", "None", "EntitySet", "ActionImport", "FunctionImport", "Singleton" };
    return container_element_kindArray[container_element_kind];
}

blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_e i_edm_entity_container_element_container_element_kind_FromString(char* container_element_kind){
    int stringToReturn = 0;
    char *container_element_kindArray[] =  { "NULL", "None", "EntitySet", "ActionImport", "FunctionImport", "Singleton" };
    size_t sizeofArray = sizeof(container_element_kindArray) / sizeof(container_element_kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(container_element_kind, container_element_kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

i_edm_entity_container_element_t *i_edm_entity_container_element_create(
    char *name,
    blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_e container_element_kind,
    i_edm_entity_container_t *container
    ) {
    i_edm_entity_container_element_t *i_edm_entity_container_element_local_var = malloc(sizeof(i_edm_entity_container_element_t));
    if (!i_edm_entity_container_element_local_var) {
        return NULL;
    }
    i_edm_entity_container_element_local_var->name = name;
    i_edm_entity_container_element_local_var->container_element_kind = container_element_kind;
    i_edm_entity_container_element_local_var->container = container;

    return i_edm_entity_container_element_local_var;
}


void i_edm_entity_container_element_free(i_edm_entity_container_element_t *i_edm_entity_container_element) {
    if(NULL == i_edm_entity_container_element){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_entity_container_element->name) {
        free(i_edm_entity_container_element->name);
        i_edm_entity_container_element->name = NULL;
    }
    if (i_edm_entity_container_element->container) {
        i_edm_entity_container_free(i_edm_entity_container_element->container);
        i_edm_entity_container_element->container = NULL;
    }
    free(i_edm_entity_container_element);
}

cJSON *i_edm_entity_container_element_convertToJSON(i_edm_entity_container_element_t *i_edm_entity_container_element) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_entity_container_element->name
    if(i_edm_entity_container_element->name) {
    if(cJSON_AddStringToObject(item, "name", i_edm_entity_container_element->name) == NULL) {
    goto fail; //String
    }
    }


    // i_edm_entity_container_element->container_element_kind
    if(i_edm_entity_container_element->container_element_kind != blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_NULL) {
    if(cJSON_AddStringToObject(item, "containerElementKind", container_element_kindi_edm_entity_container_element_ToString(i_edm_entity_container_element->container_element_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // i_edm_entity_container_element->container
    if(i_edm_entity_container_element->container) {
    cJSON *container_local_JSON = i_edm_entity_container_convertToJSON(i_edm_entity_container_element->container);
    if(container_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "container", container_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

i_edm_entity_container_element_t *i_edm_entity_container_element_parseFromJSON(cJSON *i_edm_entity_container_elementJSON){

    i_edm_entity_container_element_t *i_edm_entity_container_element_local_var = NULL;

    // define the local variable for i_edm_entity_container_element->container
    i_edm_entity_container_t *container_local_nonprim = NULL;

    // i_edm_entity_container_element->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_edm_entity_container_elementJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_edm_entity_container_element->container_element_kind
    cJSON *container_element_kind = cJSON_GetObjectItemCaseSensitive(i_edm_entity_container_elementJSON, "containerElementKind");
    blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_e container_element_kindVariable;
    if (container_element_kind) { 
    if(!cJSON_IsString(container_element_kind))
    {
    goto end; //Enum
    }
    container_element_kindVariable = i_edm_entity_container_element_container_element_kind_FromString(container_element_kind->valuestring);
    }

    // i_edm_entity_container_element->container
    cJSON *container = cJSON_GetObjectItemCaseSensitive(i_edm_entity_container_elementJSON, "container");
    if (container) { 
    container_local_nonprim = i_edm_entity_container_parseFromJSON(container); //nonprimitive
    }


    i_edm_entity_container_element_local_var = i_edm_entity_container_element_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        container_element_kind ? container_element_kindVariable : blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_NULL,
        container ? container_local_nonprim : NULL
        );

    return i_edm_entity_container_element_local_var;
end:
    if (container_local_nonprim) {
        i_edm_entity_container_free(container_local_nonprim);
        container_local_nonprim = NULL;
    }
    return NULL;

}
