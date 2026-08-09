#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "capability_dto.h"



capability_dto_t *capability_dto_create(
    char *id,
    char *timestamp,
    char *key,
    char *name,
    char *description,
    char *category,
    char *effect,
    list_t *risks,
    list_t *surfaces,
    char *required_permission,
    int available,
    char *denied_reason,
    char *version,
    list_t* input_schema,
    list_t* output_schema,
    int is_output_collection,
    list_t *required_inputs
    ) {
    capability_dto_t *capability_dto_local_var = malloc(sizeof(capability_dto_t));
    if (!capability_dto_local_var) {
        return NULL;
    }
    capability_dto_local_var->id = id;
    capability_dto_local_var->timestamp = timestamp;
    capability_dto_local_var->key = key;
    capability_dto_local_var->name = name;
    capability_dto_local_var->description = description;
    capability_dto_local_var->category = category;
    capability_dto_local_var->effect = effect;
    capability_dto_local_var->risks = risks;
    capability_dto_local_var->surfaces = surfaces;
    capability_dto_local_var->required_permission = required_permission;
    capability_dto_local_var->available = available;
    capability_dto_local_var->denied_reason = denied_reason;
    capability_dto_local_var->version = version;
    capability_dto_local_var->input_schema = input_schema;
    capability_dto_local_var->output_schema = output_schema;
    capability_dto_local_var->is_output_collection = is_output_collection;
    capability_dto_local_var->required_inputs = required_inputs;

    return capability_dto_local_var;
}


void capability_dto_free(capability_dto_t *capability_dto) {
    if(NULL == capability_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (capability_dto->id) {
        free(capability_dto->id);
        capability_dto->id = NULL;
    }
    if (capability_dto->timestamp) {
        free(capability_dto->timestamp);
        capability_dto->timestamp = NULL;
    }
    if (capability_dto->key) {
        free(capability_dto->key);
        capability_dto->key = NULL;
    }
    if (capability_dto->name) {
        free(capability_dto->name);
        capability_dto->name = NULL;
    }
    if (capability_dto->description) {
        free(capability_dto->description);
        capability_dto->description = NULL;
    }
    if (capability_dto->category) {
        free(capability_dto->category);
        capability_dto->category = NULL;
    }
    if (capability_dto->effect) {
        free(capability_dto->effect);
        capability_dto->effect = NULL;
    }
    if (capability_dto->risks) {
        list_ForEach(listEntry, capability_dto->risks) {
            free(listEntry->data);
        }
        list_freeList(capability_dto->risks);
        capability_dto->risks = NULL;
    }
    if (capability_dto->surfaces) {
        list_ForEach(listEntry, capability_dto->surfaces) {
            free(listEntry->data);
        }
        list_freeList(capability_dto->surfaces);
        capability_dto->surfaces = NULL;
    }
    if (capability_dto->required_permission) {
        free(capability_dto->required_permission);
        capability_dto->required_permission = NULL;
    }
    if (capability_dto->denied_reason) {
        free(capability_dto->denied_reason);
        capability_dto->denied_reason = NULL;
    }
    if (capability_dto->version) {
        free(capability_dto->version);
        capability_dto->version = NULL;
    }
    if (capability_dto->input_schema) {
        list_ForEach(listEntry, capability_dto->input_schema) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(capability_dto->input_schema);
        capability_dto->input_schema = NULL;
    }
    if (capability_dto->output_schema) {
        list_ForEach(listEntry, capability_dto->output_schema) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(capability_dto->output_schema);
        capability_dto->output_schema = NULL;
    }
    if (capability_dto->required_inputs) {
        list_ForEach(listEntry, capability_dto->required_inputs) {
            free(listEntry->data);
        }
        list_freeList(capability_dto->required_inputs);
        capability_dto->required_inputs = NULL;
    }
    free(capability_dto);
}

cJSON *capability_dto_convertToJSON(capability_dto_t *capability_dto) {
    cJSON *item = cJSON_CreateObject();

    // capability_dto->id
    if(capability_dto->id) {
    if(cJSON_AddStringToObject(item, "id", capability_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto->timestamp
    if(capability_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", capability_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // capability_dto->key
    if(capability_dto->key) {
    if(cJSON_AddStringToObject(item, "key", capability_dto->key) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto->name
    if(capability_dto->name) {
    if(cJSON_AddStringToObject(item, "name", capability_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto->description
    if(capability_dto->description) {
    if(cJSON_AddStringToObject(item, "description", capability_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto->category
    if(capability_dto->category) {
    if(cJSON_AddStringToObject(item, "category", capability_dto->category) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto->effect
    if(capability_dto->effect) {
    if(cJSON_AddStringToObject(item, "effect", capability_dto->effect) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto->risks
    if(capability_dto->risks) {
    cJSON *risks = cJSON_AddArrayToObject(item, "risks");
    if(risks == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *risksListEntry;
    list_ForEach(risksListEntry, capability_dto->risks) {
    if(cJSON_AddStringToObject(risks, "", (char*)risksListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // capability_dto->surfaces
    if(capability_dto->surfaces) {
    cJSON *surfaces = cJSON_AddArrayToObject(item, "surfaces");
    if(surfaces == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *surfacesListEntry;
    list_ForEach(surfacesListEntry, capability_dto->surfaces) {
    if(cJSON_AddStringToObject(surfaces, "", (char*)surfacesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // capability_dto->required_permission
    if(capability_dto->required_permission) {
    if(cJSON_AddStringToObject(item, "requiredPermission", capability_dto->required_permission) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto->available
    if(capability_dto->available) {
    if(cJSON_AddBoolToObject(item, "available", capability_dto->available) == NULL) {
    goto fail; //Bool
    }
    }


    // capability_dto->denied_reason
    if(capability_dto->denied_reason) {
    if(cJSON_AddStringToObject(item, "deniedReason", capability_dto->denied_reason) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto->version
    if(capability_dto->version) {
    if(cJSON_AddStringToObject(item, "version", capability_dto->version) == NULL) {
    goto fail; //String
    }
    }


    // capability_dto->input_schema
    if(capability_dto->input_schema) {
    cJSON *input_schema = cJSON_AddObjectToObject(item, "inputSchema");
    if(input_schema == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = input_schema;
    listEntry_t *input_schemaListEntry;
    if (capability_dto->input_schema) {
    list_ForEach(input_schemaListEntry, capability_dto->input_schema) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)input_schemaListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
    }


    // capability_dto->output_schema
    if(capability_dto->output_schema) {
    cJSON *output_schema = cJSON_AddObjectToObject(item, "outputSchema");
    if(output_schema == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = output_schema;
    listEntry_t *output_schemaListEntry;
    if (capability_dto->output_schema) {
    list_ForEach(output_schemaListEntry, capability_dto->output_schema) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)output_schemaListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
    }


    // capability_dto->is_output_collection
    if(capability_dto->is_output_collection) {
    if(cJSON_AddBoolToObject(item, "isOutputCollection", capability_dto->is_output_collection) == NULL) {
    goto fail; //Bool
    }
    }


    // capability_dto->required_inputs
    if(capability_dto->required_inputs) {
    cJSON *required_inputs = cJSON_AddArrayToObject(item, "requiredInputs");
    if(required_inputs == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *required_inputsListEntry;
    list_ForEach(required_inputsListEntry, capability_dto->required_inputs) {
    if(cJSON_AddStringToObject(required_inputs, "", (char*)required_inputsListEntry->data) == NULL)
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

capability_dto_t *capability_dto_parseFromJSON(cJSON *capability_dtoJSON){

    capability_dto_t *capability_dto_local_var = NULL;

    // define the local list for capability_dto->risks
    list_t *risksList = NULL;

    // define the local list for capability_dto->surfaces
    list_t *surfacesList = NULL;

    // define the local map for capability_dto->input_schema
    list_t *input_schemaList = NULL;

    // define the local map for capability_dto->output_schema
    list_t *output_schemaList = NULL;

    // define the local list for capability_dto->required_inputs
    list_t *required_inputsList = NULL;

    // capability_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // capability_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // capability_dto->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // capability_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // capability_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // capability_dto->category
    cJSON *category = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "category");
    if (category) { 
    if(!cJSON_IsString(category) && !cJSON_IsNull(category))
    {
    goto end; //String
    }
    }

    // capability_dto->effect
    cJSON *effect = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "effect");
    if (effect) { 
    if(!cJSON_IsString(effect) && !cJSON_IsNull(effect))
    {
    goto end; //String
    }
    }

    // capability_dto->risks
    cJSON *risks = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "risks");
    if (risks) { 
    cJSON *risks_local = NULL;
    if(!cJSON_IsArray(risks)) {
        goto end;//primitive container
    }
    risksList = list_createList();

    cJSON_ArrayForEach(risks_local, risks)
    {
        if(!cJSON_IsString(risks_local))
        {
            goto end;
        }
        list_addElement(risksList , strdup(risks_local->valuestring));
    }
    }

    // capability_dto->surfaces
    cJSON *surfaces = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "surfaces");
    if (surfaces) { 
    cJSON *surfaces_local = NULL;
    if(!cJSON_IsArray(surfaces)) {
        goto end;//primitive container
    }
    surfacesList = list_createList();

    cJSON_ArrayForEach(surfaces_local, surfaces)
    {
        if(!cJSON_IsString(surfaces_local))
        {
            goto end;
        }
        list_addElement(surfacesList , strdup(surfaces_local->valuestring));
    }
    }

    // capability_dto->required_permission
    cJSON *required_permission = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "requiredPermission");
    if (required_permission) { 
    if(!cJSON_IsString(required_permission) && !cJSON_IsNull(required_permission))
    {
    goto end; //String
    }
    }

    // capability_dto->available
    cJSON *available = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "available");
    if (available) { 
    if(!cJSON_IsBool(available))
    {
    goto end; //Bool
    }
    }

    // capability_dto->denied_reason
    cJSON *denied_reason = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "deniedReason");
    if (denied_reason) { 
    if(!cJSON_IsString(denied_reason) && !cJSON_IsNull(denied_reason))
    {
    goto end; //String
    }
    }

    // capability_dto->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }

    // capability_dto->input_schema
    cJSON *input_schema = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "inputSchema");
    if (input_schema) { 
    cJSON *input_schema_local_map = NULL;
    if(!cJSON_IsObject(input_schema) && !cJSON_IsNull(input_schema))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(input_schema))
    {
        input_schemaList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(input_schema_local_map, input_schema)
        {
            cJSON *localMapObject = input_schema_local_map;
            if(!cJSON_IsString(localMapObject))
            {
                goto end;
            }
            localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
            list_addElement(input_schemaList , localMapKeyPair);
        }
    }
    }

    // capability_dto->output_schema
    cJSON *output_schema = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "outputSchema");
    if (output_schema) { 
    cJSON *output_schema_local_map = NULL;
    if(!cJSON_IsObject(output_schema) && !cJSON_IsNull(output_schema))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(output_schema))
    {
        output_schemaList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(output_schema_local_map, output_schema)
        {
            cJSON *localMapObject = output_schema_local_map;
            if(!cJSON_IsString(localMapObject))
            {
                goto end;
            }
            localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
            list_addElement(output_schemaList , localMapKeyPair);
        }
    }
    }

    // capability_dto->is_output_collection
    cJSON *is_output_collection = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "isOutputCollection");
    if (is_output_collection) { 
    if(!cJSON_IsBool(is_output_collection))
    {
    goto end; //Bool
    }
    }

    // capability_dto->required_inputs
    cJSON *required_inputs = cJSON_GetObjectItemCaseSensitive(capability_dtoJSON, "requiredInputs");
    if (required_inputs) { 
    cJSON *required_inputs_local = NULL;
    if(!cJSON_IsArray(required_inputs)) {
        goto end;//primitive container
    }
    required_inputsList = list_createList();

    cJSON_ArrayForEach(required_inputs_local, required_inputs)
    {
        if(!cJSON_IsString(required_inputs_local))
        {
            goto end;
        }
        list_addElement(required_inputsList , strdup(required_inputs_local->valuestring));
    }
    }


    capability_dto_local_var = capability_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        category && !cJSON_IsNull(category) ? strdup(category->valuestring) : NULL,
        effect && !cJSON_IsNull(effect) ? strdup(effect->valuestring) : NULL,
        risks ? risksList : NULL,
        surfaces ? surfacesList : NULL,
        required_permission && !cJSON_IsNull(required_permission) ? strdup(required_permission->valuestring) : NULL,
        available ? available->valueint : 0,
        denied_reason && !cJSON_IsNull(denied_reason) ? strdup(denied_reason->valuestring) : NULL,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL,
        input_schema ? input_schemaList : NULL,
        output_schema ? output_schemaList : NULL,
        is_output_collection ? is_output_collection->valueint : 0,
        required_inputs ? required_inputsList : NULL
        );

    return capability_dto_local_var;
end:
    if (risksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, risksList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(risksList);
        risksList = NULL;
    }
    if (surfacesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, surfacesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(surfacesList);
        surfacesList = NULL;
    }
    if (input_schemaList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, input_schemaList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            free(localKeyValue->value);
            localKeyValue->value = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(input_schemaList);
        input_schemaList = NULL;
    }
    if (output_schemaList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, output_schemaList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            free(localKeyValue->value);
            localKeyValue->value = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(output_schemaList);
        output_schemaList = NULL;
    }
    if (required_inputsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, required_inputsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(required_inputsList);
        required_inputsList = NULL;
    }
    return NULL;

}
