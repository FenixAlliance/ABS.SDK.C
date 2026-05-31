#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_navigation_property_binding.h"



i_edm_navigation_property_binding_t *i_edm_navigation_property_binding_create(
    i_edm_navigation_property_t *navigation_property,
    i_edm_navigation_source_t *target,
    i_edm_path_expression_t *path
    ) {
    i_edm_navigation_property_binding_t *i_edm_navigation_property_binding_local_var = malloc(sizeof(i_edm_navigation_property_binding_t));
    if (!i_edm_navigation_property_binding_local_var) {
        return NULL;
    }
    i_edm_navigation_property_binding_local_var->navigation_property = navigation_property;
    i_edm_navigation_property_binding_local_var->target = target;
    i_edm_navigation_property_binding_local_var->path = path;

    return i_edm_navigation_property_binding_local_var;
}


void i_edm_navigation_property_binding_free(i_edm_navigation_property_binding_t *i_edm_navigation_property_binding) {
    if(NULL == i_edm_navigation_property_binding){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_navigation_property_binding->navigation_property) {
        i_edm_navigation_property_free(i_edm_navigation_property_binding->navigation_property);
        i_edm_navigation_property_binding->navigation_property = NULL;
    }
    if (i_edm_navigation_property_binding->target) {
        i_edm_navigation_source_free(i_edm_navigation_property_binding->target);
        i_edm_navigation_property_binding->target = NULL;
    }
    if (i_edm_navigation_property_binding->path) {
        i_edm_path_expression_free(i_edm_navigation_property_binding->path);
        i_edm_navigation_property_binding->path = NULL;
    }
    free(i_edm_navigation_property_binding);
}

cJSON *i_edm_navigation_property_binding_convertToJSON(i_edm_navigation_property_binding_t *i_edm_navigation_property_binding) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_navigation_property_binding->navigation_property
    if(i_edm_navigation_property_binding->navigation_property) {
    cJSON *navigation_property_local_JSON = i_edm_navigation_property_convertToJSON(i_edm_navigation_property_binding->navigation_property);
    if(navigation_property_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "navigationProperty", navigation_property_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_edm_navigation_property_binding->target
    if(i_edm_navigation_property_binding->target) {
    cJSON *target_local_JSON = i_edm_navigation_source_convertToJSON(i_edm_navigation_property_binding->target);
    if(target_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "target", target_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_edm_navigation_property_binding->path
    if(i_edm_navigation_property_binding->path) {
    cJSON *path_local_JSON = i_edm_path_expression_convertToJSON(i_edm_navigation_property_binding->path);
    if(path_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "path", path_local_JSON);
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

i_edm_navigation_property_binding_t *i_edm_navigation_property_binding_parseFromJSON(cJSON *i_edm_navigation_property_bindingJSON){

    i_edm_navigation_property_binding_t *i_edm_navigation_property_binding_local_var = NULL;

    // define the local variable for i_edm_navigation_property_binding->navigation_property
    i_edm_navigation_property_t *navigation_property_local_nonprim = NULL;

    // define the local variable for i_edm_navigation_property_binding->target
    i_edm_navigation_source_t *target_local_nonprim = NULL;

    // define the local variable for i_edm_navigation_property_binding->path
    i_edm_path_expression_t *path_local_nonprim = NULL;

    // i_edm_navigation_property_binding->navigation_property
    cJSON *navigation_property = cJSON_GetObjectItemCaseSensitive(i_edm_navigation_property_bindingJSON, "navigationProperty");
    if (navigation_property) { 
    navigation_property_local_nonprim = i_edm_navigation_property_parseFromJSON(navigation_property); //nonprimitive
    }

    // i_edm_navigation_property_binding->target
    cJSON *target = cJSON_GetObjectItemCaseSensitive(i_edm_navigation_property_bindingJSON, "target");
    if (target) { 
    target_local_nonprim = i_edm_navigation_source_parseFromJSON(target); //nonprimitive
    }

    // i_edm_navigation_property_binding->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(i_edm_navigation_property_bindingJSON, "path");
    if (path) { 
    path_local_nonprim = i_edm_path_expression_parseFromJSON(path); //nonprimitive
    }


    i_edm_navigation_property_binding_local_var = i_edm_navigation_property_binding_create (
        navigation_property ? navigation_property_local_nonprim : NULL,
        target ? target_local_nonprim : NULL,
        path ? path_local_nonprim : NULL
        );

    return i_edm_navigation_property_binding_local_var;
end:
    if (navigation_property_local_nonprim) {
        i_edm_navigation_property_free(navigation_property_local_nonprim);
        navigation_property_local_nonprim = NULL;
    }
    if (target_local_nonprim) {
        i_edm_navigation_source_free(target_local_nonprim);
        target_local_nonprim = NULL;
    }
    if (path_local_nonprim) {
        i_edm_path_expression_free(path_local_nonprim);
        path_local_nonprim = NULL;
    }
    return NULL;

}
