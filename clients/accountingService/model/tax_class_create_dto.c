#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_class_create_dto.h"


char* tax_class_create_dto_type_ToString(accountingservice_tax_class_create_dto_TYPE_e type) {
    char* typeArray[] =  { "NULL", "Tax", "Withholding" };
    return typeArray[type];
}

accountingservice_tax_class_create_dto_TYPE_e tax_class_create_dto_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "Tax", "Withholding" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

tax_class_create_dto_t *tax_class_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    accountingservice_tax_class_create_dto_TYPE_e type,
    char *fiscal_authority_id
    ) {
    tax_class_create_dto_t *tax_class_create_dto_local_var = malloc(sizeof(tax_class_create_dto_t));
    if (!tax_class_create_dto_local_var) {
        return NULL;
    }
    tax_class_create_dto_local_var->id = id;
    tax_class_create_dto_local_var->timestamp = timestamp;
    tax_class_create_dto_local_var->name = name;
    tax_class_create_dto_local_var->type = type;
    tax_class_create_dto_local_var->fiscal_authority_id = fiscal_authority_id;

    return tax_class_create_dto_local_var;
}


void tax_class_create_dto_free(tax_class_create_dto_t *tax_class_create_dto) {
    if(NULL == tax_class_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tax_class_create_dto->id) {
        free(tax_class_create_dto->id);
        tax_class_create_dto->id = NULL;
    }
    if (tax_class_create_dto->timestamp) {
        free(tax_class_create_dto->timestamp);
        tax_class_create_dto->timestamp = NULL;
    }
    if (tax_class_create_dto->name) {
        free(tax_class_create_dto->name);
        tax_class_create_dto->name = NULL;
    }
    if (tax_class_create_dto->fiscal_authority_id) {
        free(tax_class_create_dto->fiscal_authority_id);
        tax_class_create_dto->fiscal_authority_id = NULL;
    }
    free(tax_class_create_dto);
}

cJSON *tax_class_create_dto_convertToJSON(tax_class_create_dto_t *tax_class_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // tax_class_create_dto->id
    if(tax_class_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tax_class_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_create_dto->timestamp
    if(tax_class_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tax_class_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tax_class_create_dto->name
    if(tax_class_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", tax_class_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_create_dto->type
    if(tax_class_create_dto->type != accountingservice_tax_class_create_dto_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typetax_class_create_dto_ToString(tax_class_create_dto->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // tax_class_create_dto->fiscal_authority_id
    if(tax_class_create_dto->fiscal_authority_id) {
    if(cJSON_AddStringToObject(item, "fiscalAuthorityId", tax_class_create_dto->fiscal_authority_id) == NULL) {
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

tax_class_create_dto_t *tax_class_create_dto_parseFromJSON(cJSON *tax_class_create_dtoJSON){

    tax_class_create_dto_t *tax_class_create_dto_local_var = NULL;

    // tax_class_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tax_class_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tax_class_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tax_class_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tax_class_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tax_class_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tax_class_create_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(tax_class_create_dtoJSON, "type");
    accountingservice_tax_class_create_dto_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = tax_class_create_dto_type_FromString(type->valuestring);
    }

    // tax_class_create_dto->fiscal_authority_id
    cJSON *fiscal_authority_id = cJSON_GetObjectItemCaseSensitive(tax_class_create_dtoJSON, "fiscalAuthorityId");
    if (fiscal_authority_id) { 
    if(!cJSON_IsString(fiscal_authority_id) && !cJSON_IsNull(fiscal_authority_id))
    {
    goto end; //String
    }
    }


    tax_class_create_dto_local_var = tax_class_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        type ? typeVariable : accountingservice_tax_class_create_dto_TYPE_NULL,
        fiscal_authority_id && !cJSON_IsNull(fiscal_authority_id) ? strdup(fiscal_authority_id->valuestring) : NULL
        );

    return tax_class_create_dto_local_var;
end:
    return NULL;

}
