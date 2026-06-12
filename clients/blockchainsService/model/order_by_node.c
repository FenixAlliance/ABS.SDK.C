#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_by_node.h"


char* order_by_node_direction_ToString(blockchainsservice_order_by_node_DIRECTION_e direction) {
    char* directionArray[] =  { "NULL", "Ascending", "Descending" };
    return directionArray[direction];
}

blockchainsservice_order_by_node_DIRECTION_e order_by_node_direction_FromString(char* direction){
    int stringToReturn = 0;
    char *directionArray[] =  { "NULL", "Ascending", "Descending" };
    size_t sizeofArray = sizeof(directionArray) / sizeof(directionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(direction, directionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

order_by_node_t *order_by_node_create(
    blockchainsservice_order_by_node_DIRECTION_e direction
    ) {
    order_by_node_t *order_by_node_local_var = malloc(sizeof(order_by_node_t));
    if (!order_by_node_local_var) {
        return NULL;
    }
    order_by_node_local_var->direction = direction;

    return order_by_node_local_var;
}


void order_by_node_free(order_by_node_t *order_by_node) {
    if(NULL == order_by_node){
        return ;
    }
    listEntry_t *listEntry;
    free(order_by_node);
}

cJSON *order_by_node_convertToJSON(order_by_node_t *order_by_node) {
    cJSON *item = cJSON_CreateObject();

    // order_by_node->direction
    if(order_by_node->direction != blockchainsservice_order_by_node_DIRECTION_NULL) {
    if(cJSON_AddStringToObject(item, "direction", directionorder_by_node_ToString(order_by_node->direction)) == NULL)
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

order_by_node_t *order_by_node_parseFromJSON(cJSON *order_by_nodeJSON){

    order_by_node_t *order_by_node_local_var = NULL;

    // order_by_node->direction
    cJSON *direction = cJSON_GetObjectItemCaseSensitive(order_by_nodeJSON, "direction");
    blockchainsservice_order_by_node_DIRECTION_e directionVariable;
    if (direction) { 
    if(!cJSON_IsString(direction))
    {
    goto end; //Enum
    }
    directionVariable = order_by_node_direction_FromString(direction->valuestring);
    }


    order_by_node_local_var = order_by_node_create (
        direction ? directionVariable : blockchainsservice_order_by_node_DIRECTION_NULL
        );

    return order_by_node_local_var;
end:
    return NULL;

}
