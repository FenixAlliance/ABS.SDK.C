#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "padding.h"



padding_t *padding_create(
    char *top,
    char *bottom,
    char *right,
    char *left
    ) {
    padding_t *padding_local_var = malloc(sizeof(padding_t));
    if (!padding_local_var) {
        return NULL;
    }
    padding_local_var->top = top;
    padding_local_var->bottom = bottom;
    padding_local_var->right = right;
    padding_local_var->left = left;

    return padding_local_var;
}


void padding_free(padding_t *padding) {
    if(NULL == padding){
        return ;
    }
    listEntry_t *listEntry;
    if (padding->top) {
        free(padding->top);
        padding->top = NULL;
    }
    if (padding->bottom) {
        free(padding->bottom);
        padding->bottom = NULL;
    }
    if (padding->right) {
        free(padding->right);
        padding->right = NULL;
    }
    if (padding->left) {
        free(padding->left);
        padding->left = NULL;
    }
    free(padding);
}

cJSON *padding_convertToJSON(padding_t *padding) {
    cJSON *item = cJSON_CreateObject();

    // padding->top
    if(padding->top) {
    if(cJSON_AddStringToObject(item, "top", padding->top) == NULL) {
    goto fail; //String
    }
    }


    // padding->bottom
    if(padding->bottom) {
    if(cJSON_AddStringToObject(item, "bottom", padding->bottom) == NULL) {
    goto fail; //String
    }
    }


    // padding->right
    if(padding->right) {
    if(cJSON_AddStringToObject(item, "right", padding->right) == NULL) {
    goto fail; //String
    }
    }


    // padding->left
    if(padding->left) {
    if(cJSON_AddStringToObject(item, "left", padding->left) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

padding_t *padding_parseFromJSON(cJSON *paddingJSON){

    padding_t *padding_local_var = NULL;

    // padding->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(paddingJSON, "top");
    if (top) { 
    if(!cJSON_IsString(top) && !cJSON_IsNull(top))
    {
    goto end; //String
    }
    }

    // padding->bottom
    cJSON *bottom = cJSON_GetObjectItemCaseSensitive(paddingJSON, "bottom");
    if (bottom) { 
    if(!cJSON_IsString(bottom) && !cJSON_IsNull(bottom))
    {
    goto end; //String
    }
    }

    // padding->right
    cJSON *right = cJSON_GetObjectItemCaseSensitive(paddingJSON, "right");
    if (right) { 
    if(!cJSON_IsString(right) && !cJSON_IsNull(right))
    {
    goto end; //String
    }
    }

    // padding->left
    cJSON *left = cJSON_GetObjectItemCaseSensitive(paddingJSON, "left");
    if (left) { 
    if(!cJSON_IsString(left) && !cJSON_IsNull(left))
    {
    goto end; //String
    }
    }


    padding_local_var = padding_create (
        top && !cJSON_IsNull(top) ? strdup(top->valuestring) : NULL,
        bottom && !cJSON_IsNull(bottom) ? strdup(bottom->valuestring) : NULL,
        right && !cJSON_IsNull(right) ? strdup(right->valuestring) : NULL,
        left && !cJSON_IsNull(left) ? strdup(left->valuestring) : NULL
        );

    return padding_local_var;
end:
    return NULL;

}
