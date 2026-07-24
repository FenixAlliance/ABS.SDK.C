#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "licensing_certificate_create_dto.h"



licensing_certificate_create_dto_t *licensing_certificate_create_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *contact_id,
    char *csr
    ) {
    licensing_certificate_create_dto_t *licensing_certificate_create_dto_local_var = malloc(sizeof(licensing_certificate_create_dto_t));
    if (!licensing_certificate_create_dto_local_var) {
        return NULL;
    }
    licensing_certificate_create_dto_local_var->id = id;
    licensing_certificate_create_dto_local_var->timestamp = timestamp;
    licensing_certificate_create_dto_local_var->type = type;
    licensing_certificate_create_dto_local_var->contact_id = contact_id;
    licensing_certificate_create_dto_local_var->csr = csr;

    return licensing_certificate_create_dto_local_var;
}


void licensing_certificate_create_dto_free(licensing_certificate_create_dto_t *licensing_certificate_create_dto) {
    if(NULL == licensing_certificate_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (licensing_certificate_create_dto->id) {
        free(licensing_certificate_create_dto->id);
        licensing_certificate_create_dto->id = NULL;
    }
    if (licensing_certificate_create_dto->timestamp) {
        free(licensing_certificate_create_dto->timestamp);
        licensing_certificate_create_dto->timestamp = NULL;
    }
    if (licensing_certificate_create_dto->type) {
        free(licensing_certificate_create_dto->type);
        licensing_certificate_create_dto->type = NULL;
    }
    if (licensing_certificate_create_dto->contact_id) {
        free(licensing_certificate_create_dto->contact_id);
        licensing_certificate_create_dto->contact_id = NULL;
    }
    if (licensing_certificate_create_dto->csr) {
        free(licensing_certificate_create_dto->csr);
        licensing_certificate_create_dto->csr = NULL;
    }
    free(licensing_certificate_create_dto);
}

cJSON *licensing_certificate_create_dto_convertToJSON(licensing_certificate_create_dto_t *licensing_certificate_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // licensing_certificate_create_dto->id
    if(licensing_certificate_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", licensing_certificate_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // licensing_certificate_create_dto->timestamp
    if(licensing_certificate_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", licensing_certificate_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // licensing_certificate_create_dto->type
    if(licensing_certificate_create_dto->type) {
    if(cJSON_AddStringToObject(item, "type", licensing_certificate_create_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // licensing_certificate_create_dto->contact_id
    if (!licensing_certificate_create_dto->contact_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "contactId", licensing_certificate_create_dto->contact_id) == NULL) {
    goto fail; //String
    }


    // licensing_certificate_create_dto->csr
    if(licensing_certificate_create_dto->csr) {
    if(cJSON_AddStringToObject(item, "csr", licensing_certificate_create_dto->csr) == NULL) {
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

licensing_certificate_create_dto_t *licensing_certificate_create_dto_parseFromJSON(cJSON *licensing_certificate_create_dtoJSON){

    licensing_certificate_create_dto_t *licensing_certificate_create_dto_local_var = NULL;

    // licensing_certificate_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(licensing_certificate_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // licensing_certificate_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(licensing_certificate_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // licensing_certificate_create_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(licensing_certificate_create_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // licensing_certificate_create_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(licensing_certificate_create_dtoJSON, "contactId");
    if (!contact_id) {
        goto end;
    }

    
    if(!cJSON_IsString(contact_id))
    {
    goto end; //String
    }

    // licensing_certificate_create_dto->csr
    cJSON *csr = cJSON_GetObjectItemCaseSensitive(licensing_certificate_create_dtoJSON, "csr");
    if (csr) { 
    if(!cJSON_IsString(csr) && !cJSON_IsNull(csr))
    {
    goto end; //String
    }
    }


    licensing_certificate_create_dto_local_var = licensing_certificate_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        strdup(contact_id->valuestring),
        csr && !cJSON_IsNull(csr) ? strdup(csr->valuestring) : NULL
        );

    return licensing_certificate_create_dto_local_var;
end:
    return NULL;

}
