#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billing_profile_dto.h"


char* billing_profile_dto_tax_payer_type_ToString(accountingservice_billing_profile_dto_TAXPAYERTYPE_e tax_payer_type) {
    char* tax_payer_typeArray[] =  { "NULL", "Individual", "Business" };
    return tax_payer_typeArray[tax_payer_type];
}

accountingservice_billing_profile_dto_TAXPAYERTYPE_e billing_profile_dto_tax_payer_type_FromString(char* tax_payer_type){
    int stringToReturn = 0;
    char *tax_payer_typeArray[] =  { "NULL", "Individual", "Business" };
    size_t sizeofArray = sizeof(tax_payer_typeArray) / sizeof(tax_payer_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(tax_payer_type, tax_payer_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

billing_profile_dto_t *billing_profile_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *contact_id,
    char *enrollment_id,
    char *about,
    int verified,
    int submitted,
    char *avatar_url,
    char *qualified_name,
    char *verification_timestamp,
    char *data,
    char *data_label,
    char *data1,
    char *data1_label,
    char *data2,
    char *data2_label,
    char *data3,
    char *data3_label,
    char *data4,
    char *data4_label,
    char *data5,
    char *data5_label,
    char *data6,
    char *data6_label,
    char *data7,
    char *data7_label,
    char *data8,
    char *data8_label,
    char *data9,
    char *data9_label,
    char *tax_id,
    char *email,
    char *phone,
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
    accountingservice_billing_profile_dto_TAXPAYERTYPE_e tax_payer_type,
    char *country_id,
    char *state_id,
    char *city_id,
    char *fiscal_identification_type_id,
    char *fiscal_authority_id,
    char *fiscal_regime_id,
    char *contact_name,
    char *fiscal_authority_name,
    char *country_name
    ) {
    billing_profile_dto_t *billing_profile_dto_local_var = malloc(sizeof(billing_profile_dto_t));
    if (!billing_profile_dto_local_var) {
        return NULL;
    }
    billing_profile_dto_local_var->id = id;
    billing_profile_dto_local_var->timestamp = timestamp;
    billing_profile_dto_local_var->tenant_id = tenant_id;
    billing_profile_dto_local_var->contact_id = contact_id;
    billing_profile_dto_local_var->enrollment_id = enrollment_id;
    billing_profile_dto_local_var->about = about;
    billing_profile_dto_local_var->verified = verified;
    billing_profile_dto_local_var->submitted = submitted;
    billing_profile_dto_local_var->avatar_url = avatar_url;
    billing_profile_dto_local_var->qualified_name = qualified_name;
    billing_profile_dto_local_var->verification_timestamp = verification_timestamp;
    billing_profile_dto_local_var->data = data;
    billing_profile_dto_local_var->data_label = data_label;
    billing_profile_dto_local_var->data1 = data1;
    billing_profile_dto_local_var->data1_label = data1_label;
    billing_profile_dto_local_var->data2 = data2;
    billing_profile_dto_local_var->data2_label = data2_label;
    billing_profile_dto_local_var->data3 = data3;
    billing_profile_dto_local_var->data3_label = data3_label;
    billing_profile_dto_local_var->data4 = data4;
    billing_profile_dto_local_var->data4_label = data4_label;
    billing_profile_dto_local_var->data5 = data5;
    billing_profile_dto_local_var->data5_label = data5_label;
    billing_profile_dto_local_var->data6 = data6;
    billing_profile_dto_local_var->data6_label = data6_label;
    billing_profile_dto_local_var->data7 = data7;
    billing_profile_dto_local_var->data7_label = data7_label;
    billing_profile_dto_local_var->data8 = data8;
    billing_profile_dto_local_var->data8_label = data8_label;
    billing_profile_dto_local_var->data9 = data9;
    billing_profile_dto_local_var->data9_label = data9_label;
    billing_profile_dto_local_var->tax_id = tax_id;
    billing_profile_dto_local_var->email = email;
    billing_profile_dto_local_var->phone = phone;
    billing_profile_dto_local_var->address = address;
    billing_profile_dto_local_var->address1 = address1;
    billing_profile_dto_local_var->address2 = address2;
    billing_profile_dto_local_var->postal_code = postal_code;
    billing_profile_dto_local_var->business_name = business_name;
    billing_profile_dto_local_var->commercial_name = commercial_name;
    billing_profile_dto_local_var->ticker = ticker;
    billing_profile_dto_local_var->duns = duns;
    billing_profile_dto_local_var->is_public_company = is_public_company;
    billing_profile_dto_local_var->is_facta_customer = is_facta_customer;
    billing_profile_dto_local_var->tax_payer_type = tax_payer_type;
    billing_profile_dto_local_var->country_id = country_id;
    billing_profile_dto_local_var->state_id = state_id;
    billing_profile_dto_local_var->city_id = city_id;
    billing_profile_dto_local_var->fiscal_identification_type_id = fiscal_identification_type_id;
    billing_profile_dto_local_var->fiscal_authority_id = fiscal_authority_id;
    billing_profile_dto_local_var->fiscal_regime_id = fiscal_regime_id;
    billing_profile_dto_local_var->contact_name = contact_name;
    billing_profile_dto_local_var->fiscal_authority_name = fiscal_authority_name;
    billing_profile_dto_local_var->country_name = country_name;

    return billing_profile_dto_local_var;
}


void billing_profile_dto_free(billing_profile_dto_t *billing_profile_dto) {
    if(NULL == billing_profile_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (billing_profile_dto->id) {
        free(billing_profile_dto->id);
        billing_profile_dto->id = NULL;
    }
    if (billing_profile_dto->timestamp) {
        free(billing_profile_dto->timestamp);
        billing_profile_dto->timestamp = NULL;
    }
    if (billing_profile_dto->tenant_id) {
        free(billing_profile_dto->tenant_id);
        billing_profile_dto->tenant_id = NULL;
    }
    if (billing_profile_dto->contact_id) {
        free(billing_profile_dto->contact_id);
        billing_profile_dto->contact_id = NULL;
    }
    if (billing_profile_dto->enrollment_id) {
        free(billing_profile_dto->enrollment_id);
        billing_profile_dto->enrollment_id = NULL;
    }
    if (billing_profile_dto->about) {
        free(billing_profile_dto->about);
        billing_profile_dto->about = NULL;
    }
    if (billing_profile_dto->avatar_url) {
        free(billing_profile_dto->avatar_url);
        billing_profile_dto->avatar_url = NULL;
    }
    if (billing_profile_dto->qualified_name) {
        free(billing_profile_dto->qualified_name);
        billing_profile_dto->qualified_name = NULL;
    }
    if (billing_profile_dto->verification_timestamp) {
        free(billing_profile_dto->verification_timestamp);
        billing_profile_dto->verification_timestamp = NULL;
    }
    if (billing_profile_dto->data) {
        free(billing_profile_dto->data);
        billing_profile_dto->data = NULL;
    }
    if (billing_profile_dto->data_label) {
        free(billing_profile_dto->data_label);
        billing_profile_dto->data_label = NULL;
    }
    if (billing_profile_dto->data1) {
        free(billing_profile_dto->data1);
        billing_profile_dto->data1 = NULL;
    }
    if (billing_profile_dto->data1_label) {
        free(billing_profile_dto->data1_label);
        billing_profile_dto->data1_label = NULL;
    }
    if (billing_profile_dto->data2) {
        free(billing_profile_dto->data2);
        billing_profile_dto->data2 = NULL;
    }
    if (billing_profile_dto->data2_label) {
        free(billing_profile_dto->data2_label);
        billing_profile_dto->data2_label = NULL;
    }
    if (billing_profile_dto->data3) {
        free(billing_profile_dto->data3);
        billing_profile_dto->data3 = NULL;
    }
    if (billing_profile_dto->data3_label) {
        free(billing_profile_dto->data3_label);
        billing_profile_dto->data3_label = NULL;
    }
    if (billing_profile_dto->data4) {
        free(billing_profile_dto->data4);
        billing_profile_dto->data4 = NULL;
    }
    if (billing_profile_dto->data4_label) {
        free(billing_profile_dto->data4_label);
        billing_profile_dto->data4_label = NULL;
    }
    if (billing_profile_dto->data5) {
        free(billing_profile_dto->data5);
        billing_profile_dto->data5 = NULL;
    }
    if (billing_profile_dto->data5_label) {
        free(billing_profile_dto->data5_label);
        billing_profile_dto->data5_label = NULL;
    }
    if (billing_profile_dto->data6) {
        free(billing_profile_dto->data6);
        billing_profile_dto->data6 = NULL;
    }
    if (billing_profile_dto->data6_label) {
        free(billing_profile_dto->data6_label);
        billing_profile_dto->data6_label = NULL;
    }
    if (billing_profile_dto->data7) {
        free(billing_profile_dto->data7);
        billing_profile_dto->data7 = NULL;
    }
    if (billing_profile_dto->data7_label) {
        free(billing_profile_dto->data7_label);
        billing_profile_dto->data7_label = NULL;
    }
    if (billing_profile_dto->data8) {
        free(billing_profile_dto->data8);
        billing_profile_dto->data8 = NULL;
    }
    if (billing_profile_dto->data8_label) {
        free(billing_profile_dto->data8_label);
        billing_profile_dto->data8_label = NULL;
    }
    if (billing_profile_dto->data9) {
        free(billing_profile_dto->data9);
        billing_profile_dto->data9 = NULL;
    }
    if (billing_profile_dto->data9_label) {
        free(billing_profile_dto->data9_label);
        billing_profile_dto->data9_label = NULL;
    }
    if (billing_profile_dto->tax_id) {
        free(billing_profile_dto->tax_id);
        billing_profile_dto->tax_id = NULL;
    }
    if (billing_profile_dto->email) {
        free(billing_profile_dto->email);
        billing_profile_dto->email = NULL;
    }
    if (billing_profile_dto->phone) {
        free(billing_profile_dto->phone);
        billing_profile_dto->phone = NULL;
    }
    if (billing_profile_dto->address) {
        free(billing_profile_dto->address);
        billing_profile_dto->address = NULL;
    }
    if (billing_profile_dto->address1) {
        free(billing_profile_dto->address1);
        billing_profile_dto->address1 = NULL;
    }
    if (billing_profile_dto->address2) {
        free(billing_profile_dto->address2);
        billing_profile_dto->address2 = NULL;
    }
    if (billing_profile_dto->postal_code) {
        free(billing_profile_dto->postal_code);
        billing_profile_dto->postal_code = NULL;
    }
    if (billing_profile_dto->business_name) {
        free(billing_profile_dto->business_name);
        billing_profile_dto->business_name = NULL;
    }
    if (billing_profile_dto->commercial_name) {
        free(billing_profile_dto->commercial_name);
        billing_profile_dto->commercial_name = NULL;
    }
    if (billing_profile_dto->ticker) {
        free(billing_profile_dto->ticker);
        billing_profile_dto->ticker = NULL;
    }
    if (billing_profile_dto->duns) {
        free(billing_profile_dto->duns);
        billing_profile_dto->duns = NULL;
    }
    if (billing_profile_dto->country_id) {
        free(billing_profile_dto->country_id);
        billing_profile_dto->country_id = NULL;
    }
    if (billing_profile_dto->state_id) {
        free(billing_profile_dto->state_id);
        billing_profile_dto->state_id = NULL;
    }
    if (billing_profile_dto->city_id) {
        free(billing_profile_dto->city_id);
        billing_profile_dto->city_id = NULL;
    }
    if (billing_profile_dto->fiscal_identification_type_id) {
        free(billing_profile_dto->fiscal_identification_type_id);
        billing_profile_dto->fiscal_identification_type_id = NULL;
    }
    if (billing_profile_dto->fiscal_authority_id) {
        free(billing_profile_dto->fiscal_authority_id);
        billing_profile_dto->fiscal_authority_id = NULL;
    }
    if (billing_profile_dto->fiscal_regime_id) {
        free(billing_profile_dto->fiscal_regime_id);
        billing_profile_dto->fiscal_regime_id = NULL;
    }
    if (billing_profile_dto->contact_name) {
        free(billing_profile_dto->contact_name);
        billing_profile_dto->contact_name = NULL;
    }
    if (billing_profile_dto->fiscal_authority_name) {
        free(billing_profile_dto->fiscal_authority_name);
        billing_profile_dto->fiscal_authority_name = NULL;
    }
    if (billing_profile_dto->country_name) {
        free(billing_profile_dto->country_name);
        billing_profile_dto->country_name = NULL;
    }
    free(billing_profile_dto);
}

cJSON *billing_profile_dto_convertToJSON(billing_profile_dto_t *billing_profile_dto) {
    cJSON *item = cJSON_CreateObject();

    // billing_profile_dto->id
    if(billing_profile_dto->id) {
    if(cJSON_AddStringToObject(item, "id", billing_profile_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->timestamp
    if(billing_profile_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", billing_profile_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // billing_profile_dto->tenant_id
    if(billing_profile_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", billing_profile_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->contact_id
    if(billing_profile_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", billing_profile_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->enrollment_id
    if(billing_profile_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", billing_profile_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->about
    if(billing_profile_dto->about) {
    if(cJSON_AddStringToObject(item, "about", billing_profile_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->verified
    if(billing_profile_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", billing_profile_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // billing_profile_dto->submitted
    if(billing_profile_dto->submitted) {
    if(cJSON_AddBoolToObject(item, "submitted", billing_profile_dto->submitted) == NULL) {
    goto fail; //Bool
    }
    }


    // billing_profile_dto->avatar_url
    if(billing_profile_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarUrl", billing_profile_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->qualified_name
    if(billing_profile_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", billing_profile_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->verification_timestamp
    if(billing_profile_dto->verification_timestamp) {
    if(cJSON_AddStringToObject(item, "verificationTimestamp", billing_profile_dto->verification_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // billing_profile_dto->data
    if(billing_profile_dto->data) {
    if(cJSON_AddStringToObject(item, "data", billing_profile_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data_label
    if(billing_profile_dto->data_label) {
    if(cJSON_AddStringToObject(item, "dataLabel", billing_profile_dto->data_label) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data1
    if(billing_profile_dto->data1) {
    if(cJSON_AddStringToObject(item, "data1", billing_profile_dto->data1) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data1_label
    if(billing_profile_dto->data1_label) {
    if(cJSON_AddStringToObject(item, "data1Label", billing_profile_dto->data1_label) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data2
    if(billing_profile_dto->data2) {
    if(cJSON_AddStringToObject(item, "data2", billing_profile_dto->data2) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data2_label
    if(billing_profile_dto->data2_label) {
    if(cJSON_AddStringToObject(item, "data2Label", billing_profile_dto->data2_label) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data3
    if(billing_profile_dto->data3) {
    if(cJSON_AddStringToObject(item, "data3", billing_profile_dto->data3) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data3_label
    if(billing_profile_dto->data3_label) {
    if(cJSON_AddStringToObject(item, "data3Label", billing_profile_dto->data3_label) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data4
    if(billing_profile_dto->data4) {
    if(cJSON_AddStringToObject(item, "data4", billing_profile_dto->data4) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data4_label
    if(billing_profile_dto->data4_label) {
    if(cJSON_AddStringToObject(item, "data4Label", billing_profile_dto->data4_label) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data5
    if(billing_profile_dto->data5) {
    if(cJSON_AddStringToObject(item, "data5", billing_profile_dto->data5) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data5_label
    if(billing_profile_dto->data5_label) {
    if(cJSON_AddStringToObject(item, "data5Label", billing_profile_dto->data5_label) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data6
    if(billing_profile_dto->data6) {
    if(cJSON_AddStringToObject(item, "data6", billing_profile_dto->data6) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data6_label
    if(billing_profile_dto->data6_label) {
    if(cJSON_AddStringToObject(item, "data6Label", billing_profile_dto->data6_label) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data7
    if(billing_profile_dto->data7) {
    if(cJSON_AddStringToObject(item, "data7", billing_profile_dto->data7) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data7_label
    if(billing_profile_dto->data7_label) {
    if(cJSON_AddStringToObject(item, "data7Label", billing_profile_dto->data7_label) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data8
    if(billing_profile_dto->data8) {
    if(cJSON_AddStringToObject(item, "data8", billing_profile_dto->data8) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data8_label
    if(billing_profile_dto->data8_label) {
    if(cJSON_AddStringToObject(item, "data8Label", billing_profile_dto->data8_label) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data9
    if(billing_profile_dto->data9) {
    if(cJSON_AddStringToObject(item, "data9", billing_profile_dto->data9) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->data9_label
    if(billing_profile_dto->data9_label) {
    if(cJSON_AddStringToObject(item, "data9Label", billing_profile_dto->data9_label) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->tax_id
    if (!billing_profile_dto->tax_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "taxId", billing_profile_dto->tax_id) == NULL) {
    goto fail; //String
    }


    // billing_profile_dto->email
    if (!billing_profile_dto->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", billing_profile_dto->email) == NULL) {
    goto fail; //String
    }


    // billing_profile_dto->phone
    if(billing_profile_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", billing_profile_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->address
    if(billing_profile_dto->address) {
    if(cJSON_AddStringToObject(item, "address", billing_profile_dto->address) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->address1
    if(billing_profile_dto->address1) {
    if(cJSON_AddStringToObject(item, "address1", billing_profile_dto->address1) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->address2
    if(billing_profile_dto->address2) {
    if(cJSON_AddStringToObject(item, "address2", billing_profile_dto->address2) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->postal_code
    if(billing_profile_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", billing_profile_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->business_name
    if(billing_profile_dto->business_name) {
    if(cJSON_AddStringToObject(item, "businessName", billing_profile_dto->business_name) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->commercial_name
    if(billing_profile_dto->commercial_name) {
    if(cJSON_AddStringToObject(item, "commercialName", billing_profile_dto->commercial_name) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->ticker
    if(billing_profile_dto->ticker) {
    if(cJSON_AddStringToObject(item, "ticker", billing_profile_dto->ticker) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->duns
    if(billing_profile_dto->duns) {
    if(cJSON_AddStringToObject(item, "duns", billing_profile_dto->duns) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->is_public_company
    if(billing_profile_dto->is_public_company) {
    if(cJSON_AddBoolToObject(item, "isPublicCompany", billing_profile_dto->is_public_company) == NULL) {
    goto fail; //Bool
    }
    }


    // billing_profile_dto->is_facta_customer
    if(billing_profile_dto->is_facta_customer) {
    if(cJSON_AddBoolToObject(item, "isFactaCustomer", billing_profile_dto->is_facta_customer) == NULL) {
    goto fail; //Bool
    }
    }


    // billing_profile_dto->tax_payer_type
    if(billing_profile_dto->tax_payer_type != accountingservice_billing_profile_dto_TAXPAYERTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "taxPayerType", tax_payer_typebilling_profile_dto_ToString(billing_profile_dto->tax_payer_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // billing_profile_dto->country_id
    if (!billing_profile_dto->country_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "countryId", billing_profile_dto->country_id) == NULL) {
    goto fail; //String
    }


    // billing_profile_dto->state_id
    if(billing_profile_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", billing_profile_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->city_id
    if(billing_profile_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", billing_profile_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->fiscal_identification_type_id
    if(billing_profile_dto->fiscal_identification_type_id) {
    if(cJSON_AddStringToObject(item, "fiscalIdentificationTypeId", billing_profile_dto->fiscal_identification_type_id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->fiscal_authority_id
    if(billing_profile_dto->fiscal_authority_id) {
    if(cJSON_AddStringToObject(item, "fiscalAuthorityId", billing_profile_dto->fiscal_authority_id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->fiscal_regime_id
    if(billing_profile_dto->fiscal_regime_id) {
    if(cJSON_AddStringToObject(item, "fiscalRegimeId", billing_profile_dto->fiscal_regime_id) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->contact_name
    if(billing_profile_dto->contact_name) {
    if(cJSON_AddStringToObject(item, "contactName", billing_profile_dto->contact_name) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->fiscal_authority_name
    if(billing_profile_dto->fiscal_authority_name) {
    if(cJSON_AddStringToObject(item, "fiscalAuthorityName", billing_profile_dto->fiscal_authority_name) == NULL) {
    goto fail; //String
    }
    }


    // billing_profile_dto->country_name
    if(billing_profile_dto->country_name) {
    if(cJSON_AddStringToObject(item, "countryName", billing_profile_dto->country_name) == NULL) {
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

billing_profile_dto_t *billing_profile_dto_parseFromJSON(cJSON *billing_profile_dtoJSON){

    billing_profile_dto_t *billing_profile_dto_local_var = NULL;

    // billing_profile_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // billing_profile_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // billing_profile_dto->submitted
    cJSON *submitted = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "submitted");
    if (submitted) { 
    if(!cJSON_IsBool(submitted))
    {
    goto end; //Bool
    }
    }

    // billing_profile_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "avatarUrl");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->verification_timestamp
    cJSON *verification_timestamp = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "verificationTimestamp");
    if (verification_timestamp) { 
    if(!cJSON_IsString(verification_timestamp) && !cJSON_IsNull(verification_timestamp))
    {
    goto end; //DateTime
    }
    }

    // billing_profile_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data_label
    cJSON *data_label = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "dataLabel");
    if (data_label) { 
    if(!cJSON_IsString(data_label) && !cJSON_IsNull(data_label))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data1
    cJSON *data1 = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data1");
    if (data1) { 
    if(!cJSON_IsString(data1) && !cJSON_IsNull(data1))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data1_label
    cJSON *data1_label = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data1Label");
    if (data1_label) { 
    if(!cJSON_IsString(data1_label) && !cJSON_IsNull(data1_label))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data2
    cJSON *data2 = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data2");
    if (data2) { 
    if(!cJSON_IsString(data2) && !cJSON_IsNull(data2))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data2_label
    cJSON *data2_label = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data2Label");
    if (data2_label) { 
    if(!cJSON_IsString(data2_label) && !cJSON_IsNull(data2_label))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data3
    cJSON *data3 = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data3");
    if (data3) { 
    if(!cJSON_IsString(data3) && !cJSON_IsNull(data3))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data3_label
    cJSON *data3_label = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data3Label");
    if (data3_label) { 
    if(!cJSON_IsString(data3_label) && !cJSON_IsNull(data3_label))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data4
    cJSON *data4 = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data4");
    if (data4) { 
    if(!cJSON_IsString(data4) && !cJSON_IsNull(data4))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data4_label
    cJSON *data4_label = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data4Label");
    if (data4_label) { 
    if(!cJSON_IsString(data4_label) && !cJSON_IsNull(data4_label))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data5
    cJSON *data5 = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data5");
    if (data5) { 
    if(!cJSON_IsString(data5) && !cJSON_IsNull(data5))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data5_label
    cJSON *data5_label = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data5Label");
    if (data5_label) { 
    if(!cJSON_IsString(data5_label) && !cJSON_IsNull(data5_label))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data6
    cJSON *data6 = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data6");
    if (data6) { 
    if(!cJSON_IsString(data6) && !cJSON_IsNull(data6))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data6_label
    cJSON *data6_label = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data6Label");
    if (data6_label) { 
    if(!cJSON_IsString(data6_label) && !cJSON_IsNull(data6_label))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data7
    cJSON *data7 = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data7");
    if (data7) { 
    if(!cJSON_IsString(data7) && !cJSON_IsNull(data7))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data7_label
    cJSON *data7_label = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data7Label");
    if (data7_label) { 
    if(!cJSON_IsString(data7_label) && !cJSON_IsNull(data7_label))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data8
    cJSON *data8 = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data8");
    if (data8) { 
    if(!cJSON_IsString(data8) && !cJSON_IsNull(data8))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data8_label
    cJSON *data8_label = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data8Label");
    if (data8_label) { 
    if(!cJSON_IsString(data8_label) && !cJSON_IsNull(data8_label))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data9
    cJSON *data9 = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data9");
    if (data9) { 
    if(!cJSON_IsString(data9) && !cJSON_IsNull(data9))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->data9_label
    cJSON *data9_label = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "data9Label");
    if (data9_label) { 
    if(!cJSON_IsString(data9_label) && !cJSON_IsNull(data9_label))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->tax_id
    cJSON *tax_id = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "taxId");
    if (!tax_id) {
        goto end;
    }

    
    if(!cJSON_IsString(tax_id))
    {
    goto end; //String
    }

    // billing_profile_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "email");
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // billing_profile_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "address");
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->address1
    cJSON *address1 = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "address1");
    if (address1) { 
    if(!cJSON_IsString(address1) && !cJSON_IsNull(address1))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "address2");
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->business_name
    cJSON *business_name = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "businessName");
    if (business_name) { 
    if(!cJSON_IsString(business_name) && !cJSON_IsNull(business_name))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->commercial_name
    cJSON *commercial_name = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "commercialName");
    if (commercial_name) { 
    if(!cJSON_IsString(commercial_name) && !cJSON_IsNull(commercial_name))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->ticker
    cJSON *ticker = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "ticker");
    if (ticker) { 
    if(!cJSON_IsString(ticker) && !cJSON_IsNull(ticker))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->duns
    cJSON *duns = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "duns");
    if (duns) { 
    if(!cJSON_IsString(duns) && !cJSON_IsNull(duns))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->is_public_company
    cJSON *is_public_company = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "isPublicCompany");
    if (is_public_company) { 
    if(!cJSON_IsBool(is_public_company))
    {
    goto end; //Bool
    }
    }

    // billing_profile_dto->is_facta_customer
    cJSON *is_facta_customer = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "isFactaCustomer");
    if (is_facta_customer) { 
    if(!cJSON_IsBool(is_facta_customer))
    {
    goto end; //Bool
    }
    }

    // billing_profile_dto->tax_payer_type
    cJSON *tax_payer_type = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "taxPayerType");
    accountingservice_billing_profile_dto_TAXPAYERTYPE_e tax_payer_typeVariable;
    if (tax_payer_type) { 
    if(!cJSON_IsString(tax_payer_type))
    {
    goto end; //Enum
    }
    tax_payer_typeVariable = billing_profile_dto_tax_payer_type_FromString(tax_payer_type->valuestring);
    }

    // billing_profile_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "countryId");
    if (!country_id) {
        goto end;
    }

    
    if(!cJSON_IsString(country_id))
    {
    goto end; //String
    }

    // billing_profile_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->fiscal_identification_type_id
    cJSON *fiscal_identification_type_id = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "fiscalIdentificationTypeId");
    if (fiscal_identification_type_id) { 
    if(!cJSON_IsString(fiscal_identification_type_id) && !cJSON_IsNull(fiscal_identification_type_id))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->fiscal_authority_id
    cJSON *fiscal_authority_id = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "fiscalAuthorityId");
    if (fiscal_authority_id) { 
    if(!cJSON_IsString(fiscal_authority_id) && !cJSON_IsNull(fiscal_authority_id))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->fiscal_regime_id
    cJSON *fiscal_regime_id = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "fiscalRegimeId");
    if (fiscal_regime_id) { 
    if(!cJSON_IsString(fiscal_regime_id) && !cJSON_IsNull(fiscal_regime_id))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->contact_name
    cJSON *contact_name = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "contactName");
    if (contact_name) { 
    if(!cJSON_IsString(contact_name) && !cJSON_IsNull(contact_name))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->fiscal_authority_name
    cJSON *fiscal_authority_name = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "fiscalAuthorityName");
    if (fiscal_authority_name) { 
    if(!cJSON_IsString(fiscal_authority_name) && !cJSON_IsNull(fiscal_authority_name))
    {
    goto end; //String
    }
    }

    // billing_profile_dto->country_name
    cJSON *country_name = cJSON_GetObjectItemCaseSensitive(billing_profile_dtoJSON, "countryName");
    if (country_name) { 
    if(!cJSON_IsString(country_name) && !cJSON_IsNull(country_name))
    {
    goto end; //String
    }
    }


    billing_profile_dto_local_var = billing_profile_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        verified ? verified->valueint : 0,
        submitted ? submitted->valueint : 0,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        verification_timestamp && !cJSON_IsNull(verification_timestamp) ? strdup(verification_timestamp->valuestring) : NULL,
        data && !cJSON_IsNull(data) ? strdup(data->valuestring) : NULL,
        data_label && !cJSON_IsNull(data_label) ? strdup(data_label->valuestring) : NULL,
        data1 && !cJSON_IsNull(data1) ? strdup(data1->valuestring) : NULL,
        data1_label && !cJSON_IsNull(data1_label) ? strdup(data1_label->valuestring) : NULL,
        data2 && !cJSON_IsNull(data2) ? strdup(data2->valuestring) : NULL,
        data2_label && !cJSON_IsNull(data2_label) ? strdup(data2_label->valuestring) : NULL,
        data3 && !cJSON_IsNull(data3) ? strdup(data3->valuestring) : NULL,
        data3_label && !cJSON_IsNull(data3_label) ? strdup(data3_label->valuestring) : NULL,
        data4 && !cJSON_IsNull(data4) ? strdup(data4->valuestring) : NULL,
        data4_label && !cJSON_IsNull(data4_label) ? strdup(data4_label->valuestring) : NULL,
        data5 && !cJSON_IsNull(data5) ? strdup(data5->valuestring) : NULL,
        data5_label && !cJSON_IsNull(data5_label) ? strdup(data5_label->valuestring) : NULL,
        data6 && !cJSON_IsNull(data6) ? strdup(data6->valuestring) : NULL,
        data6_label && !cJSON_IsNull(data6_label) ? strdup(data6_label->valuestring) : NULL,
        data7 && !cJSON_IsNull(data7) ? strdup(data7->valuestring) : NULL,
        data7_label && !cJSON_IsNull(data7_label) ? strdup(data7_label->valuestring) : NULL,
        data8 && !cJSON_IsNull(data8) ? strdup(data8->valuestring) : NULL,
        data8_label && !cJSON_IsNull(data8_label) ? strdup(data8_label->valuestring) : NULL,
        data9 && !cJSON_IsNull(data9) ? strdup(data9->valuestring) : NULL,
        data9_label && !cJSON_IsNull(data9_label) ? strdup(data9_label->valuestring) : NULL,
        strdup(tax_id->valuestring),
        strdup(email->valuestring),
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        address && !cJSON_IsNull(address) ? strdup(address->valuestring) : NULL,
        address1 && !cJSON_IsNull(address1) ? strdup(address1->valuestring) : NULL,
        address2 && !cJSON_IsNull(address2) ? strdup(address2->valuestring) : NULL,
        postal_code && !cJSON_IsNull(postal_code) ? strdup(postal_code->valuestring) : NULL,
        business_name && !cJSON_IsNull(business_name) ? strdup(business_name->valuestring) : NULL,
        commercial_name && !cJSON_IsNull(commercial_name) ? strdup(commercial_name->valuestring) : NULL,
        ticker && !cJSON_IsNull(ticker) ? strdup(ticker->valuestring) : NULL,
        duns && !cJSON_IsNull(duns) ? strdup(duns->valuestring) : NULL,
        is_public_company ? is_public_company->valueint : 0,
        is_facta_customer ? is_facta_customer->valueint : 0,
        tax_payer_type ? tax_payer_typeVariable : accountingservice_billing_profile_dto_TAXPAYERTYPE_NULL,
        strdup(country_id->valuestring),
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        fiscal_identification_type_id && !cJSON_IsNull(fiscal_identification_type_id) ? strdup(fiscal_identification_type_id->valuestring) : NULL,
        fiscal_authority_id && !cJSON_IsNull(fiscal_authority_id) ? strdup(fiscal_authority_id->valuestring) : NULL,
        fiscal_regime_id && !cJSON_IsNull(fiscal_regime_id) ? strdup(fiscal_regime_id->valuestring) : NULL,
        contact_name && !cJSON_IsNull(contact_name) ? strdup(contact_name->valuestring) : NULL,
        fiscal_authority_name && !cJSON_IsNull(fiscal_authority_name) ? strdup(fiscal_authority_name->valuestring) : NULL,
        country_name && !cJSON_IsNull(country_name) ? strdup(country_name->valuestring) : NULL
        );

    return billing_profile_dto_local_var;
end:
    return NULL;

}
