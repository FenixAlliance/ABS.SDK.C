#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_navigation_source.h"



i_edm_navigation_source_t *i_edm_navigation_source_create(
    char *name,
    list_t *navigation_property_bindings,
    i_edm_path_expression_t *path,
    i_edm_type_t *type,
    i_edm_entity_type_t *entity_type
    ) {
    i_edm_navigation_source_t *i_edm_navigation_source_local_var = malloc(sizeof(i_edm_navigation_source_t));
    if (!i_edm_navigation_source_local_var) {
        return NULL;
    }
    i_edm_navigation_source_local_var->name = name;
    i_edm_navigation_source_local_var->navigation_property_bindings = navigation_property_bindings;
    i_edm_navigation_source_local_var->path = path;
    i_edm_navigation_source_local_var->type = type;
    i_edm_navigation_source_local_var->entity_type = entity_type;

    return i_edm_navigation_source_local_var;
}


void i_edm_navigation_source_free(i_edm_navigation_source_t *i_edm_navigation_source) {
    if(NULL == i_edm_navigation_source){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_navigation_source->name) {
        free(i_edm_navigation_source->name);
        i_edm_navigation_source->name = NULL;
    }
    if (i_edm_navigation_source->navigation_property_bindings) {
        list_ForEach(listEntry, i_edm_navigation_source->navigation_property_bindings) {
            i_edm_navigation_property_binding_free(listEntry->data);
        }
        list_freeList(i_edm_navigation_source->navigation_property_bindings);
        i_edm_navigation_source->navigation_property_bindings = NULL;
    }
    if (i_edm_navigation_source->path) {
        i_edm_path_expression_free(i_edm_navigation_source->path);
        i_edm_navigation_source->path = NULL;
    }
    if (i_edm_navigation_source->type) {
        i_edm_type_free(i_edm_navigation_source->type);
        i_edm_navigation_source->type = NULL;
    }
    if (i_edm_navigation_source->entity_type) {
        i_edm_entity_type_free(i_edm_navigation_source->entity_type);
        i_edm_navigation_source->entity_type = NULL;
    }
    free(i_edm_navigation_source);
}

cJSON *i_edm_navigation_source_convertToJSON(i_edm_navigation_source_t *i_edm_navigation_source) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_navigation_source->name
    if(i_edm_navigation_source->name) {
    if(cJSON_AddStringToObject(item, "name", i_edm_navigation_source->name) == NULL) {
    goto fail; //String
    }
    }


    // i_edm_navigation_source->navigation_property_bindings
    if(i_edm_navigation_source->navigation_property_bindings) {
    cJSON *navigation_property_bindings = cJSON_AddArrayToObject(item, "navigationPropertyBindings");
    if(navigation_property_bindings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *navigation_property_bindingsListEntry;
    if (i_edm_navigation_source->navigation_property_bindings) {
    list_ForEach(navigation_property_bindingsListEntry, i_edm_navigation_source->navigation_property_bindings) {
    cJSON *itemLocal = i_edm_navigation_property_binding_convertToJSON(navigation_property_bindingsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(navigation_property_bindings, itemLocal);
    }
    }
    }


    // i_edm_navigation_source->path
    if(i_edm_navigation_source->path) {
    cJSON *path_local_JSON = i_edm_path_expression_convertToJSON(i_edm_navigation_source->path);
    if(path_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "path", path_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_edm_navigation_source->type
    if(i_edm_navigation_source->type) {
    cJSON *type_local_JSON = i_edm_type_convertToJSON(i_edm_navigation_source->type);
    if(type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "type", type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_edm_navigation_source->entity_type
    if(i_edm_navigation_source->entity_type) {
    cJSON *entity_type_local_JSON = i_edm_entity_type_convertToJSON(i_edm_navigation_source->entity_type);
    if(entity_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "entityType", entity_type_local_JSON);
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

i_edm_navigation_source_t *i_edm_navigation_source_parseFromJSON(cJSON *i_edm_navigation_sourceJSON){

    i_edm_navigation_source_t *i_edm_navigation_source_local_var = NULL;

    // define the local list for i_edm_navigation_source->navigation_property_bindings
    list_t *navigation_property_bindingsList = NULL;

    // define the local variable for i_edm_navigation_source->path
    i_edm_path_expression_t *path_local_nonprim = NULL;

    // define the local variable for i_edm_navigation_source->type
    i_edm_type_t *type_local_nonprim = NULL;

    // define the local variable for i_edm_navigation_source->entity_type
    i_edm_entity_type_t *entity_type_local_nonprim = NULL;

    // i_edm_navigation_source->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_edm_navigation_sourceJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_edm_navigation_source->navigation_property_bindings
    cJSON *navigation_property_bindings = cJSON_GetObjectItemCaseSensitive(i_edm_navigation_sourceJSON, "navigationPropertyBindings");
    if (navigation_property_bindings) { 
    cJSON *navigation_property_bindings_local_nonprimitive = NULL;
    if(!cJSON_IsArray(navigation_property_bindings)){
        goto end; //nonprimitive container
    }

    navigation_property_bindingsList = list_createList();

    cJSON_ArrayForEach(navigation_property_bindings_local_nonprimitive,navigation_property_bindings )
    {
        if(!cJSON_IsObject(navigation_property_bindings_local_nonprimitive)){
            goto end;
        }
        i_edm_navigation_property_binding_t *navigation_property_bindingsItem = i_edm_navigation_property_binding_parseFromJSON(navigation_property_bindings_local_nonprimitive);

        list_addElement(navigation_property_bindingsList, navigation_property_bindingsItem);
    }
    }

    // i_edm_navigation_source->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(i_edm_navigation_sourceJSON, "path");
    if (path) { 
    path_local_nonprim = i_edm_path_expression_parseFromJSON(path); //nonprimitive
    }

    // i_edm_navigation_source->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(i_edm_navigation_sourceJSON, "type");
    if (type) { 
    type_local_nonprim = i_edm_type_parseFromJSON(type); //nonprimitive
    }

    // i_edm_navigation_source->entity_type
    cJSON *entity_type = cJSON_GetObjectItemCaseSensitive(i_edm_navigation_sourceJSON, "entityType");
    if (entity_type) { 
    entity_type_local_nonprim = i_edm_entity_type_parseFromJSON(entity_type); //nonprimitive
    }


    i_edm_navigation_source_local_var = i_edm_navigation_source_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        navigation_property_bindings ? navigation_property_bindingsList : NULL,
        path ? path_local_nonprim : NULL,
        type ? type_local_nonprim : NULL,
        entity_type ? entity_type_local_nonprim : NULL
        );

    return i_edm_navigation_source_local_var;
end:
    if (navigation_property_bindingsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, navigation_property_bindingsList) {
            i_edm_navigation_property_binding_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(navigation_property_bindingsList);
        navigation_property_bindingsList = NULL;
    }
    if (path_local_nonprim) {
        i_edm_path_expression_free(path_local_nonprim);
        path_local_nonprim = NULL;
    }
    if (type_local_nonprim) {
        i_edm_type_free(type_local_nonprim);
        type_local_nonprim = NULL;
    }
    if (entity_type_local_nonprim) {
        i_edm_entity_type_free(entity_type_local_nonprim);
        entity_type_local_nonprim = NULL;
    }
    return NULL;

}
