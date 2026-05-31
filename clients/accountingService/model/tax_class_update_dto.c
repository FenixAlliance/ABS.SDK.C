#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_class_update_dto.h"


char* tax_class_update_dto_type_ToString(accountingservice_tax_class_update_dto_TYPE_e type) {
    char* typeArray[] =  { "NULL", "Tax", "Withholding" };
    return typeArray[type];
}

accountingservice_tax_class_update_dto_TYPE_e tax_class_update_dto_type_FromString(char* type){
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

tax_class_update_dto_t *tax_class_update_dto_create(
    char *name,
    accountingservice_tax_class_update_dto_TYPE_e type,
    char *fiscal_authority_id
    ) {
    tax_class_update_dto_t *tax_class_update_dto_local_var = malloc(sizeof(tax_class_update_dto_t));
    if (!tax_class_update_dto_local_var) {
        return NULL;
    }
    tax_class_update_dto_local_var->name = name;
    tax_class_update_dto_local_var->type = type;
    tax_class_update_dto_local_var->fiscal_authority_id = fiscal_authority_id;

    return tax_class_update_dto_local_var;
}


void tax_class_update_dto_free(tax_class_update_dto_t *tax_class_update_dto) {
    if(NULL == tax_class_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tax_class_update_dto->name) {
        free(tax_class_update_dto->name);
        tax_class_update_dto->name = NULL;
    }
    if (tax_class_update_dto->fiscal_authority_id) {
        free(tax_class_update_dto->fiscal_authority_id);
        tax_class_update_dto->fiscal_authority_id = NULL;
    }
    free(tax_class_update_dto);
}

cJSON *tax_class_update_dto_convertToJSON(tax_class_update_dto_t *tax_class_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // tax_class_update_dto->name
    if(tax_class_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", tax_class_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_update_dto->type
    if(tax_class_update_dto->type != accountingservice_tax_class_update_dto_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typetax_class_update_dto_ToString(tax_class_update_dto->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // tax_class_update_dto->fiscal_authority_id
    if(tax_class_update_dto->fiscal_authority_id) {
    if(cJSON_AddStringToObject(item, "fiscalAuthorityId", tax_class_update_dto->fiscal_authority_id) == NULL) {
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

tax_class_update_dto_t *tax_class_update_dto_parseFromJSON(cJSON *tax_class_update_dtoJSON){

    tax_class_update_dto_t *tax_class_update_dto_local_var = NULL;

    // tax_class_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tax_class_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tax_class_update_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(tax_class_update_dtoJSON, "type");
    accountingservice_tax_class_update_dto_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = tax_class_update_dto_type_FromString(type->valuestring);
    }

    // tax_class_update_dto->fiscal_authority_id
    cJSON *fiscal_authority_id = cJSON_GetObjectItemCaseSensitive(tax_class_update_dtoJSON, "fiscalAuthorityId");
    if (fiscal_authority_id) { 
    if(!cJSON_IsString(fiscal_authority_id) && !cJSON_IsNull(fiscal_authority_id))
    {
    goto end; //String
    }
    }


    tax_class_update_dto_local_var = tax_class_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        type ? typeVariable : accountingservice_tax_class_update_dto_TYPE_NULL,
        fiscal_authority_id && !cJSON_IsNull(fiscal_authority_id) ? strdup(fiscal_authority_id->valuestring) : NULL
        );

    return tax_class_update_dto_local_var;
end:
    return NULL;

}
