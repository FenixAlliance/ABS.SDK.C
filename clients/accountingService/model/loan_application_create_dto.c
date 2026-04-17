#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "loan_application_create_dto.h"



loan_application_create_dto_t *loan_application_create_dto_create(
    char *id,
    char *timestamp
    ) {
    loan_application_create_dto_t *loan_application_create_dto_local_var = malloc(sizeof(loan_application_create_dto_t));
    if (!loan_application_create_dto_local_var) {
        return NULL;
    }
    loan_application_create_dto_local_var->id = id;
    loan_application_create_dto_local_var->timestamp = timestamp;

    return loan_application_create_dto_local_var;
}


void loan_application_create_dto_free(loan_application_create_dto_t *loan_application_create_dto) {
    if(NULL == loan_application_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (loan_application_create_dto->id) {
        free(loan_application_create_dto->id);
        loan_application_create_dto->id = NULL;
    }
    if (loan_application_create_dto->timestamp) {
        free(loan_application_create_dto->timestamp);
        loan_application_create_dto->timestamp = NULL;
    }
    free(loan_application_create_dto);
}

cJSON *loan_application_create_dto_convertToJSON(loan_application_create_dto_t *loan_application_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // loan_application_create_dto->id
    if(loan_application_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", loan_application_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // loan_application_create_dto->timestamp
    if(loan_application_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", loan_application_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

loan_application_create_dto_t *loan_application_create_dto_parseFromJSON(cJSON *loan_application_create_dtoJSON){

    loan_application_create_dto_t *loan_application_create_dto_local_var = NULL;

    // loan_application_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(loan_application_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // loan_application_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(loan_application_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }


    loan_application_create_dto_local_var = loan_application_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL
        );

    return loan_application_create_dto_local_var;
end:
    return NULL;

}
