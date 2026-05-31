#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "system_overview_dto.h"



system_overview_dto_t *system_overview_dto_create(
    char *uptime,
    char *os_description,
    char *machine_name,
    char *process_name,
    char *product_version,
    long private_memory_mb,
    long paged_memory_mb,
    long memory_working_set_mb,
    int is_debug_mode,
    int is_dev_mode,
    char *framework_description,
    char *runtime_identifier,
    char *os_architecture,
    char *os_platform,
    char *process_architecture,
    int users_count,
    int orders_count,
    int contacts_count
    ) {
    system_overview_dto_t *system_overview_dto_local_var = malloc(sizeof(system_overview_dto_t));
    if (!system_overview_dto_local_var) {
        return NULL;
    }
    system_overview_dto_local_var->uptime = uptime;
    system_overview_dto_local_var->os_description = os_description;
    system_overview_dto_local_var->machine_name = machine_name;
    system_overview_dto_local_var->process_name = process_name;
    system_overview_dto_local_var->product_version = product_version;
    system_overview_dto_local_var->private_memory_mb = private_memory_mb;
    system_overview_dto_local_var->paged_memory_mb = paged_memory_mb;
    system_overview_dto_local_var->memory_working_set_mb = memory_working_set_mb;
    system_overview_dto_local_var->is_debug_mode = is_debug_mode;
    system_overview_dto_local_var->is_dev_mode = is_dev_mode;
    system_overview_dto_local_var->framework_description = framework_description;
    system_overview_dto_local_var->runtime_identifier = runtime_identifier;
    system_overview_dto_local_var->os_architecture = os_architecture;
    system_overview_dto_local_var->os_platform = os_platform;
    system_overview_dto_local_var->process_architecture = process_architecture;
    system_overview_dto_local_var->users_count = users_count;
    system_overview_dto_local_var->orders_count = orders_count;
    system_overview_dto_local_var->contacts_count = contacts_count;

    return system_overview_dto_local_var;
}


void system_overview_dto_free(system_overview_dto_t *system_overview_dto) {
    if(NULL == system_overview_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (system_overview_dto->uptime) {
        free(system_overview_dto->uptime);
        system_overview_dto->uptime = NULL;
    }
    if (system_overview_dto->os_description) {
        free(system_overview_dto->os_description);
        system_overview_dto->os_description = NULL;
    }
    if (system_overview_dto->machine_name) {
        free(system_overview_dto->machine_name);
        system_overview_dto->machine_name = NULL;
    }
    if (system_overview_dto->process_name) {
        free(system_overview_dto->process_name);
        system_overview_dto->process_name = NULL;
    }
    if (system_overview_dto->product_version) {
        free(system_overview_dto->product_version);
        system_overview_dto->product_version = NULL;
    }
    if (system_overview_dto->framework_description) {
        free(system_overview_dto->framework_description);
        system_overview_dto->framework_description = NULL;
    }
    if (system_overview_dto->runtime_identifier) {
        free(system_overview_dto->runtime_identifier);
        system_overview_dto->runtime_identifier = NULL;
    }
    if (system_overview_dto->os_architecture) {
        free(system_overview_dto->os_architecture);
        system_overview_dto->os_architecture = NULL;
    }
    if (system_overview_dto->os_platform) {
        free(system_overview_dto->os_platform);
        system_overview_dto->os_platform = NULL;
    }
    if (system_overview_dto->process_architecture) {
        free(system_overview_dto->process_architecture);
        system_overview_dto->process_architecture = NULL;
    }
    free(system_overview_dto);
}

cJSON *system_overview_dto_convertToJSON(system_overview_dto_t *system_overview_dto) {
    cJSON *item = cJSON_CreateObject();

    // system_overview_dto->uptime
    if(system_overview_dto->uptime) {
    if(cJSON_AddStringToObject(item, "uptime", system_overview_dto->uptime) == NULL) {
    goto fail; //String
    }
    }


    // system_overview_dto->os_description
    if(system_overview_dto->os_description) {
    if(cJSON_AddStringToObject(item, "osDescription", system_overview_dto->os_description) == NULL) {
    goto fail; //String
    }
    }


    // system_overview_dto->machine_name
    if(system_overview_dto->machine_name) {
    if(cJSON_AddStringToObject(item, "machineName", system_overview_dto->machine_name) == NULL) {
    goto fail; //String
    }
    }


    // system_overview_dto->process_name
    if(system_overview_dto->process_name) {
    if(cJSON_AddStringToObject(item, "processName", system_overview_dto->process_name) == NULL) {
    goto fail; //String
    }
    }


    // system_overview_dto->product_version
    if(system_overview_dto->product_version) {
    if(cJSON_AddStringToObject(item, "productVersion", system_overview_dto->product_version) == NULL) {
    goto fail; //String
    }
    }


    // system_overview_dto->private_memory_mb
    if(system_overview_dto->private_memory_mb) {
    if(cJSON_AddNumberToObject(item, "privateMemoryMb", system_overview_dto->private_memory_mb) == NULL) {
    goto fail; //Numeric
    }
    }


    // system_overview_dto->paged_memory_mb
    if(system_overview_dto->paged_memory_mb) {
    if(cJSON_AddNumberToObject(item, "pagedMemoryMb", system_overview_dto->paged_memory_mb) == NULL) {
    goto fail; //Numeric
    }
    }


    // system_overview_dto->memory_working_set_mb
    if(system_overview_dto->memory_working_set_mb) {
    if(cJSON_AddNumberToObject(item, "memoryWorkingSetMb", system_overview_dto->memory_working_set_mb) == NULL) {
    goto fail; //Numeric
    }
    }


    // system_overview_dto->is_debug_mode
    if(system_overview_dto->is_debug_mode) {
    if(cJSON_AddBoolToObject(item, "isDebugMode", system_overview_dto->is_debug_mode) == NULL) {
    goto fail; //Bool
    }
    }


    // system_overview_dto->is_dev_mode
    if(system_overview_dto->is_dev_mode) {
    if(cJSON_AddBoolToObject(item, "isDevMode", system_overview_dto->is_dev_mode) == NULL) {
    goto fail; //Bool
    }
    }


    // system_overview_dto->framework_description
    if(system_overview_dto->framework_description) {
    if(cJSON_AddStringToObject(item, "frameworkDescription", system_overview_dto->framework_description) == NULL) {
    goto fail; //String
    }
    }


    // system_overview_dto->runtime_identifier
    if(system_overview_dto->runtime_identifier) {
    if(cJSON_AddStringToObject(item, "runtimeIdentifier", system_overview_dto->runtime_identifier) == NULL) {
    goto fail; //String
    }
    }


    // system_overview_dto->os_architecture
    if(system_overview_dto->os_architecture) {
    if(cJSON_AddStringToObject(item, "osArchitecture", system_overview_dto->os_architecture) == NULL) {
    goto fail; //String
    }
    }


    // system_overview_dto->os_platform
    if(system_overview_dto->os_platform) {
    if(cJSON_AddStringToObject(item, "osPlatform", system_overview_dto->os_platform) == NULL) {
    goto fail; //String
    }
    }


    // system_overview_dto->process_architecture
    if(system_overview_dto->process_architecture) {
    if(cJSON_AddStringToObject(item, "processArchitecture", system_overview_dto->process_architecture) == NULL) {
    goto fail; //String
    }
    }


    // system_overview_dto->users_count
    if(system_overview_dto->users_count) {
    if(cJSON_AddNumberToObject(item, "usersCount", system_overview_dto->users_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // system_overview_dto->orders_count
    if(system_overview_dto->orders_count) {
    if(cJSON_AddNumberToObject(item, "ordersCount", system_overview_dto->orders_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // system_overview_dto->contacts_count
    if(system_overview_dto->contacts_count) {
    if(cJSON_AddNumberToObject(item, "contactsCount", system_overview_dto->contacts_count) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

system_overview_dto_t *system_overview_dto_parseFromJSON(cJSON *system_overview_dtoJSON){

    system_overview_dto_t *system_overview_dto_local_var = NULL;

    // system_overview_dto->uptime
    cJSON *uptime = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "uptime");
    if (uptime) { 
    if(!cJSON_IsString(uptime) && !cJSON_IsNull(uptime))
    {
    goto end; //String
    }
    }

    // system_overview_dto->os_description
    cJSON *os_description = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "osDescription");
    if (os_description) { 
    if(!cJSON_IsString(os_description) && !cJSON_IsNull(os_description))
    {
    goto end; //String
    }
    }

    // system_overview_dto->machine_name
    cJSON *machine_name = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "machineName");
    if (machine_name) { 
    if(!cJSON_IsString(machine_name) && !cJSON_IsNull(machine_name))
    {
    goto end; //String
    }
    }

    // system_overview_dto->process_name
    cJSON *process_name = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "processName");
    if (process_name) { 
    if(!cJSON_IsString(process_name) && !cJSON_IsNull(process_name))
    {
    goto end; //String
    }
    }

    // system_overview_dto->product_version
    cJSON *product_version = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "productVersion");
    if (product_version) { 
    if(!cJSON_IsString(product_version) && !cJSON_IsNull(product_version))
    {
    goto end; //String
    }
    }

    // system_overview_dto->private_memory_mb
    cJSON *private_memory_mb = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "privateMemoryMb");
    if (private_memory_mb) { 
    if(!cJSON_IsNumber(private_memory_mb))
    {
    goto end; //Numeric
    }
    }

    // system_overview_dto->paged_memory_mb
    cJSON *paged_memory_mb = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "pagedMemoryMb");
    if (paged_memory_mb) { 
    if(!cJSON_IsNumber(paged_memory_mb))
    {
    goto end; //Numeric
    }
    }

    // system_overview_dto->memory_working_set_mb
    cJSON *memory_working_set_mb = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "memoryWorkingSetMb");
    if (memory_working_set_mb) { 
    if(!cJSON_IsNumber(memory_working_set_mb))
    {
    goto end; //Numeric
    }
    }

    // system_overview_dto->is_debug_mode
    cJSON *is_debug_mode = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "isDebugMode");
    if (is_debug_mode) { 
    if(!cJSON_IsBool(is_debug_mode))
    {
    goto end; //Bool
    }
    }

    // system_overview_dto->is_dev_mode
    cJSON *is_dev_mode = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "isDevMode");
    if (is_dev_mode) { 
    if(!cJSON_IsBool(is_dev_mode))
    {
    goto end; //Bool
    }
    }

    // system_overview_dto->framework_description
    cJSON *framework_description = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "frameworkDescription");
    if (framework_description) { 
    if(!cJSON_IsString(framework_description) && !cJSON_IsNull(framework_description))
    {
    goto end; //String
    }
    }

    // system_overview_dto->runtime_identifier
    cJSON *runtime_identifier = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "runtimeIdentifier");
    if (runtime_identifier) { 
    if(!cJSON_IsString(runtime_identifier) && !cJSON_IsNull(runtime_identifier))
    {
    goto end; //String
    }
    }

    // system_overview_dto->os_architecture
    cJSON *os_architecture = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "osArchitecture");
    if (os_architecture) { 
    if(!cJSON_IsString(os_architecture) && !cJSON_IsNull(os_architecture))
    {
    goto end; //String
    }
    }

    // system_overview_dto->os_platform
    cJSON *os_platform = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "osPlatform");
    if (os_platform) { 
    if(!cJSON_IsString(os_platform) && !cJSON_IsNull(os_platform))
    {
    goto end; //String
    }
    }

    // system_overview_dto->process_architecture
    cJSON *process_architecture = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "processArchitecture");
    if (process_architecture) { 
    if(!cJSON_IsString(process_architecture) && !cJSON_IsNull(process_architecture))
    {
    goto end; //String
    }
    }

    // system_overview_dto->users_count
    cJSON *users_count = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "usersCount");
    if (users_count) { 
    if(!cJSON_IsNumber(users_count))
    {
    goto end; //Numeric
    }
    }

    // system_overview_dto->orders_count
    cJSON *orders_count = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "ordersCount");
    if (orders_count) { 
    if(!cJSON_IsNumber(orders_count))
    {
    goto end; //Numeric
    }
    }

    // system_overview_dto->contacts_count
    cJSON *contacts_count = cJSON_GetObjectItemCaseSensitive(system_overview_dtoJSON, "contactsCount");
    if (contacts_count) { 
    if(!cJSON_IsNumber(contacts_count))
    {
    goto end; //Numeric
    }
    }


    system_overview_dto_local_var = system_overview_dto_create (
        uptime && !cJSON_IsNull(uptime) ? strdup(uptime->valuestring) : NULL,
        os_description && !cJSON_IsNull(os_description) ? strdup(os_description->valuestring) : NULL,
        machine_name && !cJSON_IsNull(machine_name) ? strdup(machine_name->valuestring) : NULL,
        process_name && !cJSON_IsNull(process_name) ? strdup(process_name->valuestring) : NULL,
        product_version && !cJSON_IsNull(product_version) ? strdup(product_version->valuestring) : NULL,
        private_memory_mb ? private_memory_mb->valuedouble : 0,
        paged_memory_mb ? paged_memory_mb->valuedouble : 0,
        memory_working_set_mb ? memory_working_set_mb->valuedouble : 0,
        is_debug_mode ? is_debug_mode->valueint : 0,
        is_dev_mode ? is_dev_mode->valueint : 0,
        framework_description && !cJSON_IsNull(framework_description) ? strdup(framework_description->valuestring) : NULL,
        runtime_identifier && !cJSON_IsNull(runtime_identifier) ? strdup(runtime_identifier->valuestring) : NULL,
        os_architecture && !cJSON_IsNull(os_architecture) ? strdup(os_architecture->valuestring) : NULL,
        os_platform && !cJSON_IsNull(os_platform) ? strdup(os_platform->valuestring) : NULL,
        process_architecture && !cJSON_IsNull(process_architecture) ? strdup(process_architecture->valuestring) : NULL,
        users_count ? users_count->valuedouble : 0,
        orders_count ? orders_count->valuedouble : 0,
        contacts_count ? contacts_count->valuedouble : 0
        );

    return system_overview_dto_local_var;
end:
    return NULL;

}
