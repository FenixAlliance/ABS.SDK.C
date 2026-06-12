#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_model.h"



i_edm_model_t *i_edm_model_create(
    list_t *schema_elements,
    list_t *vocabulary_annotations,
    list_t *referenced_models,
    list_t *declared_namespaces,
    object_t *direct_value_annotations_manager,
    i_edm_entity_container_t *entity_container
    ) {
    i_edm_model_t *i_edm_model_local_var = malloc(sizeof(i_edm_model_t));
    if (!i_edm_model_local_var) {
        return NULL;
    }
    i_edm_model_local_var->schema_elements = schema_elements;
    i_edm_model_local_var->vocabulary_annotations = vocabulary_annotations;
    i_edm_model_local_var->referenced_models = referenced_models;
    i_edm_model_local_var->declared_namespaces = declared_namespaces;
    i_edm_model_local_var->direct_value_annotations_manager = direct_value_annotations_manager;
    i_edm_model_local_var->entity_container = entity_container;

    return i_edm_model_local_var;
}


void i_edm_model_free(i_edm_model_t *i_edm_model) {
    if(NULL == i_edm_model){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_model->schema_elements) {
        list_ForEach(listEntry, i_edm_model->schema_elements) {
            i_edm_schema_element_free(listEntry->data);
        }
        list_freeList(i_edm_model->schema_elements);
        i_edm_model->schema_elements = NULL;
    }
    if (i_edm_model->vocabulary_annotations) {
        list_ForEach(listEntry, i_edm_model->vocabulary_annotations) {
            i_edm_vocabulary_annotation_free(listEntry->data);
        }
        list_freeList(i_edm_model->vocabulary_annotations);
        i_edm_model->vocabulary_annotations = NULL;
    }
    if (i_edm_model->referenced_models) {
        list_ForEach(listEntry, i_edm_model->referenced_models) {
            i_edm_model_free(listEntry->data);
        }
        list_freeList(i_edm_model->referenced_models);
        i_edm_model->referenced_models = NULL;
    }
    if (i_edm_model->declared_namespaces) {
        list_ForEach(listEntry, i_edm_model->declared_namespaces) {
            free(listEntry->data);
        }
        list_freeList(i_edm_model->declared_namespaces);
        i_edm_model->declared_namespaces = NULL;
    }
    if (i_edm_model->direct_value_annotations_manager) {
        object_free(i_edm_model->direct_value_annotations_manager);
        i_edm_model->direct_value_annotations_manager = NULL;
    }
    if (i_edm_model->entity_container) {
        i_edm_entity_container_free(i_edm_model->entity_container);
        i_edm_model->entity_container = NULL;
    }
    free(i_edm_model);
}

cJSON *i_edm_model_convertToJSON(i_edm_model_t *i_edm_model) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_model->schema_elements
    if(i_edm_model->schema_elements) {
    cJSON *schema_elements = cJSON_AddArrayToObject(item, "schemaElements");
    if(schema_elements == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *schema_elementsListEntry;
    if (i_edm_model->schema_elements) {
    list_ForEach(schema_elementsListEntry, i_edm_model->schema_elements) {
    cJSON *itemLocal = i_edm_schema_element_convertToJSON(schema_elementsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(schema_elements, itemLocal);
    }
    }
    }


    // i_edm_model->vocabulary_annotations
    if(i_edm_model->vocabulary_annotations) {
    cJSON *vocabulary_annotations = cJSON_AddArrayToObject(item, "vocabularyAnnotations");
    if(vocabulary_annotations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *vocabulary_annotationsListEntry;
    if (i_edm_model->vocabulary_annotations) {
    list_ForEach(vocabulary_annotationsListEntry, i_edm_model->vocabulary_annotations) {
    cJSON *itemLocal = i_edm_vocabulary_annotation_convertToJSON(vocabulary_annotationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(vocabulary_annotations, itemLocal);
    }
    }
    }


    // i_edm_model->referenced_models
    if(i_edm_model->referenced_models) {
    cJSON *referenced_models = cJSON_AddArrayToObject(item, "referencedModels");
    if(referenced_models == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *referenced_modelsListEntry;
    if (i_edm_model->referenced_models) {
    list_ForEach(referenced_modelsListEntry, i_edm_model->referenced_models) {
    cJSON *itemLocal = i_edm_model_convertToJSON(referenced_modelsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(referenced_models, itemLocal);
    }
    }
    }


    // i_edm_model->declared_namespaces
    if(i_edm_model->declared_namespaces) {
    cJSON *declared_namespaces = cJSON_AddArrayToObject(item, "declaredNamespaces");
    if(declared_namespaces == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *declared_namespacesListEntry;
    list_ForEach(declared_namespacesListEntry, i_edm_model->declared_namespaces) {
    if(cJSON_AddStringToObject(declared_namespaces, "", (char*)declared_namespacesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // i_edm_model->direct_value_annotations_manager
    if(i_edm_model->direct_value_annotations_manager) {
    cJSON *direct_value_annotations_manager_object = object_convertToJSON(i_edm_model->direct_value_annotations_manager);
    if(direct_value_annotations_manager_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "directValueAnnotationsManager", direct_value_annotations_manager_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_edm_model->entity_container
    if(i_edm_model->entity_container) {
    cJSON *entity_container_local_JSON = i_edm_entity_container_convertToJSON(i_edm_model->entity_container);
    if(entity_container_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "entityContainer", entity_container_local_JSON);
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

i_edm_model_t *i_edm_model_parseFromJSON(cJSON *i_edm_modelJSON){

    i_edm_model_t *i_edm_model_local_var = NULL;

    // define the local list for i_edm_model->schema_elements
    list_t *schema_elementsList = NULL;

    // define the local list for i_edm_model->vocabulary_annotations
    list_t *vocabulary_annotationsList = NULL;

    // define the local list for i_edm_model->referenced_models
    list_t *referenced_modelsList = NULL;

    // define the local list for i_edm_model->declared_namespaces
    list_t *declared_namespacesList = NULL;

    // define the local variable for i_edm_model->entity_container
    i_edm_entity_container_t *entity_container_local_nonprim = NULL;

    // i_edm_model->schema_elements
    cJSON *schema_elements = cJSON_GetObjectItemCaseSensitive(i_edm_modelJSON, "schemaElements");
    if (schema_elements) { 
    cJSON *schema_elements_local_nonprimitive = NULL;
    if(!cJSON_IsArray(schema_elements)){
        goto end; //nonprimitive container
    }

    schema_elementsList = list_createList();

    cJSON_ArrayForEach(schema_elements_local_nonprimitive,schema_elements )
    {
        if(!cJSON_IsObject(schema_elements_local_nonprimitive)){
            goto end;
        }
        i_edm_schema_element_t *schema_elementsItem = i_edm_schema_element_parseFromJSON(schema_elements_local_nonprimitive);

        list_addElement(schema_elementsList, schema_elementsItem);
    }
    }

    // i_edm_model->vocabulary_annotations
    cJSON *vocabulary_annotations = cJSON_GetObjectItemCaseSensitive(i_edm_modelJSON, "vocabularyAnnotations");
    if (vocabulary_annotations) { 
    cJSON *vocabulary_annotations_local_nonprimitive = NULL;
    if(!cJSON_IsArray(vocabulary_annotations)){
        goto end; //nonprimitive container
    }

    vocabulary_annotationsList = list_createList();

    cJSON_ArrayForEach(vocabulary_annotations_local_nonprimitive,vocabulary_annotations )
    {
        if(!cJSON_IsObject(vocabulary_annotations_local_nonprimitive)){
            goto end;
        }
        i_edm_vocabulary_annotation_t *vocabulary_annotationsItem = i_edm_vocabulary_annotation_parseFromJSON(vocabulary_annotations_local_nonprimitive);

        list_addElement(vocabulary_annotationsList, vocabulary_annotationsItem);
    }
    }

    // i_edm_model->referenced_models
    cJSON *referenced_models = cJSON_GetObjectItemCaseSensitive(i_edm_modelJSON, "referencedModels");
    if (referenced_models) { 
    cJSON *referenced_models_local_nonprimitive = NULL;
    if(!cJSON_IsArray(referenced_models)){
        goto end; //nonprimitive container
    }

    referenced_modelsList = list_createList();

    cJSON_ArrayForEach(referenced_models_local_nonprimitive,referenced_models )
    {
        if(!cJSON_IsObject(referenced_models_local_nonprimitive)){
            goto end;
        }
        i_edm_model_t *referenced_modelsItem = i_edm_model_parseFromJSON(referenced_models_local_nonprimitive);

        list_addElement(referenced_modelsList, referenced_modelsItem);
    }
    }

    // i_edm_model->declared_namespaces
    cJSON *declared_namespaces = cJSON_GetObjectItemCaseSensitive(i_edm_modelJSON, "declaredNamespaces");
    if (declared_namespaces) { 
    cJSON *declared_namespaces_local = NULL;
    if(!cJSON_IsArray(declared_namespaces)) {
        goto end;//primitive container
    }
    declared_namespacesList = list_createList();

    cJSON_ArrayForEach(declared_namespaces_local, declared_namespaces)
    {
        if(!cJSON_IsString(declared_namespaces_local))
        {
            goto end;
        }
        list_addElement(declared_namespacesList , strdup(declared_namespaces_local->valuestring));
    }
    }

    // i_edm_model->direct_value_annotations_manager
    cJSON *direct_value_annotations_manager = cJSON_GetObjectItemCaseSensitive(i_edm_modelJSON, "directValueAnnotationsManager");
    object_t *direct_value_annotations_manager_local_object = NULL;
    if (direct_value_annotations_manager) { 
    direct_value_annotations_manager_local_object = object_parseFromJSON(direct_value_annotations_manager); //object
    }

    // i_edm_model->entity_container
    cJSON *entity_container = cJSON_GetObjectItemCaseSensitive(i_edm_modelJSON, "entityContainer");
    if (entity_container) { 
    entity_container_local_nonprim = i_edm_entity_container_parseFromJSON(entity_container); //nonprimitive
    }


    i_edm_model_local_var = i_edm_model_create (
        schema_elements ? schema_elementsList : NULL,
        vocabulary_annotations ? vocabulary_annotationsList : NULL,
        referenced_models ? referenced_modelsList : NULL,
        declared_namespaces ? declared_namespacesList : NULL,
        direct_value_annotations_manager ? direct_value_annotations_manager_local_object : NULL,
        entity_container ? entity_container_local_nonprim : NULL
        );

    return i_edm_model_local_var;
end:
    if (schema_elementsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, schema_elementsList) {
            i_edm_schema_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(schema_elementsList);
        schema_elementsList = NULL;
    }
    if (vocabulary_annotationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, vocabulary_annotationsList) {
            i_edm_vocabulary_annotation_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(vocabulary_annotationsList);
        vocabulary_annotationsList = NULL;
    }
    if (referenced_modelsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, referenced_modelsList) {
            i_edm_model_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(referenced_modelsList);
        referenced_modelsList = NULL;
    }
    if (declared_namespacesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, declared_namespacesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(declared_namespacesList);
        declared_namespacesList = NULL;
    }
    if (entity_container_local_nonprim) {
        i_edm_entity_container_free(entity_container_local_nonprim);
        entity_container_local_nonprim = NULL;
    }
    return NULL;

}
