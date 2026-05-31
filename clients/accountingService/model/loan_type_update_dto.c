#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "loan_type_update_dto.h"



loan_type_update_dto_t *loan_type_update_dto_create(
    char *name,
    char *description
    ) {
    loan_type_update_dto_t *loan_type_update_dto_local_var = malloc(sizeof(loan_type_update_dto_t));
    if (!loan_type_update_dto_local_var) {
        return NULL;
    }
    loan_type_update_dto_local_var->name = name;
    loan_type_update_dto_local_var->description = description;

    return loan_type_update_dto_local_var;
}


void loan_type_update_dto_free(loan_type_update_dto_t *loan_type_update_dto) {
    if(NULL == loan_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (loan_type_update_dto->name) {
        free(loan_type_update_dto->name);
        loan_type_update_dto->name = NULL;
    }
    if (loan_type_update_dto->description) {
        free(loan_type_update_dto->description);
        loan_type_update_dto->description = NULL;
    }
    free(loan_type_update_dto);
}

cJSON *loan_type_update_dto_convertToJSON(loan_type_update_dto_t *loan_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // loan_type_update_dto->name
    if (!loan_type_update_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", loan_type_update_dto->name) == NULL) {
    goto fail; //String
    }


    // loan_type_update_dto->description
    if(loan_type_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", loan_type_update_dto->description) == NULL) {
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

loan_type_update_dto_t *loan_type_update_dto_parseFromJSON(cJSON *loan_type_update_dtoJSON){

    loan_type_update_dto_t *loan_type_update_dto_local_var = NULL;

    // loan_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(loan_type_update_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // loan_type_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(loan_type_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    loan_type_update_dto_local_var = loan_type_update_dto_create (
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return loan_type_update_dto_local_var;
end:
    return NULL;

}
