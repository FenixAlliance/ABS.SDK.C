#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ledger_type_update_dto.h"


char* ledger_type_update_dto_ledger_class_ToString(accountingservice_ledger_type_update_dto_LEDGERCLASS_e ledger_class) {
    char* ledger_classArray[] =  { "NULL", "Assets", "Equity", "Gains", "Losses", "Revenue", "Expenses", "Liabilities" };
    return ledger_classArray[ledger_class];
}

accountingservice_ledger_type_update_dto_LEDGERCLASS_e ledger_type_update_dto_ledger_class_FromString(char* ledger_class){
    int stringToReturn = 0;
    char *ledger_classArray[] =  { "NULL", "Assets", "Equity", "Gains", "Losses", "Revenue", "Expenses", "Liabilities" };
    size_t sizeofArray = sizeof(ledger_classArray) / sizeof(ledger_classArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ledger_class, ledger_classArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ledger_type_update_dto_t *ledger_type_update_dto_create(
    char *name,
    accountingservice_ledger_type_update_dto_LEDGERCLASS_e ledger_class,
    char *tenant_id,
    char *enrollment_id
    ) {
    ledger_type_update_dto_t *ledger_type_update_dto_local_var = malloc(sizeof(ledger_type_update_dto_t));
    if (!ledger_type_update_dto_local_var) {
        return NULL;
    }
    ledger_type_update_dto_local_var->name = name;
    ledger_type_update_dto_local_var->ledger_class = ledger_class;
    ledger_type_update_dto_local_var->tenant_id = tenant_id;
    ledger_type_update_dto_local_var->enrollment_id = enrollment_id;

    return ledger_type_update_dto_local_var;
}


void ledger_type_update_dto_free(ledger_type_update_dto_t *ledger_type_update_dto) {
    if(NULL == ledger_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (ledger_type_update_dto->name) {
        free(ledger_type_update_dto->name);
        ledger_type_update_dto->name = NULL;
    }
    if (ledger_type_update_dto->tenant_id) {
        free(ledger_type_update_dto->tenant_id);
        ledger_type_update_dto->tenant_id = NULL;
    }
    if (ledger_type_update_dto->enrollment_id) {
        free(ledger_type_update_dto->enrollment_id);
        ledger_type_update_dto->enrollment_id = NULL;
    }
    free(ledger_type_update_dto);
}

cJSON *ledger_type_update_dto_convertToJSON(ledger_type_update_dto_t *ledger_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // ledger_type_update_dto->name
    if(ledger_type_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", ledger_type_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // ledger_type_update_dto->ledger_class
    if(ledger_type_update_dto->ledger_class != accountingservice_ledger_type_update_dto_LEDGERCLASS_NULL) {
    if(cJSON_AddStringToObject(item, "ledgerClass", ledger_classledger_type_update_dto_ToString(ledger_type_update_dto->ledger_class)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ledger_type_update_dto->tenant_id
    if(ledger_type_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", ledger_type_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // ledger_type_update_dto->enrollment_id
    if(ledger_type_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", ledger_type_update_dto->enrollment_id) == NULL) {
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

ledger_type_update_dto_t *ledger_type_update_dto_parseFromJSON(cJSON *ledger_type_update_dtoJSON){

    ledger_type_update_dto_t *ledger_type_update_dto_local_var = NULL;

    // ledger_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(ledger_type_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // ledger_type_update_dto->ledger_class
    cJSON *ledger_class = cJSON_GetObjectItemCaseSensitive(ledger_type_update_dtoJSON, "ledgerClass");
    accountingservice_ledger_type_update_dto_LEDGERCLASS_e ledger_classVariable;
    if (ledger_class) { 
    if(!cJSON_IsString(ledger_class))
    {
    goto end; //Enum
    }
    ledger_classVariable = ledger_type_update_dto_ledger_class_FromString(ledger_class->valuestring);
    }

    // ledger_type_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(ledger_type_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // ledger_type_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(ledger_type_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    ledger_type_update_dto_local_var = ledger_type_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        ledger_class ? ledger_classVariable : accountingservice_ledger_type_update_dto_LEDGERCLASS_NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return ledger_type_update_dto_local_var;
end:
    return NULL;

}
