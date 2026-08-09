#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cognitive_skill_create_dto.h"



cognitive_skill_create_dto_t *cognitive_skill_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tool_key,
    char *config_json,
    int enabled,
    list_t *tools
    ) {
    cognitive_skill_create_dto_t *cognitive_skill_create_dto_local_var = malloc(sizeof(cognitive_skill_create_dto_t));
    if (!cognitive_skill_create_dto_local_var) {
        return NULL;
    }
    cognitive_skill_create_dto_local_var->id = id;
    cognitive_skill_create_dto_local_var->timestamp = timestamp;
    cognitive_skill_create_dto_local_var->name = name;
    cognitive_skill_create_dto_local_var->description = description;
    cognitive_skill_create_dto_local_var->tool_key = tool_key;
    cognitive_skill_create_dto_local_var->config_json = config_json;
    cognitive_skill_create_dto_local_var->enabled = enabled;
    cognitive_skill_create_dto_local_var->tools = tools;

    return cognitive_skill_create_dto_local_var;
}


void cognitive_skill_create_dto_free(cognitive_skill_create_dto_t *cognitive_skill_create_dto) {
    if(NULL == cognitive_skill_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cognitive_skill_create_dto->id) {
        free(cognitive_skill_create_dto->id);
        cognitive_skill_create_dto->id = NULL;
    }
    if (cognitive_skill_create_dto->timestamp) {
        free(cognitive_skill_create_dto->timestamp);
        cognitive_skill_create_dto->timestamp = NULL;
    }
    if (cognitive_skill_create_dto->name) {
        free(cognitive_skill_create_dto->name);
        cognitive_skill_create_dto->name = NULL;
    }
    if (cognitive_skill_create_dto->description) {
        free(cognitive_skill_create_dto->description);
        cognitive_skill_create_dto->description = NULL;
    }
    if (cognitive_skill_create_dto->tool_key) {
        free(cognitive_skill_create_dto->tool_key);
        cognitive_skill_create_dto->tool_key = NULL;
    }
    if (cognitive_skill_create_dto->config_json) {
        free(cognitive_skill_create_dto->config_json);
        cognitive_skill_create_dto->config_json = NULL;
    }
    if (cognitive_skill_create_dto->tools) {
        list_ForEach(listEntry, cognitive_skill_create_dto->tools) {
            cognitive_skill_tool_dto_free(listEntry->data);
        }
        list_freeList(cognitive_skill_create_dto->tools);
        cognitive_skill_create_dto->tools = NULL;
    }
    free(cognitive_skill_create_dto);
}

cJSON *cognitive_skill_create_dto_convertToJSON(cognitive_skill_create_dto_t *cognitive_skill_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // cognitive_skill_create_dto->id
    if(cognitive_skill_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", cognitive_skill_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_skill_create_dto->timestamp
    if(cognitive_skill_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", cognitive_skill_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // cognitive_skill_create_dto->name
    if (!cognitive_skill_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", cognitive_skill_create_dto->name) == NULL) {
    goto fail; //String
    }


    // cognitive_skill_create_dto->description
    if(cognitive_skill_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", cognitive_skill_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_skill_create_dto->tool_key
    if(cognitive_skill_create_dto->tool_key) {
    if(cJSON_AddStringToObject(item, "toolKey", cognitive_skill_create_dto->tool_key) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_skill_create_dto->config_json
    if(cognitive_skill_create_dto->config_json) {
    if(cJSON_AddStringToObject(item, "configJson", cognitive_skill_create_dto->config_json) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_skill_create_dto->enabled
    if(cognitive_skill_create_dto->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", cognitive_skill_create_dto->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // cognitive_skill_create_dto->tools
    if(cognitive_skill_create_dto->tools) {
    cJSON *tools = cJSON_AddArrayToObject(item, "tools");
    if(tools == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *toolsListEntry;
    if (cognitive_skill_create_dto->tools) {
    list_ForEach(toolsListEntry, cognitive_skill_create_dto->tools) {
    cJSON *itemLocal = cognitive_skill_tool_dto_convertToJSON(toolsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tools, itemLocal);
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

cognitive_skill_create_dto_t *cognitive_skill_create_dto_parseFromJSON(cJSON *cognitive_skill_create_dtoJSON){

    cognitive_skill_create_dto_t *cognitive_skill_create_dto_local_var = NULL;

    // define the local list for cognitive_skill_create_dto->tools
    list_t *toolsList = NULL;

    // cognitive_skill_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cognitive_skill_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cognitive_skill_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(cognitive_skill_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // cognitive_skill_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cognitive_skill_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // cognitive_skill_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(cognitive_skill_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // cognitive_skill_create_dto->tool_key
    cJSON *tool_key = cJSON_GetObjectItemCaseSensitive(cognitive_skill_create_dtoJSON, "toolKey");
    if (tool_key) { 
    if(!cJSON_IsString(tool_key) && !cJSON_IsNull(tool_key))
    {
    goto end; //String
    }
    }

    // cognitive_skill_create_dto->config_json
    cJSON *config_json = cJSON_GetObjectItemCaseSensitive(cognitive_skill_create_dtoJSON, "configJson");
    if (config_json) { 
    if(!cJSON_IsString(config_json) && !cJSON_IsNull(config_json))
    {
    goto end; //String
    }
    }

    // cognitive_skill_create_dto->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(cognitive_skill_create_dtoJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // cognitive_skill_create_dto->tools
    cJSON *tools = cJSON_GetObjectItemCaseSensitive(cognitive_skill_create_dtoJSON, "tools");
    if (tools) { 
    cJSON *tools_local_nonprimitive = NULL;
    if(!cJSON_IsArray(tools)){
        goto end; //nonprimitive container
    }

    toolsList = list_createList();

    cJSON_ArrayForEach(tools_local_nonprimitive,tools )
    {
        if(!cJSON_IsObject(tools_local_nonprimitive)){
            goto end;
        }
        cognitive_skill_tool_dto_t *toolsItem = cognitive_skill_tool_dto_parseFromJSON(tools_local_nonprimitive);

        list_addElement(toolsList, toolsItem);
    }
    }


    cognitive_skill_create_dto_local_var = cognitive_skill_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tool_key && !cJSON_IsNull(tool_key) ? strdup(tool_key->valuestring) : NULL,
        config_json && !cJSON_IsNull(config_json) ? strdup(config_json->valuestring) : NULL,
        enabled ? enabled->valueint : 0,
        tools ? toolsList : NULL
        );

    return cognitive_skill_create_dto_local_var;
end:
    if (toolsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, toolsList) {
            cognitive_skill_tool_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(toolsList);
        toolsList = NULL;
    }
    return NULL;

}
