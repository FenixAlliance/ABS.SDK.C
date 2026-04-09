#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "margin.h"



margin_t *margin_create(
    char *top,
    char *bottom,
    char *right,
    char *left
    ) {
    margin_t *margin_local_var = malloc(sizeof(margin_t));
    if (!margin_local_var) {
        return NULL;
    }
    margin_local_var->top = top;
    margin_local_var->bottom = bottom;
    margin_local_var->right = right;
    margin_local_var->left = left;

    return margin_local_var;
}


void margin_free(margin_t *margin) {
    if(NULL == margin){
        return ;
    }
    listEntry_t *listEntry;
    if (margin->top) {
        free(margin->top);
        margin->top = NULL;
    }
    if (margin->bottom) {
        free(margin->bottom);
        margin->bottom = NULL;
    }
    if (margin->right) {
        free(margin->right);
        margin->right = NULL;
    }
    if (margin->left) {
        free(margin->left);
        margin->left = NULL;
    }
    free(margin);
}

cJSON *margin_convertToJSON(margin_t *margin) {
    cJSON *item = cJSON_CreateObject();

    // margin->top
    if(margin->top) {
    if(cJSON_AddStringToObject(item, "top", margin->top) == NULL) {
    goto fail; //String
    }
    }


    // margin->bottom
    if(margin->bottom) {
    if(cJSON_AddStringToObject(item, "bottom", margin->bottom) == NULL) {
    goto fail; //String
    }
    }


    // margin->right
    if(margin->right) {
    if(cJSON_AddStringToObject(item, "right", margin->right) == NULL) {
    goto fail; //String
    }
    }


    // margin->left
    if(margin->left) {
    if(cJSON_AddStringToObject(item, "left", margin->left) == NULL) {
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

margin_t *margin_parseFromJSON(cJSON *marginJSON){

    margin_t *margin_local_var = NULL;

    // margin->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(marginJSON, "top");
    if (top) { 
    if(!cJSON_IsString(top) && !cJSON_IsNull(top))
    {
    goto end; //String
    }
    }

    // margin->bottom
    cJSON *bottom = cJSON_GetObjectItemCaseSensitive(marginJSON, "bottom");
    if (bottom) { 
    if(!cJSON_IsString(bottom) && !cJSON_IsNull(bottom))
    {
    goto end; //String
    }
    }

    // margin->right
    cJSON *right = cJSON_GetObjectItemCaseSensitive(marginJSON, "right");
    if (right) { 
    if(!cJSON_IsString(right) && !cJSON_IsNull(right))
    {
    goto end; //String
    }
    }

    // margin->left
    cJSON *left = cJSON_GetObjectItemCaseSensitive(marginJSON, "left");
    if (left) { 
    if(!cJSON_IsString(left) && !cJSON_IsNull(left))
    {
    goto end; //String
    }
    }


    margin_local_var = margin_create (
        top && !cJSON_IsNull(top) ? strdup(top->valuestring) : NULL,
        bottom && !cJSON_IsNull(bottom) ? strdup(bottom->valuestring) : NULL,
        right && !cJSON_IsNull(right) ? strdup(right->valuestring) : NULL,
        left && !cJSON_IsNull(left) ? strdup(left->valuestring) : NULL
        );

    return margin_local_var;
end:
    return NULL;

}
