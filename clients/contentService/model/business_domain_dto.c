#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "business_domain_dto.h"



business_domain_dto_t *business_domain_dto_create(
    char *id,
    char *timestamp,
    char *domain,
    char *txt_record,
    int verified,
    char *business_id
    ) {
    business_domain_dto_t *business_domain_dto_local_var = malloc(sizeof(business_domain_dto_t));
    if (!business_domain_dto_local_var) {
        return NULL;
    }
    business_domain_dto_local_var->id = id;
    business_domain_dto_local_var->timestamp = timestamp;
    business_domain_dto_local_var->domain = domain;
    business_domain_dto_local_var->txt_record = txt_record;
    business_domain_dto_local_var->verified = verified;
    business_domain_dto_local_var->business_id = business_id;

    return business_domain_dto_local_var;
}


void business_domain_dto_free(business_domain_dto_t *business_domain_dto) {
    if(NULL == business_domain_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (business_domain_dto->id) {
        free(business_domain_dto->id);
        business_domain_dto->id = NULL;
    }
    if (business_domain_dto->timestamp) {
        free(business_domain_dto->timestamp);
        business_domain_dto->timestamp = NULL;
    }
    if (business_domain_dto->domain) {
        free(business_domain_dto->domain);
        business_domain_dto->domain = NULL;
    }
    if (business_domain_dto->txt_record) {
        free(business_domain_dto->txt_record);
        business_domain_dto->txt_record = NULL;
    }
    if (business_domain_dto->business_id) {
        free(business_domain_dto->business_id);
        business_domain_dto->business_id = NULL;
    }
    free(business_domain_dto);
}

cJSON *business_domain_dto_convertToJSON(business_domain_dto_t *business_domain_dto) {
    cJSON *item = cJSON_CreateObject();

    // business_domain_dto->id
    if(business_domain_dto->id) {
    if(cJSON_AddStringToObject(item, "id", business_domain_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // business_domain_dto->timestamp
    if(business_domain_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", business_domain_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // business_domain_dto->domain
    if(business_domain_dto->domain) {
    if(cJSON_AddStringToObject(item, "domain", business_domain_dto->domain) == NULL) {
    goto fail; //String
    }
    }


    // business_domain_dto->txt_record
    if(business_domain_dto->txt_record) {
    if(cJSON_AddStringToObject(item, "txtRecord", business_domain_dto->txt_record) == NULL) {
    goto fail; //String
    }
    }


    // business_domain_dto->verified
    if(business_domain_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", business_domain_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // business_domain_dto->business_id
    if(business_domain_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", business_domain_dto->business_id) == NULL) {
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

business_domain_dto_t *business_domain_dto_parseFromJSON(cJSON *business_domain_dtoJSON){

    business_domain_dto_t *business_domain_dto_local_var = NULL;

    // business_domain_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(business_domain_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // business_domain_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(business_domain_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // business_domain_dto->domain
    cJSON *domain = cJSON_GetObjectItemCaseSensitive(business_domain_dtoJSON, "domain");
    if (domain) { 
    if(!cJSON_IsString(domain) && !cJSON_IsNull(domain))
    {
    goto end; //String
    }
    }

    // business_domain_dto->txt_record
    cJSON *txt_record = cJSON_GetObjectItemCaseSensitive(business_domain_dtoJSON, "txtRecord");
    if (txt_record) { 
    if(!cJSON_IsString(txt_record) && !cJSON_IsNull(txt_record))
    {
    goto end; //String
    }
    }

    // business_domain_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(business_domain_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // business_domain_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(business_domain_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }


    business_domain_dto_local_var = business_domain_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        domain && !cJSON_IsNull(domain) ? strdup(domain->valuestring) : NULL,
        txt_record && !cJSON_IsNull(txt_record) ? strdup(txt_record->valuestring) : NULL,
        verified ? verified->valueint : 0,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL
        );

    return business_domain_dto_local_var;
end:
    return NULL;

}
