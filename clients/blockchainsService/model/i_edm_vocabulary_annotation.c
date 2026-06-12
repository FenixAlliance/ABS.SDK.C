#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_vocabulary_annotation.h"



i_edm_vocabulary_annotation_t *i_edm_vocabulary_annotation_create(
    char *qualifier,
    i_edm_term_t *term,
    object_t *target,
    i_edm_expression_t *value,
    int uses_default
    ) {
    i_edm_vocabulary_annotation_t *i_edm_vocabulary_annotation_local_var = malloc(sizeof(i_edm_vocabulary_annotation_t));
    if (!i_edm_vocabulary_annotation_local_var) {
        return NULL;
    }
    i_edm_vocabulary_annotation_local_var->qualifier = qualifier;
    i_edm_vocabulary_annotation_local_var->term = term;
    i_edm_vocabulary_annotation_local_var->target = target;
    i_edm_vocabulary_annotation_local_var->value = value;
    i_edm_vocabulary_annotation_local_var->uses_default = uses_default;

    return i_edm_vocabulary_annotation_local_var;
}


void i_edm_vocabulary_annotation_free(i_edm_vocabulary_annotation_t *i_edm_vocabulary_annotation) {
    if(NULL == i_edm_vocabulary_annotation){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_vocabulary_annotation->qualifier) {
        free(i_edm_vocabulary_annotation->qualifier);
        i_edm_vocabulary_annotation->qualifier = NULL;
    }
    if (i_edm_vocabulary_annotation->term) {
        i_edm_term_free(i_edm_vocabulary_annotation->term);
        i_edm_vocabulary_annotation->term = NULL;
    }
    if (i_edm_vocabulary_annotation->target) {
        object_free(i_edm_vocabulary_annotation->target);
        i_edm_vocabulary_annotation->target = NULL;
    }
    if (i_edm_vocabulary_annotation->value) {
        i_edm_expression_free(i_edm_vocabulary_annotation->value);
        i_edm_vocabulary_annotation->value = NULL;
    }
    free(i_edm_vocabulary_annotation);
}

cJSON *i_edm_vocabulary_annotation_convertToJSON(i_edm_vocabulary_annotation_t *i_edm_vocabulary_annotation) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_vocabulary_annotation->qualifier
    if(i_edm_vocabulary_annotation->qualifier) {
    if(cJSON_AddStringToObject(item, "qualifier", i_edm_vocabulary_annotation->qualifier) == NULL) {
    goto fail; //String
    }
    }


    // i_edm_vocabulary_annotation->term
    if(i_edm_vocabulary_annotation->term) {
    cJSON *term_local_JSON = i_edm_term_convertToJSON(i_edm_vocabulary_annotation->term);
    if(term_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "term", term_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_edm_vocabulary_annotation->target
    if(i_edm_vocabulary_annotation->target) {
    cJSON *target_object = object_convertToJSON(i_edm_vocabulary_annotation->target);
    if(target_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "target", target_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_edm_vocabulary_annotation->value
    if(i_edm_vocabulary_annotation->value) {
    cJSON *value_local_JSON = i_edm_expression_convertToJSON(i_edm_vocabulary_annotation->value);
    if(value_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "value", value_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_edm_vocabulary_annotation->uses_default
    if(i_edm_vocabulary_annotation->uses_default) {
    if(cJSON_AddBoolToObject(item, "usesDefault", i_edm_vocabulary_annotation->uses_default) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

i_edm_vocabulary_annotation_t *i_edm_vocabulary_annotation_parseFromJSON(cJSON *i_edm_vocabulary_annotationJSON){

    i_edm_vocabulary_annotation_t *i_edm_vocabulary_annotation_local_var = NULL;

    // define the local variable for i_edm_vocabulary_annotation->term
    i_edm_term_t *term_local_nonprim = NULL;

    // define the local variable for i_edm_vocabulary_annotation->value
    i_edm_expression_t *value_local_nonprim = NULL;

    // i_edm_vocabulary_annotation->qualifier
    cJSON *qualifier = cJSON_GetObjectItemCaseSensitive(i_edm_vocabulary_annotationJSON, "qualifier");
    if (qualifier) { 
    if(!cJSON_IsString(qualifier) && !cJSON_IsNull(qualifier))
    {
    goto end; //String
    }
    }

    // i_edm_vocabulary_annotation->term
    cJSON *term = cJSON_GetObjectItemCaseSensitive(i_edm_vocabulary_annotationJSON, "term");
    if (term) { 
    term_local_nonprim = i_edm_term_parseFromJSON(term); //nonprimitive
    }

    // i_edm_vocabulary_annotation->target
    cJSON *target = cJSON_GetObjectItemCaseSensitive(i_edm_vocabulary_annotationJSON, "target");
    object_t *target_local_object = NULL;
    if (target) { 
    target_local_object = object_parseFromJSON(target); //object
    }

    // i_edm_vocabulary_annotation->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(i_edm_vocabulary_annotationJSON, "value");
    if (value) { 
    value_local_nonprim = i_edm_expression_parseFromJSON(value); //nonprimitive
    }

    // i_edm_vocabulary_annotation->uses_default
    cJSON *uses_default = cJSON_GetObjectItemCaseSensitive(i_edm_vocabulary_annotationJSON, "usesDefault");
    if (uses_default) { 
    if(!cJSON_IsBool(uses_default))
    {
    goto end; //Bool
    }
    }


    i_edm_vocabulary_annotation_local_var = i_edm_vocabulary_annotation_create (
        qualifier && !cJSON_IsNull(qualifier) ? strdup(qualifier->valuestring) : NULL,
        term ? term_local_nonprim : NULL,
        target ? target_local_object : NULL,
        value ? value_local_nonprim : NULL,
        uses_default ? uses_default->valueint : 0
        );

    return i_edm_vocabulary_annotation_local_var;
end:
    if (term_local_nonprim) {
        i_edm_term_free(term_local_nonprim);
        term_local_nonprim = NULL;
    }
    if (value_local_nonprim) {
        i_edm_expression_free(value_local_nonprim);
        value_local_nonprim = NULL;
    }
    return NULL;

}
