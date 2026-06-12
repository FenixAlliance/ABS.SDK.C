#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "o_data_query_context.h"



o_data_query_context_t *o_data_query_context_create(
    default_query_configurations_t *default_query_configurations,
    i_edm_model_t *model,
    i_edm_type_t *element_type,
    i_edm_navigation_source_t *navigation_source,
    type_t *element_clr_type,
    list_t *path,
    object_t *request_container
    ) {
    o_data_query_context_t *o_data_query_context_local_var = malloc(sizeof(o_data_query_context_t));
    if (!o_data_query_context_local_var) {
        return NULL;
    }
    o_data_query_context_local_var->default_query_configurations = default_query_configurations;
    o_data_query_context_local_var->model = model;
    o_data_query_context_local_var->element_type = element_type;
    o_data_query_context_local_var->navigation_source = navigation_source;
    o_data_query_context_local_var->element_clr_type = element_clr_type;
    o_data_query_context_local_var->path = path;
    o_data_query_context_local_var->request_container = request_container;

    return o_data_query_context_local_var;
}


void o_data_query_context_free(o_data_query_context_t *o_data_query_context) {
    if(NULL == o_data_query_context){
        return ;
    }
    listEntry_t *listEntry;
    if (o_data_query_context->default_query_configurations) {
        default_query_configurations_free(o_data_query_context->default_query_configurations);
        o_data_query_context->default_query_configurations = NULL;
    }
    if (o_data_query_context->model) {
        i_edm_model_free(o_data_query_context->model);
        o_data_query_context->model = NULL;
    }
    if (o_data_query_context->element_type) {
        i_edm_type_free(o_data_query_context->element_type);
        o_data_query_context->element_type = NULL;
    }
    if (o_data_query_context->navigation_source) {
        i_edm_navigation_source_free(o_data_query_context->navigation_source);
        o_data_query_context->navigation_source = NULL;
    }
    if (o_data_query_context->element_clr_type) {
        type_free(o_data_query_context->element_clr_type);
        o_data_query_context->element_clr_type = NULL;
    }
    if (o_data_query_context->path) {
        list_ForEach(listEntry, o_data_query_context->path) {
            o_data_path_segment_free(listEntry->data);
        }
        list_freeList(o_data_query_context->path);
        o_data_query_context->path = NULL;
    }
    if (o_data_query_context->request_container) {
        object_free(o_data_query_context->request_container);
        o_data_query_context->request_container = NULL;
    }
    free(o_data_query_context);
}

cJSON *o_data_query_context_convertToJSON(o_data_query_context_t *o_data_query_context) {
    cJSON *item = cJSON_CreateObject();

    // o_data_query_context->default_query_configurations
    if(o_data_query_context->default_query_configurations) {
    cJSON *default_query_configurations_local_JSON = default_query_configurations_convertToJSON(o_data_query_context->default_query_configurations);
    if(default_query_configurations_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "defaultQueryConfigurations", default_query_configurations_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // o_data_query_context->model
    if(o_data_query_context->model) {
    cJSON *model_local_JSON = i_edm_model_convertToJSON(o_data_query_context->model);
    if(model_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "model", model_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // o_data_query_context->element_type
    if(o_data_query_context->element_type) {
    cJSON *element_type_local_JSON = i_edm_type_convertToJSON(o_data_query_context->element_type);
    if(element_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "elementType", element_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // o_data_query_context->navigation_source
    if(o_data_query_context->navigation_source) {
    cJSON *navigation_source_local_JSON = i_edm_navigation_source_convertToJSON(o_data_query_context->navigation_source);
    if(navigation_source_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "navigationSource", navigation_source_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // o_data_query_context->element_clr_type
    if(o_data_query_context->element_clr_type) {
    cJSON *element_clr_type_local_JSON = type_convertToJSON(o_data_query_context->element_clr_type);
    if(element_clr_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "elementClrType", element_clr_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // o_data_query_context->path
    if(o_data_query_context->path) {
    cJSON *path = cJSON_AddArrayToObject(item, "path");
    if(path == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *pathListEntry;
    if (o_data_query_context->path) {
    list_ForEach(pathListEntry, o_data_query_context->path) {
    cJSON *itemLocal = o_data_path_segment_convertToJSON(pathListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(path, itemLocal);
    }
    }
    }


    // o_data_query_context->request_container
    if(o_data_query_context->request_container) {
    cJSON *request_container_object = object_convertToJSON(o_data_query_context->request_container);
    if(request_container_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "requestContainer", request_container_object);
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

o_data_query_context_t *o_data_query_context_parseFromJSON(cJSON *o_data_query_contextJSON){

    o_data_query_context_t *o_data_query_context_local_var = NULL;

    // define the local variable for o_data_query_context->default_query_configurations
    default_query_configurations_t *default_query_configurations_local_nonprim = NULL;

    // define the local variable for o_data_query_context->model
    i_edm_model_t *model_local_nonprim = NULL;

    // define the local variable for o_data_query_context->element_type
    i_edm_type_t *element_type_local_nonprim = NULL;

    // define the local variable for o_data_query_context->navigation_source
    i_edm_navigation_source_t *navigation_source_local_nonprim = NULL;

    // define the local variable for o_data_query_context->element_clr_type
    type_t *element_clr_type_local_nonprim = NULL;

    // define the local list for o_data_query_context->path
    list_t *pathList = NULL;

    // o_data_query_context->default_query_configurations
    cJSON *default_query_configurations = cJSON_GetObjectItemCaseSensitive(o_data_query_contextJSON, "defaultQueryConfigurations");
    if (default_query_configurations) { 
    default_query_configurations_local_nonprim = default_query_configurations_parseFromJSON(default_query_configurations); //nonprimitive
    }

    // o_data_query_context->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(o_data_query_contextJSON, "model");
    if (model) { 
    model_local_nonprim = i_edm_model_parseFromJSON(model); //nonprimitive
    }

    // o_data_query_context->element_type
    cJSON *element_type = cJSON_GetObjectItemCaseSensitive(o_data_query_contextJSON, "elementType");
    if (element_type) { 
    element_type_local_nonprim = i_edm_type_parseFromJSON(element_type); //nonprimitive
    }

    // o_data_query_context->navigation_source
    cJSON *navigation_source = cJSON_GetObjectItemCaseSensitive(o_data_query_contextJSON, "navigationSource");
    if (navigation_source) { 
    navigation_source_local_nonprim = i_edm_navigation_source_parseFromJSON(navigation_source); //nonprimitive
    }

    // o_data_query_context->element_clr_type
    cJSON *element_clr_type = cJSON_GetObjectItemCaseSensitive(o_data_query_contextJSON, "elementClrType");
    if (element_clr_type) { 
    element_clr_type_local_nonprim = type_parseFromJSON(element_clr_type); //nonprimitive
    }

    // o_data_query_context->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(o_data_query_contextJSON, "path");
    if (path) { 
    cJSON *path_local_nonprimitive = NULL;
    if(!cJSON_IsArray(path)){
        goto end; //nonprimitive container
    }

    pathList = list_createList();

    cJSON_ArrayForEach(path_local_nonprimitive,path )
    {
        if(!cJSON_IsObject(path_local_nonprimitive)){
            goto end;
        }
        o_data_path_segment_t *pathItem = o_data_path_segment_parseFromJSON(path_local_nonprimitive);

        list_addElement(pathList, pathItem);
    }
    }

    // o_data_query_context->request_container
    cJSON *request_container = cJSON_GetObjectItemCaseSensitive(o_data_query_contextJSON, "requestContainer");
    object_t *request_container_local_object = NULL;
    if (request_container) { 
    request_container_local_object = object_parseFromJSON(request_container); //object
    }


    o_data_query_context_local_var = o_data_query_context_create (
        default_query_configurations ? default_query_configurations_local_nonprim : NULL,
        model ? model_local_nonprim : NULL,
        element_type ? element_type_local_nonprim : NULL,
        navigation_source ? navigation_source_local_nonprim : NULL,
        element_clr_type ? element_clr_type_local_nonprim : NULL,
        path ? pathList : NULL,
        request_container ? request_container_local_object : NULL
        );

    return o_data_query_context_local_var;
end:
    if (default_query_configurations_local_nonprim) {
        default_query_configurations_free(default_query_configurations_local_nonprim);
        default_query_configurations_local_nonprim = NULL;
    }
    if (model_local_nonprim) {
        i_edm_model_free(model_local_nonprim);
        model_local_nonprim = NULL;
    }
    if (element_type_local_nonprim) {
        i_edm_type_free(element_type_local_nonprim);
        element_type_local_nonprim = NULL;
    }
    if (navigation_source_local_nonprim) {
        i_edm_navigation_source_free(navigation_source_local_nonprim);
        navigation_source_local_nonprim = NULL;
    }
    if (element_clr_type_local_nonprim) {
        type_free(element_clr_type_local_nonprim);
        element_clr_type_local_nonprim = NULL;
    }
    if (pathList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, pathList) {
            o_data_path_segment_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(pathList);
        pathList = NULL;
    }
    return NULL;

}
