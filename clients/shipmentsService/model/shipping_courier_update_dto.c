#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_courier_update_dto.h"



shipping_courier_update_dto_t *shipping_courier_update_dto_create(
    char *name,
    char *logo_url,
    char *country_id,
    char *business_profile_record_id
    ) {
    shipping_courier_update_dto_t *shipping_courier_update_dto_local_var = malloc(sizeof(shipping_courier_update_dto_t));
    if (!shipping_courier_update_dto_local_var) {
        return NULL;
    }
    shipping_courier_update_dto_local_var->name = name;
    shipping_courier_update_dto_local_var->logo_url = logo_url;
    shipping_courier_update_dto_local_var->country_id = country_id;
    shipping_courier_update_dto_local_var->business_profile_record_id = business_profile_record_id;

    return shipping_courier_update_dto_local_var;
}


void shipping_courier_update_dto_free(shipping_courier_update_dto_t *shipping_courier_update_dto) {
    if(NULL == shipping_courier_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_courier_update_dto->name) {
        free(shipping_courier_update_dto->name);
        shipping_courier_update_dto->name = NULL;
    }
    if (shipping_courier_update_dto->logo_url) {
        free(shipping_courier_update_dto->logo_url);
        shipping_courier_update_dto->logo_url = NULL;
    }
    if (shipping_courier_update_dto->country_id) {
        free(shipping_courier_update_dto->country_id);
        shipping_courier_update_dto->country_id = NULL;
    }
    if (shipping_courier_update_dto->business_profile_record_id) {
        free(shipping_courier_update_dto->business_profile_record_id);
        shipping_courier_update_dto->business_profile_record_id = NULL;
    }
    free(shipping_courier_update_dto);
}

cJSON *shipping_courier_update_dto_convertToJSON(shipping_courier_update_dto_t *shipping_courier_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipping_courier_update_dto->name
    if(shipping_courier_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", shipping_courier_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_update_dto->logo_url
    if(shipping_courier_update_dto->logo_url) {
    if(cJSON_AddStringToObject(item, "logoURL", shipping_courier_update_dto->logo_url) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_update_dto->country_id
    if(shipping_courier_update_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryID", shipping_courier_update_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_courier_update_dto->business_profile_record_id
    if(shipping_courier_update_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", shipping_courier_update_dto->business_profile_record_id) == NULL) {
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

shipping_courier_update_dto_t *shipping_courier_update_dto_parseFromJSON(cJSON *shipping_courier_update_dtoJSON){

    shipping_courier_update_dto_t *shipping_courier_update_dto_local_var = NULL;

    // shipping_courier_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipping_courier_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // shipping_courier_update_dto->logo_url
    cJSON *logo_url = cJSON_GetObjectItemCaseSensitive(shipping_courier_update_dtoJSON, "logoURL");
    if (logo_url) { 
    if(!cJSON_IsString(logo_url) && !cJSON_IsNull(logo_url))
    {
    goto end; //String
    }
    }

    // shipping_courier_update_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(shipping_courier_update_dtoJSON, "countryID");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // shipping_courier_update_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(shipping_courier_update_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }


    shipping_courier_update_dto_local_var = shipping_courier_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        logo_url && !cJSON_IsNull(logo_url) ? strdup(logo_url->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL
        );

    return shipping_courier_update_dto_local_var;
end:
    return NULL;

}
