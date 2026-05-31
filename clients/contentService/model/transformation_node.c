#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transformation_node.h"


char* transformation_node_kind_ToString(contentservice_transformation_node_KIND_e kind) {
    char* kindArray[] =  { "NULL", "Aggregate", "GroupBy", "Filter", "Compute", "Expand" };
    return kindArray[kind];
}

contentservice_transformation_node_KIND_e transformation_node_kind_FromString(char* kind){
    int stringToReturn = 0;
    char *kindArray[] =  { "NULL", "Aggregate", "GroupBy", "Filter", "Compute", "Expand" };
    size_t sizeofArray = sizeof(kindArray) / sizeof(kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(kind, kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

transformation_node_t *transformation_node_create(
    contentservice_transformation_node_KIND_e kind
    ) {
    transformation_node_t *transformation_node_local_var = malloc(sizeof(transformation_node_t));
    if (!transformation_node_local_var) {
        return NULL;
    }
    transformation_node_local_var->kind = kind;

    return transformation_node_local_var;
}


void transformation_node_free(transformation_node_t *transformation_node) {
    if(NULL == transformation_node){
        return ;
    }
    listEntry_t *listEntry;
    free(transformation_node);
}

cJSON *transformation_node_convertToJSON(transformation_node_t *transformation_node) {
    cJSON *item = cJSON_CreateObject();

    // transformation_node->kind
    if(transformation_node->kind != contentservice_transformation_node_KIND_NULL) {
    if(cJSON_AddStringToObject(item, "kind", kindtransformation_node_ToString(transformation_node->kind)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

transformation_node_t *transformation_node_parseFromJSON(cJSON *transformation_nodeJSON){

    transformation_node_t *transformation_node_local_var = NULL;

    // transformation_node->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(transformation_nodeJSON, "kind");
    contentservice_transformation_node_KIND_e kindVariable;
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //Enum
    }
    kindVariable = transformation_node_kind_FromString(kind->valuestring);
    }


    transformation_node_local_var = transformation_node_create (
        kind ? kindVariable : contentservice_transformation_node_KIND_NULL
        );

    return transformation_node_local_var;
end:
    return NULL;

}
