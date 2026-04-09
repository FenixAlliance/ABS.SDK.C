#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_create_dto.h"



tenant_create_dto_t *tenant_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *legal_name,
    char *email,
    char *phone,
    char *web_url,
    char *handler,
    char *about,
    char *slogan,
    char *currency_id,
    char *duns,
    char *tax_id,
    char *avatar_url,
    char *country_id,
    char *state_id,
    char *city_id,
    char *language_id,
    char *timezone_id,
    char *business_type_id,
    char *business_segment_id,
    char *business_industry_id,
    char *business_size_id
    ) {
    tenant_create_dto_t *tenant_create_dto_local_var = malloc(sizeof(tenant_create_dto_t));
    if (!tenant_create_dto_local_var) {
        return NULL;
    }
    tenant_create_dto_local_var->id = id;
    tenant_create_dto_local_var->timestamp = timestamp;
    tenant_create_dto_local_var->name = name;
    tenant_create_dto_local_var->legal_name = legal_name;
    tenant_create_dto_local_var->email = email;
    tenant_create_dto_local_var->phone = phone;
    tenant_create_dto_local_var->web_url = web_url;
    tenant_create_dto_local_var->handler = handler;
    tenant_create_dto_local_var->about = about;
    tenant_create_dto_local_var->slogan = slogan;
    tenant_create_dto_local_var->currency_id = currency_id;
    tenant_create_dto_local_var->duns = duns;
    tenant_create_dto_local_var->tax_id = tax_id;
    tenant_create_dto_local_var->avatar_url = avatar_url;
    tenant_create_dto_local_var->country_id = country_id;
    tenant_create_dto_local_var->state_id = state_id;
    tenant_create_dto_local_var->city_id = city_id;
    tenant_create_dto_local_var->language_id = language_id;
    tenant_create_dto_local_var->timezone_id = timezone_id;
    tenant_create_dto_local_var->business_type_id = business_type_id;
    tenant_create_dto_local_var->business_segment_id = business_segment_id;
    tenant_create_dto_local_var->business_industry_id = business_industry_id;
    tenant_create_dto_local_var->business_size_id = business_size_id;

    return tenant_create_dto_local_var;
}


void tenant_create_dto_free(tenant_create_dto_t *tenant_create_dto) {
    if(NULL == tenant_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_create_dto->id) {
        free(tenant_create_dto->id);
        tenant_create_dto->id = NULL;
    }
    if (tenant_create_dto->timestamp) {
        free(tenant_create_dto->timestamp);
        tenant_create_dto->timestamp = NULL;
    }
    if (tenant_create_dto->name) {
        free(tenant_create_dto->name);
        tenant_create_dto->name = NULL;
    }
    if (tenant_create_dto->legal_name) {
        free(tenant_create_dto->legal_name);
        tenant_create_dto->legal_name = NULL;
    }
    if (tenant_create_dto->email) {
        free(tenant_create_dto->email);
        tenant_create_dto->email = NULL;
    }
    if (tenant_create_dto->phone) {
        free(tenant_create_dto->phone);
        tenant_create_dto->phone = NULL;
    }
    if (tenant_create_dto->web_url) {
        free(tenant_create_dto->web_url);
        tenant_create_dto->web_url = NULL;
    }
    if (tenant_create_dto->handler) {
        free(tenant_create_dto->handler);
        tenant_create_dto->handler = NULL;
    }
    if (tenant_create_dto->about) {
        free(tenant_create_dto->about);
        tenant_create_dto->about = NULL;
    }
    if (tenant_create_dto->slogan) {
        free(tenant_create_dto->slogan);
        tenant_create_dto->slogan = NULL;
    }
    if (tenant_create_dto->currency_id) {
        free(tenant_create_dto->currency_id);
        tenant_create_dto->currency_id = NULL;
    }
    if (tenant_create_dto->duns) {
        free(tenant_create_dto->duns);
        tenant_create_dto->duns = NULL;
    }
    if (tenant_create_dto->tax_id) {
        free(tenant_create_dto->tax_id);
        tenant_create_dto->tax_id = NULL;
    }
    if (tenant_create_dto->avatar_url) {
        free(tenant_create_dto->avatar_url);
        tenant_create_dto->avatar_url = NULL;
    }
    if (tenant_create_dto->country_id) {
        free(tenant_create_dto->country_id);
        tenant_create_dto->country_id = NULL;
    }
    if (tenant_create_dto->state_id) {
        free(tenant_create_dto->state_id);
        tenant_create_dto->state_id = NULL;
    }
    if (tenant_create_dto->city_id) {
        free(tenant_create_dto->city_id);
        tenant_create_dto->city_id = NULL;
    }
    if (tenant_create_dto->language_id) {
        free(tenant_create_dto->language_id);
        tenant_create_dto->language_id = NULL;
    }
    if (tenant_create_dto->timezone_id) {
        free(tenant_create_dto->timezone_id);
        tenant_create_dto->timezone_id = NULL;
    }
    if (tenant_create_dto->business_type_id) {
        free(tenant_create_dto->business_type_id);
        tenant_create_dto->business_type_id = NULL;
    }
    if (tenant_create_dto->business_segment_id) {
        free(tenant_create_dto->business_segment_id);
        tenant_create_dto->business_segment_id = NULL;
    }
    if (tenant_create_dto->business_industry_id) {
        free(tenant_create_dto->business_industry_id);
        tenant_create_dto->business_industry_id = NULL;
    }
    if (tenant_create_dto->business_size_id) {
        free(tenant_create_dto->business_size_id);
        tenant_create_dto->business_size_id = NULL;
    }
    free(tenant_create_dto);
}

cJSON *tenant_create_dto_convertToJSON(tenant_create_dto_t *tenant_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_create_dto->id
    if(tenant_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->timestamp
    if(tenant_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_create_dto->name
    if (!tenant_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", tenant_create_dto->name) == NULL) {
    goto fail; //String
    }


    // tenant_create_dto->legal_name
    if(tenant_create_dto->legal_name) {
    if(cJSON_AddStringToObject(item, "legalName", tenant_create_dto->legal_name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->email
    if (!tenant_create_dto->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", tenant_create_dto->email) == NULL) {
    goto fail; //String
    }


    // tenant_create_dto->phone
    if(tenant_create_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", tenant_create_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->web_url
    if(tenant_create_dto->web_url) {
    if(cJSON_AddStringToObject(item, "webUrl", tenant_create_dto->web_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->handler
    if(tenant_create_dto->handler) {
    if(cJSON_AddStringToObject(item, "handler", tenant_create_dto->handler) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->about
    if(tenant_create_dto->about) {
    if(cJSON_AddStringToObject(item, "about", tenant_create_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->slogan
    if(tenant_create_dto->slogan) {
    if(cJSON_AddStringToObject(item, "slogan", tenant_create_dto->slogan) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->currency_id
    if (!tenant_create_dto->currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currencyId", tenant_create_dto->currency_id) == NULL) {
    goto fail; //String
    }


    // tenant_create_dto->duns
    if(tenant_create_dto->duns) {
    if(cJSON_AddStringToObject(item, "duns", tenant_create_dto->duns) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->tax_id
    if(tenant_create_dto->tax_id) {
    if(cJSON_AddStringToObject(item, "taxId", tenant_create_dto->tax_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->avatar_url
    if(tenant_create_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", tenant_create_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->country_id
    if (!tenant_create_dto->country_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "countryId", tenant_create_dto->country_id) == NULL) {
    goto fail; //String
    }


    // tenant_create_dto->state_id
    if(tenant_create_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", tenant_create_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->city_id
    if(tenant_create_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", tenant_create_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->language_id
    if(tenant_create_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", tenant_create_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->timezone_id
    if(tenant_create_dto->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", tenant_create_dto->timezone_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->business_type_id
    if(tenant_create_dto->business_type_id) {
    if(cJSON_AddStringToObject(item, "businessTypeId", tenant_create_dto->business_type_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->business_segment_id
    if(tenant_create_dto->business_segment_id) {
    if(cJSON_AddStringToObject(item, "businessSegmentId", tenant_create_dto->business_segment_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->business_industry_id
    if(tenant_create_dto->business_industry_id) {
    if(cJSON_AddStringToObject(item, "businessIndustryId", tenant_create_dto->business_industry_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_create_dto->business_size_id
    if(tenant_create_dto->business_size_id) {
    if(cJSON_AddStringToObject(item, "businessSizeId", tenant_create_dto->business_size_id) == NULL) {
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

tenant_create_dto_t *tenant_create_dto_parseFromJSON(cJSON *tenant_create_dtoJSON){

    tenant_create_dto_t *tenant_create_dto_local_var = NULL;

    // tenant_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // tenant_create_dto->legal_name
    cJSON *legal_name = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "legalName");
    if (legal_name) { 
    if(!cJSON_IsString(legal_name) && !cJSON_IsNull(legal_name))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "email");
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // tenant_create_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->web_url
    cJSON *web_url = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "webUrl");
    if (web_url) { 
    if(!cJSON_IsString(web_url) && !cJSON_IsNull(web_url))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->handler
    cJSON *handler = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "handler");
    if (handler) { 
    if(!cJSON_IsString(handler) && !cJSON_IsNull(handler))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->slogan
    cJSON *slogan = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "slogan");
    if (slogan) { 
    if(!cJSON_IsString(slogan) && !cJSON_IsNull(slogan))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "currencyId");
    if (!currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(currency_id))
    {
    goto end; //String
    }

    // tenant_create_dto->duns
    cJSON *duns = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "duns");
    if (duns) { 
    if(!cJSON_IsString(duns) && !cJSON_IsNull(duns))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->tax_id
    cJSON *tax_id = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "taxId");
    if (tax_id) { 
    if(!cJSON_IsString(tax_id) && !cJSON_IsNull(tax_id))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "countryId");
    if (!country_id) {
        goto end;
    }

    
    if(!cJSON_IsString(country_id))
    {
    goto end; //String
    }

    // tenant_create_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->business_type_id
    cJSON *business_type_id = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "businessTypeId");
    if (business_type_id) { 
    if(!cJSON_IsString(business_type_id) && !cJSON_IsNull(business_type_id))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->business_segment_id
    cJSON *business_segment_id = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "businessSegmentId");
    if (business_segment_id) { 
    if(!cJSON_IsString(business_segment_id) && !cJSON_IsNull(business_segment_id))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->business_industry_id
    cJSON *business_industry_id = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "businessIndustryId");
    if (business_industry_id) { 
    if(!cJSON_IsString(business_industry_id) && !cJSON_IsNull(business_industry_id))
    {
    goto end; //String
    }
    }

    // tenant_create_dto->business_size_id
    cJSON *business_size_id = cJSON_GetObjectItemCaseSensitive(tenant_create_dtoJSON, "businessSizeId");
    if (business_size_id) { 
    if(!cJSON_IsString(business_size_id) && !cJSON_IsNull(business_size_id))
    {
    goto end; //String
    }
    }


    tenant_create_dto_local_var = tenant_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        legal_name && !cJSON_IsNull(legal_name) ? strdup(legal_name->valuestring) : NULL,
        strdup(email->valuestring),
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        web_url && !cJSON_IsNull(web_url) ? strdup(web_url->valuestring) : NULL,
        handler && !cJSON_IsNull(handler) ? strdup(handler->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        slogan && !cJSON_IsNull(slogan) ? strdup(slogan->valuestring) : NULL,
        strdup(currency_id->valuestring),
        duns && !cJSON_IsNull(duns) ? strdup(duns->valuestring) : NULL,
        tax_id && !cJSON_IsNull(tax_id) ? strdup(tax_id->valuestring) : NULL,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        strdup(country_id->valuestring),
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        language_id && !cJSON_IsNull(language_id) ? strdup(language_id->valuestring) : NULL,
        timezone_id && !cJSON_IsNull(timezone_id) ? strdup(timezone_id->valuestring) : NULL,
        business_type_id && !cJSON_IsNull(business_type_id) ? strdup(business_type_id->valuestring) : NULL,
        business_segment_id && !cJSON_IsNull(business_segment_id) ? strdup(business_segment_id->valuestring) : NULL,
        business_industry_id && !cJSON_IsNull(business_industry_id) ? strdup(business_industry_id->valuestring) : NULL,
        business_size_id && !cJSON_IsNull(business_size_id) ? strdup(business_size_id->valuestring) : NULL
        );

    return tenant_create_dto_local_var;
end:
    return NULL;

}
