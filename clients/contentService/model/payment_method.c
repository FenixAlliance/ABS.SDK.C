#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_method.h"



payment_method_t *payment_method_create(
    int enable,
    int priority,
    char *name,
    char *description,
    char *instructions,
    list_t *supported_features
    ) {
    payment_method_t *payment_method_local_var = malloc(sizeof(payment_method_t));
    if (!payment_method_local_var) {
        return NULL;
    }
    payment_method_local_var->enable = enable;
    payment_method_local_var->priority = priority;
    payment_method_local_var->name = name;
    payment_method_local_var->description = description;
    payment_method_local_var->instructions = instructions;
    payment_method_local_var->supported_features = supported_features;

    return payment_method_local_var;
}


void payment_method_free(payment_method_t *payment_method) {
    if(NULL == payment_method){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_method->name) {
        free(payment_method->name);
        payment_method->name = NULL;
    }
    if (payment_method->description) {
        free(payment_method->description);
        payment_method->description = NULL;
    }
    if (payment_method->instructions) {
        free(payment_method->instructions);
        payment_method->instructions = NULL;
    }
    if (payment_method->supported_features) {
        list_ForEach(listEntry, payment_method->supported_features) {
            free(listEntry->data);
        }
        list_freeList(payment_method->supported_features);
        payment_method->supported_features = NULL;
    }
    free(payment_method);
}

cJSON *payment_method_convertToJSON(payment_method_t *payment_method) {
    cJSON *item = cJSON_CreateObject();

    // payment_method->enable
    if(payment_method->enable) {
    if(cJSON_AddBoolToObject(item, "enable", payment_method->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_method->priority
    if(payment_method->priority) {
    if(cJSON_AddBoolToObject(item, "priority", payment_method->priority) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_method->name
    if(payment_method->name) {
    if(cJSON_AddStringToObject(item, "name", payment_method->name) == NULL) {
    goto fail; //String
    }
    }


    // payment_method->description
    if(payment_method->description) {
    if(cJSON_AddStringToObject(item, "description", payment_method->description) == NULL) {
    goto fail; //String
    }
    }


    // payment_method->instructions
    if(payment_method->instructions) {
    if(cJSON_AddStringToObject(item, "instructions", payment_method->instructions) == NULL) {
    goto fail; //String
    }
    }


    // payment_method->supported_features
    if(payment_method->supported_features) {
    cJSON *supported_features = cJSON_AddArrayToObject(item, "supportedFeatures");
    if(supported_features == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *supported_featuresListEntry;
    list_ForEach(supported_featuresListEntry, payment_method->supported_features) {
    if(cJSON_AddStringToObject(supported_features, "", (char*)supported_featuresListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

payment_method_t *payment_method_parseFromJSON(cJSON *payment_methodJSON){

    payment_method_t *payment_method_local_var = NULL;

    // define the local list for payment_method->supported_features
    list_t *supported_featuresList = NULL;

    // payment_method->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(payment_methodJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // payment_method->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(payment_methodJSON, "priority");
    if (priority) { 
    if(!cJSON_IsBool(priority))
    {
    goto end; //Bool
    }
    }

    // payment_method->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(payment_methodJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // payment_method->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(payment_methodJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // payment_method->instructions
    cJSON *instructions = cJSON_GetObjectItemCaseSensitive(payment_methodJSON, "instructions");
    if (instructions) { 
    if(!cJSON_IsString(instructions) && !cJSON_IsNull(instructions))
    {
    goto end; //String
    }
    }

    // payment_method->supported_features
    cJSON *supported_features = cJSON_GetObjectItemCaseSensitive(payment_methodJSON, "supportedFeatures");
    if (supported_features) { 
    cJSON *supported_features_local = NULL;
    if(!cJSON_IsArray(supported_features)) {
        goto end;//primitive container
    }
    supported_featuresList = list_createList();

    cJSON_ArrayForEach(supported_features_local, supported_features)
    {
        if(!cJSON_IsString(supported_features_local))
        {
            goto end;
        }
        list_addElement(supported_featuresList , strdup(supported_features_local->valuestring));
    }
    }


    payment_method_local_var = payment_method_create (
        enable ? enable->valueint : 0,
        priority ? priority->valueint : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        instructions && !cJSON_IsNull(instructions) ? strdup(instructions->valuestring) : NULL,
        supported_features ? supported_featuresList : NULL
        );

    return payment_method_local_var;
end:
    if (supported_featuresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, supported_featuresList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(supported_featuresList);
        supported_featuresList = NULL;
    }
    return NULL;

}
