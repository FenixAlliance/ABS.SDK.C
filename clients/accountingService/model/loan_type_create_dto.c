#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "loan_type_create_dto.h"



loan_type_create_dto_t *loan_type_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
    ) {
    loan_type_create_dto_t *loan_type_create_dto_local_var = malloc(sizeof(loan_type_create_dto_t));
    if (!loan_type_create_dto_local_var) {
        return NULL;
    }
    loan_type_create_dto_local_var->id = id;
    loan_type_create_dto_local_var->timestamp = timestamp;
    loan_type_create_dto_local_var->name = name;
    loan_type_create_dto_local_var->description = description;

    return loan_type_create_dto_local_var;
}


void loan_type_create_dto_free(loan_type_create_dto_t *loan_type_create_dto) {
    if(NULL == loan_type_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (loan_type_create_dto->id) {
        free(loan_type_create_dto->id);
        loan_type_create_dto->id = NULL;
    }
    if (loan_type_create_dto->timestamp) {
        free(loan_type_create_dto->timestamp);
        loan_type_create_dto->timestamp = NULL;
    }
    if (loan_type_create_dto->name) {
        free(loan_type_create_dto->name);
        loan_type_create_dto->name = NULL;
    }
    if (loan_type_create_dto->description) {
        free(loan_type_create_dto->description);
        loan_type_create_dto->description = NULL;
    }
    free(loan_type_create_dto);
}

cJSON *loan_type_create_dto_convertToJSON(loan_type_create_dto_t *loan_type_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // loan_type_create_dto->id
    if(loan_type_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", loan_type_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // loan_type_create_dto->timestamp
    if(loan_type_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", loan_type_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // loan_type_create_dto->name
    if (!loan_type_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", loan_type_create_dto->name) == NULL) {
    goto fail; //String
    }


    // loan_type_create_dto->description
    if(loan_type_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", loan_type_create_dto->description) == NULL) {
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

loan_type_create_dto_t *loan_type_create_dto_parseFromJSON(cJSON *loan_type_create_dtoJSON){

    loan_type_create_dto_t *loan_type_create_dto_local_var = NULL;

    // loan_type_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(loan_type_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // loan_type_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(loan_type_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // loan_type_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(loan_type_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // loan_type_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(loan_type_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    loan_type_create_dto_local_var = loan_type_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return loan_type_create_dto_local_var;
end:
    return NULL;

}
