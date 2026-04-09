#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "studio_module.h"



studio_module_t *studio_module_create(
    char *name,
    char *version
    ) {
    studio_module_t *studio_module_local_var = malloc(sizeof(studio_module_t));
    if (!studio_module_local_var) {
        return NULL;
    }
    studio_module_local_var->name = name;
    studio_module_local_var->version = version;

    return studio_module_local_var;
}


void studio_module_free(studio_module_t *studio_module) {
    if(NULL == studio_module){
        return ;
    }
    listEntry_t *listEntry;
    if (studio_module->name) {
        free(studio_module->name);
        studio_module->name = NULL;
    }
    if (studio_module->version) {
        free(studio_module->version);
        studio_module->version = NULL;
    }
    free(studio_module);
}

cJSON *studio_module_convertToJSON(studio_module_t *studio_module) {
    cJSON *item = cJSON_CreateObject();

    // studio_module->name
    if(studio_module->name) {
    if(cJSON_AddStringToObject(item, "name", studio_module->name) == NULL) {
    goto fail; //String
    }
    }


    // studio_module->version
    if(studio_module->version) {
    if(cJSON_AddStringToObject(item, "version", studio_module->version) == NULL) {
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

studio_module_t *studio_module_parseFromJSON(cJSON *studio_moduleJSON){

    studio_module_t *studio_module_local_var = NULL;

    // studio_module->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(studio_moduleJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // studio_module->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(studio_moduleJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }


    studio_module_local_var = studio_module_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL
        );

    return studio_module_local_var;
end:
    return NULL;

}
