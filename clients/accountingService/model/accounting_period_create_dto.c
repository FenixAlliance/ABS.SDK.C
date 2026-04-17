#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "accounting_period_create_dto.h"



accounting_period_create_dto_t *accounting_period_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *date_start,
    char *date_end
    ) {
    accounting_period_create_dto_t *accounting_period_create_dto_local_var = malloc(sizeof(accounting_period_create_dto_t));
    if (!accounting_period_create_dto_local_var) {
        return NULL;
    }
    accounting_period_create_dto_local_var->id = id;
    accounting_period_create_dto_local_var->timestamp = timestamp;
    accounting_period_create_dto_local_var->name = name;
    accounting_period_create_dto_local_var->date_start = date_start;
    accounting_period_create_dto_local_var->date_end = date_end;

    return accounting_period_create_dto_local_var;
}


void accounting_period_create_dto_free(accounting_period_create_dto_t *accounting_period_create_dto) {
    if(NULL == accounting_period_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (accounting_period_create_dto->id) {
        free(accounting_period_create_dto->id);
        accounting_period_create_dto->id = NULL;
    }
    if (accounting_period_create_dto->timestamp) {
        free(accounting_period_create_dto->timestamp);
        accounting_period_create_dto->timestamp = NULL;
    }
    if (accounting_period_create_dto->name) {
        free(accounting_period_create_dto->name);
        accounting_period_create_dto->name = NULL;
    }
    if (accounting_period_create_dto->date_start) {
        free(accounting_period_create_dto->date_start);
        accounting_period_create_dto->date_start = NULL;
    }
    if (accounting_period_create_dto->date_end) {
        free(accounting_period_create_dto->date_end);
        accounting_period_create_dto->date_end = NULL;
    }
    free(accounting_period_create_dto);
}

cJSON *accounting_period_create_dto_convertToJSON(accounting_period_create_dto_t *accounting_period_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // accounting_period_create_dto->id
    if(accounting_period_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", accounting_period_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // accounting_period_create_dto->timestamp
    if(accounting_period_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", accounting_period_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // accounting_period_create_dto->name
    if(accounting_period_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", accounting_period_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // accounting_period_create_dto->date_start
    if(accounting_period_create_dto->date_start) {
    if(cJSON_AddStringToObject(item, "dateStart", accounting_period_create_dto->date_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // accounting_period_create_dto->date_end
    if(accounting_period_create_dto->date_end) {
    if(cJSON_AddStringToObject(item, "dateEnd", accounting_period_create_dto->date_end) == NULL) {
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

accounting_period_create_dto_t *accounting_period_create_dto_parseFromJSON(cJSON *accounting_period_create_dtoJSON){

    accounting_period_create_dto_t *accounting_period_create_dto_local_var = NULL;

    // accounting_period_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(accounting_period_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // accounting_period_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(accounting_period_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // accounting_period_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(accounting_period_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // accounting_period_create_dto->date_start
    cJSON *date_start = cJSON_GetObjectItemCaseSensitive(accounting_period_create_dtoJSON, "dateStart");
    if (date_start) { 
    if(!cJSON_IsString(date_start) && !cJSON_IsNull(date_start))
    {
    goto end; //DateTime
    }
    }

    // accounting_period_create_dto->date_end
    cJSON *date_end = cJSON_GetObjectItemCaseSensitive(accounting_period_create_dtoJSON, "dateEnd");
    if (date_end) { 
    if(!cJSON_IsString(date_end) && !cJSON_IsNull(date_end))
    {
    goto end; //DateTime
    }
    }


    accounting_period_create_dto_local_var = accounting_period_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        date_start && !cJSON_IsNull(date_start) ? strdup(date_start->valuestring) : NULL,
        date_end && !cJSON_IsNull(date_end) ? strdup(date_end->valuestring) : NULL
        );

    return accounting_period_create_dto_local_var;
end:
    return NULL;

}
