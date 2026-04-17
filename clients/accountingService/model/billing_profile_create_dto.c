#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billing_profile_create_dto.h"



billing_profile_create_dto_t *billing_profile_create_dto_create(
    char *id,
    char *timestamp,
    char *contact_id,
    char *tax_id,
    char *phone,
    char *email,
    char *address,
    char *address1,
    char *address2,
    char *postal_code,
    char *business_name,
    char *commercial_name,
    char *ticker,
    char *duns,
    int is_public_company,
    int is_facta_customer,
    char *country_id,
    char *state_id,
    char *city_id,
    char *fiscal_identification_type_id,
    char *fiscal_authority_id,
    char *fiscal_regime_id
    ) {
    billing_profile_create_dto_t *billing_profile_create_dto_local_var = malloc(sizeof(billing_profile_create_dto_t));
    if (!billing_profile_create_dto_local_var) {
        return NULL;
    }
    billing_profile_create_dto_local_var->id = id;
    billing_profile_create_dto_local_var->timestamp = timestamp;
    billing_profile_create_dto_local_var->contact_id = contact_id;
    billing_profile_create_dto_local_var->tax_id = tax_id;
    billing_profile_create_dto_local_var->phone = phone;
    billing_profile_create_dto_local_var->email = email;
    billing_profile_create_dto_local_var->address = address;
    billing_profile_create_dto_local_var->address1 = address1;
    billing_profile_create_dto_local_var->address2 = address2;
    billing_profile_create_dto_local_var->postal_code = postal_code;
    billing_profile_create_dto_local_var->business_name = business_name;
    billing_profile_create_dto_local_var->commercial_name = commercial_name;
    billing_profile_create_dto_local_var->ticker = ticker;
    billing_profile_create_dto_local_var->duns = duns;
    billing_profile_create_dto_local_var->is_public_company = is_public_company;
    billing_profile_create_dto_local_var->is_facta_customer = is_facta_customer;
    billing_profile_create_dto_local_var->country_id = country_id;
    billing_profile_create_dto_local_var->state_id = state_id;
    billing_profile_create_dto_local_var->city_id = city_id;
    billing_profile_create_dto_local_var->fiscal_identification_type_id = fiscal_identification_type_id;
    billing_profile_create_dto_local_var->fiscal_authority_id = fiscal_authority_id;
    billing_profile_create_dto_local_var->fiscal_regime_id = fiscal_regime_id;

    return billing_profile_create_dto_local_var;
}


void billing_profile_create_dto_free(billing_profile_create_dto_t *billing_profile_create_dto) {
    if(NULL == billing_profile_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (billing_profile_create_dto->id) {
        free(billing_profile_create_dto->id);
        billing_profile_create_dto->id = NULL;
    }
    if (billing_profile_create_dto->timestamp) {
        free(billing_profile_create_dto->timestamp);
        billing_profile_create_dto->timestamp = NULL;
    }
    if (billing_profile_create_dto->contact_id) {
        free(billing_profile_create_dto->contact_id);
        billing_profile_create_dto->contact_id = NULL;
    }
    if (billing_profile_create_dto->tax_id) {
        free(billing_profile_create_dto->tax_id);
        billing_profile_create_dto->tax_id = NULL;
    }
    if (billing_profile_create_dto->phone) {
        free(billing_profile_create_dto->phone);
        billing_profile_create_dto->phone = NULL;
    }
    if (billing_profile_create_dto->email) {
        free(billing_profile_create_dto->email);
        billing_profile_create_dto->email = NULL;
    }
    if (billing_profile_create_dto->address) {
        free(billing_profile_create_dto->address);
        billing_profile_create_dto->address = NULL;
    }
    if (billing_profile_create_dto->address1) {
        free(billing_profile_create_dto->address1);
        billing_profile_create_dto->address1 = NULL;
    }
    if (billing_profile_create_dto->address2) {
        free(billing_profile_create_dto->address2);
        billing_profile_create_dto->address2 = NULL;
    }
    if (billing_profile_create_dto->postal_code) {
        free(billing_profile_create_dto->postal_code);
        billing_profile_create_dto->postal_code = NULL;
    }
    if (billing_profile_create_dto->business_name) {
        free(billing_profile_create_dto->business_name);
        billing_profile_create_dto->business_name = NULL;
    }
    if (billing_profile_create_dto->commercial_name) {
        free(billing_profile_create_dto->commercial_name);
        billing_profile_create_dto->commercial_name = NULL;
    }
    if (billing_profile_create_dto->ticker) {
        free(billing_profile_create_dto->ticker);
        billing_profile_create_dto->ticker = NULL;
    }
    if (billing_profile_create_dto->duns) {
        free(billing_profile_create_dto->duns);
        billing_profile_create_dto->duns = NULL;
    }
    if (billing_profile_create_dto->country_id) {
        free(billing_profile_create_dto->country_id);
        billing_profile_create_dto->country_id = NULL;
    }
    if (billing_profile_create_dto->state_id) {
        free(billing_profile_create_dto->state_id);
        billing_profile_create_dto->state_id = NULL;
    }
    if (billing_profile_create_dto->city_id) {
        free(billing_profile_create_dto->city_id);
        billing_profile_create_dto->city_id = NULL;
    }
    if (billing_profile_create_dto->fiscal_identification_type_id) {
        free(billing_profile_create_dto->fiscal_identification_type_id);
        billing_profile_create_dto->fiscal_identification_type_id = NULL;
    }
    if (billing_profile_create_dto->fiscal_authority_id) {
        free(billing_profile_create_dto->fiscal_authority_id);
        billing_profile_create_dto->fiscal_authority_id = NULL;
    }
    if (billing_profile_create_dto->fiscal_regime_id) {
        free(billing_profile_create_dto->fiscal_regime_id);
        billing_profile_create_dto->fiscal_regime_id = NULL;
    }
    free(billing_profile_create_dto);
}

cJSON *billing_profile_create_dto_convertToJSON(billing_profile_create_dto_t *billing_profile_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // billing_profile_create_dto->id
    if(billing_profile_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", billing_profile_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_create_dto->timestamp
    if(billing_profile_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", billing_profile_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // billing_profile_create_dto->contact_id
    if(billing_profile_create_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", billing_profile_create_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_create_dto->tax_id
    if (!billing_profile_create_dto->tax_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "taxId", billing_profile_create_dto->tax_id) == NULL) {
    goto fail; //String
    }


    // billing_profile_create_dto->phone
    if (!billing_profile_create_dto->phone) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "phone", billing_profile_create_dto->phone) == NULL) {
    goto fail; //String
    }


    // billing_profile_create_dto->email
    if (!billing_profile_create_dto->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", billing_profile_create_dto->email) == NULL) {
    goto fail; //String
    }


    // billing_profile_create_dto->address
    if (!billing_profile_create_dto->address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "address", billing_profile_create_dto->address) == NULL) {
    goto fail; //String
    }


    // billing_profile_create_dto->address1
    if(billing_profile_create_dto->address1) {
    if(cJSON_AddStringToObject(item, "address1", billing_profile_create_dto->address1) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_create_dto->address2
    if(billing_profile_create_dto->address2) {
    if(cJSON_AddStringToObject(item, "address2", billing_profile_create_dto->address2) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_create_dto->postal_code
    if (!billing_profile_create_dto->postal_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "postalCode", billing_profile_create_dto->postal_code) == NULL) {
    goto fail; //String
    }


    // billing_profile_create_dto->business_name
    if (!billing_profile_create_dto->business_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessName", billing_profile_create_dto->business_name) == NULL) {
    goto fail; //String
    }


    // billing_profile_create_dto->commercial_name
    if (!billing_profile_create_dto->commercial_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "commercialName", billing_profile_create_dto->commercial_name) == NULL) {
    goto fail; //String
    }


    // billing_profile_create_dto->ticker
    if(billing_profile_create_dto->ticker) {
    if(cJSON_AddStringToObject(item, "ticker", billing_profile_create_dto->ticker) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_create_dto->duns
    if(billing_profile_create_dto->duns) {
    if(cJSON_AddStringToObject(item, "duns", billing_profile_create_dto->duns) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_create_dto->is_public_company
    if(billing_profile_create_dto->is_public_company) {
    if(cJSON_AddBoolToObject(item, "isPublicCompany", billing_profile_create_dto->is_public_company) == NULL) {
    goto fail; //Bool
    }
    }


    // billing_profile_create_dto->is_facta_customer
    if(billing_profile_create_dto->is_facta_customer) {
    if(cJSON_AddBoolToObject(item, "isFactaCustomer", billing_profile_create_dto->is_facta_customer) == NULL) {
    goto fail; //Bool
    }
    }


    // billing_profile_create_dto->country_id
    if (!billing_profile_create_dto->country_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "countryId", billing_profile_create_dto->country_id) == NULL) {
    goto fail; //String
    }


    // billing_profile_create_dto->state_id
    if (!billing_profile_create_dto->state_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "stateId", billing_profile_create_dto->state_id) == NULL) {
    goto fail; //String
    }


    // billing_profile_create_dto->city_id
    if (!billing_profile_create_dto->city_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "cityId", billing_profile_create_dto->city_id) == NULL) {
    goto fail; //String
    }


    // billing_profile_create_dto->fiscal_identification_type_id
    if (!billing_profile_create_dto->fiscal_identification_type_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fiscalIdentificationTypeId", billing_profile_create_dto->fiscal_identification_type_id) == NULL) {
    goto fail; //String
    }


    // billing_profile_create_dto->fiscal_authority_id
    if (!billing_profile_create_dto->fiscal_authority_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fiscalAuthorityId", billing_profile_create_dto->fiscal_authority_id) == NULL) {
    goto fail; //String
    }


    // billing_profile_create_dto->fiscal_regime_id
    if (!billing_profile_create_dto->fiscal_regime_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fiscalRegimeId", billing_profile_create_dto->fiscal_regime_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billing_profile_create_dto_t *billing_profile_create_dto_parseFromJSON(cJSON *billing_profile_create_dtoJSON){

    billing_profile_create_dto_t *billing_profile_create_dto_local_var = NULL;

    // billing_profile_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // billing_profile_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // billing_profile_create_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // billing_profile_create_dto->tax_id
    cJSON *tax_id = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "taxId");
    if (!tax_id) {
        goto end;
    }

    
    if(!cJSON_IsString(tax_id))
    {
    goto end; //String
    }

    // billing_profile_create_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "phone");
    if (!phone) {
        goto end;
    }

    
    if(!cJSON_IsString(phone))
    {
    goto end; //String
    }

    // billing_profile_create_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "email");
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // billing_profile_create_dto->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "address");
    if (!address) {
        goto end;
    }

    
    if(!cJSON_IsString(address))
    {
    goto end; //String
    }

    // billing_profile_create_dto->address1
    cJSON *address1 = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "address1");
    if (address1) { 
    if(!cJSON_IsString(address1) && !cJSON_IsNull(address1))
    {
    goto end; //String
    }
    }

    // billing_profile_create_dto->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "address2");
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // billing_profile_create_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "postalCode");
    if (!postal_code) {
        goto end;
    }

    
    if(!cJSON_IsString(postal_code))
    {
    goto end; //String
    }

    // billing_profile_create_dto->business_name
    cJSON *business_name = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "businessName");
    if (!business_name) {
        goto end;
    }

    
    if(!cJSON_IsString(business_name))
    {
    goto end; //String
    }

    // billing_profile_create_dto->commercial_name
    cJSON *commercial_name = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "commercialName");
    if (!commercial_name) {
        goto end;
    }

    
    if(!cJSON_IsString(commercial_name))
    {
    goto end; //String
    }

    // billing_profile_create_dto->ticker
    cJSON *ticker = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "ticker");
    if (ticker) { 
    if(!cJSON_IsString(ticker) && !cJSON_IsNull(ticker))
    {
    goto end; //String
    }
    }

    // billing_profile_create_dto->duns
    cJSON *duns = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "duns");
    if (duns) { 
    if(!cJSON_IsString(duns) && !cJSON_IsNull(duns))
    {
    goto end; //String
    }
    }

    // billing_profile_create_dto->is_public_company
    cJSON *is_public_company = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "isPublicCompany");
    if (is_public_company) { 
    if(!cJSON_IsBool(is_public_company))
    {
    goto end; //Bool
    }
    }

    // billing_profile_create_dto->is_facta_customer
    cJSON *is_facta_customer = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "isFactaCustomer");
    if (is_facta_customer) { 
    if(!cJSON_IsBool(is_facta_customer))
    {
    goto end; //Bool
    }
    }

    // billing_profile_create_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "countryId");
    if (!country_id) {
        goto end;
    }

    
    if(!cJSON_IsString(country_id))
    {
    goto end; //String
    }

    // billing_profile_create_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "stateId");
    if (!state_id) {
        goto end;
    }

    
    if(!cJSON_IsString(state_id))
    {
    goto end; //String
    }

    // billing_profile_create_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "cityId");
    if (!city_id) {
        goto end;
    }

    
    if(!cJSON_IsString(city_id))
    {
    goto end; //String
    }

    // billing_profile_create_dto->fiscal_identification_type_id
    cJSON *fiscal_identification_type_id = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "fiscalIdentificationTypeId");
    if (!fiscal_identification_type_id) {
        goto end;
    }

    
    if(!cJSON_IsString(fiscal_identification_type_id))
    {
    goto end; //String
    }

    // billing_profile_create_dto->fiscal_authority_id
    cJSON *fiscal_authority_id = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "fiscalAuthorityId");
    if (!fiscal_authority_id) {
        goto end;
    }

    
    if(!cJSON_IsString(fiscal_authority_id))
    {
    goto end; //String
    }

    // billing_profile_create_dto->fiscal_regime_id
    cJSON *fiscal_regime_id = cJSON_GetObjectItemCaseSensitive(billing_profile_create_dtoJSON, "fiscalRegimeId");
    if (!fiscal_regime_id) {
        goto end;
    }

    
    if(!cJSON_IsString(fiscal_regime_id))
    {
    goto end; //String
    }


    billing_profile_create_dto_local_var = billing_profile_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        strdup(tax_id->valuestring),
        strdup(phone->valuestring),
        strdup(email->valuestring),
        strdup(address->valuestring),
        address1 && !cJSON_IsNull(address1) ? strdup(address1->valuestring) : NULL,
        address2 && !cJSON_IsNull(address2) ? strdup(address2->valuestring) : NULL,
        strdup(postal_code->valuestring),
        strdup(business_name->valuestring),
        strdup(commercial_name->valuestring),
        ticker && !cJSON_IsNull(ticker) ? strdup(ticker->valuestring) : NULL,
        duns && !cJSON_IsNull(duns) ? strdup(duns->valuestring) : NULL,
        is_public_company ? is_public_company->valueint : 0,
        is_facta_customer ? is_facta_customer->valueint : 0,
        strdup(country_id->valuestring),
        strdup(state_id->valuestring),
        strdup(city_id->valuestring),
        strdup(fiscal_identification_type_id->valuestring),
        strdup(fiscal_authority_id->valuestring),
        strdup(fiscal_regime_id->valuestring)
        );

    return billing_profile_create_dto_local_var;
end:
    return NULL;

}
