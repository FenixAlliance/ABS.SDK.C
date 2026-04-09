#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "marketing_list_create_dto.h"


char* marketing_list_create_dto_marketing_list_type_ToString(marketingservice_marketing_list_create_dto_MARKETINGLISTTYPE_e marketing_list_type) {
    char* marketing_list_typeArray[] =  { "NULL", "Static", "Dynamic" };
    return marketing_list_typeArray[marketing_list_type];
}

marketingservice_marketing_list_create_dto_MARKETINGLISTTYPE_e marketing_list_create_dto_marketing_list_type_FromString(char* marketing_list_type){
    int stringToReturn = 0;
    char *marketing_list_typeArray[] =  { "NULL", "Static", "Dynamic" };
    size_t sizeofArray = sizeof(marketing_list_typeArray) / sizeof(marketing_list_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(marketing_list_type, marketing_list_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* marketing_list_create_dto_marketing_list_target_ToString(marketingservice_marketing_list_create_dto_MARKETINGLISTTARGET_e marketing_list_target) {
    char* marketing_list_targetArray[] =  { "NULL", "Individual", "Organization", "Lead" };
    return marketing_list_targetArray[marketing_list_target];
}

marketingservice_marketing_list_create_dto_MARKETINGLISTTARGET_e marketing_list_create_dto_marketing_list_target_FromString(char* marketing_list_target){
    int stringToReturn = 0;
    char *marketing_list_targetArray[] =  { "NULL", "Individual", "Organization", "Lead" };
    size_t sizeofArray = sizeof(marketing_list_targetArray) / sizeof(marketing_list_targetArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(marketing_list_target, marketing_list_targetArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

marketing_list_create_dto_t *marketing_list_create_dto_create(
    char *id,
    char *timestamp,
    int locked,
    char *name,
    char *purpose,
    char *description,
    char *source,
    double cost,
    char *modified_on,
    char *last_used_on,
    char *currency_id,
    char *tenant_id,
    char *enrollment_id,
    marketingservice_marketing_list_create_dto_MARKETINGLISTTYPE_e marketing_list_type,
    marketingservice_marketing_list_create_dto_MARKETINGLISTTARGET_e marketing_list_target
    ) {
    marketing_list_create_dto_t *marketing_list_create_dto_local_var = malloc(sizeof(marketing_list_create_dto_t));
    if (!marketing_list_create_dto_local_var) {
        return NULL;
    }
    marketing_list_create_dto_local_var->id = id;
    marketing_list_create_dto_local_var->timestamp = timestamp;
    marketing_list_create_dto_local_var->locked = locked;
    marketing_list_create_dto_local_var->name = name;
    marketing_list_create_dto_local_var->purpose = purpose;
    marketing_list_create_dto_local_var->description = description;
    marketing_list_create_dto_local_var->source = source;
    marketing_list_create_dto_local_var->cost = cost;
    marketing_list_create_dto_local_var->modified_on = modified_on;
    marketing_list_create_dto_local_var->last_used_on = last_used_on;
    marketing_list_create_dto_local_var->currency_id = currency_id;
    marketing_list_create_dto_local_var->tenant_id = tenant_id;
    marketing_list_create_dto_local_var->enrollment_id = enrollment_id;
    marketing_list_create_dto_local_var->marketing_list_type = marketing_list_type;
    marketing_list_create_dto_local_var->marketing_list_target = marketing_list_target;

    return marketing_list_create_dto_local_var;
}


void marketing_list_create_dto_free(marketing_list_create_dto_t *marketing_list_create_dto) {
    if(NULL == marketing_list_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (marketing_list_create_dto->id) {
        free(marketing_list_create_dto->id);
        marketing_list_create_dto->id = NULL;
    }
    if (marketing_list_create_dto->timestamp) {
        free(marketing_list_create_dto->timestamp);
        marketing_list_create_dto->timestamp = NULL;
    }
    if (marketing_list_create_dto->name) {
        free(marketing_list_create_dto->name);
        marketing_list_create_dto->name = NULL;
    }
    if (marketing_list_create_dto->purpose) {
        free(marketing_list_create_dto->purpose);
        marketing_list_create_dto->purpose = NULL;
    }
    if (marketing_list_create_dto->description) {
        free(marketing_list_create_dto->description);
        marketing_list_create_dto->description = NULL;
    }
    if (marketing_list_create_dto->source) {
        free(marketing_list_create_dto->source);
        marketing_list_create_dto->source = NULL;
    }
    if (marketing_list_create_dto->modified_on) {
        free(marketing_list_create_dto->modified_on);
        marketing_list_create_dto->modified_on = NULL;
    }
    if (marketing_list_create_dto->last_used_on) {
        free(marketing_list_create_dto->last_used_on);
        marketing_list_create_dto->last_used_on = NULL;
    }
    if (marketing_list_create_dto->currency_id) {
        free(marketing_list_create_dto->currency_id);
        marketing_list_create_dto->currency_id = NULL;
    }
    if (marketing_list_create_dto->tenant_id) {
        free(marketing_list_create_dto->tenant_id);
        marketing_list_create_dto->tenant_id = NULL;
    }
    if (marketing_list_create_dto->enrollment_id) {
        free(marketing_list_create_dto->enrollment_id);
        marketing_list_create_dto->enrollment_id = NULL;
    }
    free(marketing_list_create_dto);
}

cJSON *marketing_list_create_dto_convertToJSON(marketing_list_create_dto_t *marketing_list_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // marketing_list_create_dto->id
    if(marketing_list_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", marketing_list_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // marketing_list_create_dto->timestamp
    if(marketing_list_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", marketing_list_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // marketing_list_create_dto->locked
    if(marketing_list_create_dto->locked) {
    if(cJSON_AddBoolToObject(item, "locked", marketing_list_create_dto->locked) == NULL) {
    goto fail; //Bool
    }
    }


    // marketing_list_create_dto->name
    if(marketing_list_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", marketing_list_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // marketing_list_create_dto->purpose
    if(marketing_list_create_dto->purpose) {
    if(cJSON_AddStringToObject(item, "purpose", marketing_list_create_dto->purpose) == NULL) {
    goto fail; //String
    }
    }


    // marketing_list_create_dto->description
    if(marketing_list_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", marketing_list_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // marketing_list_create_dto->source
    if(marketing_list_create_dto->source) {
    if(cJSON_AddStringToObject(item, "source", marketing_list_create_dto->source) == NULL) {
    goto fail; //String
    }
    }


    // marketing_list_create_dto->cost
    if(marketing_list_create_dto->cost) {
    if(cJSON_AddNumberToObject(item, "cost", marketing_list_create_dto->cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketing_list_create_dto->modified_on
    if(marketing_list_create_dto->modified_on) {
    if(cJSON_AddStringToObject(item, "modifiedOn", marketing_list_create_dto->modified_on) == NULL) {
    goto fail; //Date-Time
    }
    }


    // marketing_list_create_dto->last_used_on
    if(marketing_list_create_dto->last_used_on) {
    if(cJSON_AddStringToObject(item, "lastUsedOn", marketing_list_create_dto->last_used_on) == NULL) {
    goto fail; //Date-Time
    }
    }


    // marketing_list_create_dto->currency_id
    if(marketing_list_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", marketing_list_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // marketing_list_create_dto->tenant_id
    if(marketing_list_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", marketing_list_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // marketing_list_create_dto->enrollment_id
    if(marketing_list_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", marketing_list_create_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // marketing_list_create_dto->marketing_list_type
    if(marketing_list_create_dto->marketing_list_type != marketingservice_marketing_list_create_dto_MARKETINGLISTTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "marketingListType", marketing_list_typemarketing_list_create_dto_ToString(marketing_list_create_dto->marketing_list_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // marketing_list_create_dto->marketing_list_target
    if(marketing_list_create_dto->marketing_list_target != marketingservice_marketing_list_create_dto_MARKETINGLISTTARGET_NULL) {
    if(cJSON_AddStringToObject(item, "marketingListTarget", marketing_list_targetmarketing_list_create_dto_ToString(marketing_list_create_dto->marketing_list_target)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

marketing_list_create_dto_t *marketing_list_create_dto_parseFromJSON(cJSON *marketing_list_create_dtoJSON){

    marketing_list_create_dto_t *marketing_list_create_dto_local_var = NULL;

    // marketing_list_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // marketing_list_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // marketing_list_create_dto->locked
    cJSON *locked = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "locked");
    if (locked) { 
    if(!cJSON_IsBool(locked))
    {
    goto end; //Bool
    }
    }

    // marketing_list_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // marketing_list_create_dto->purpose
    cJSON *purpose = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "purpose");
    if (purpose) { 
    if(!cJSON_IsString(purpose) && !cJSON_IsNull(purpose))
    {
    goto end; //String
    }
    }

    // marketing_list_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // marketing_list_create_dto->source
    cJSON *source = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "source");
    if (source) { 
    if(!cJSON_IsString(source) && !cJSON_IsNull(source))
    {
    goto end; //String
    }
    }

    // marketing_list_create_dto->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "cost");
    if (cost) { 
    if(!cJSON_IsNumber(cost))
    {
    goto end; //Numeric
    }
    }

    // marketing_list_create_dto->modified_on
    cJSON *modified_on = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "modifiedOn");
    if (modified_on) { 
    if(!cJSON_IsString(modified_on) && !cJSON_IsNull(modified_on))
    {
    goto end; //DateTime
    }
    }

    // marketing_list_create_dto->last_used_on
    cJSON *last_used_on = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "lastUsedOn");
    if (last_used_on) { 
    if(!cJSON_IsString(last_used_on) && !cJSON_IsNull(last_used_on))
    {
    goto end; //DateTime
    }
    }

    // marketing_list_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // marketing_list_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // marketing_list_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // marketing_list_create_dto->marketing_list_type
    cJSON *marketing_list_type = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "marketingListType");
    marketingservice_marketing_list_create_dto_MARKETINGLISTTYPE_e marketing_list_typeVariable;
    if (marketing_list_type) { 
    if(!cJSON_IsString(marketing_list_type))
    {
    goto end; //Enum
    }
    marketing_list_typeVariable = marketing_list_create_dto_marketing_list_type_FromString(marketing_list_type->valuestring);
    }

    // marketing_list_create_dto->marketing_list_target
    cJSON *marketing_list_target = cJSON_GetObjectItemCaseSensitive(marketing_list_create_dtoJSON, "marketingListTarget");
    marketingservice_marketing_list_create_dto_MARKETINGLISTTARGET_e marketing_list_targetVariable;
    if (marketing_list_target) { 
    if(!cJSON_IsString(marketing_list_target))
    {
    goto end; //Enum
    }
    marketing_list_targetVariable = marketing_list_create_dto_marketing_list_target_FromString(marketing_list_target->valuestring);
    }


    marketing_list_create_dto_local_var = marketing_list_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        locked ? locked->valueint : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        purpose && !cJSON_IsNull(purpose) ? strdup(purpose->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        source && !cJSON_IsNull(source) ? strdup(source->valuestring) : NULL,
        cost ? cost->valuedouble : 0,
        modified_on && !cJSON_IsNull(modified_on) ? strdup(modified_on->valuestring) : NULL,
        last_used_on && !cJSON_IsNull(last_used_on) ? strdup(last_used_on->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        marketing_list_type ? marketing_list_typeVariable : marketingservice_marketing_list_create_dto_MARKETINGLISTTYPE_NULL,
        marketing_list_target ? marketing_list_targetVariable : marketingservice_marketing_list_create_dto_MARKETINGLISTTARGET_NULL
        );

    return marketing_list_create_dto_local_var;
end:
    return NULL;

}
