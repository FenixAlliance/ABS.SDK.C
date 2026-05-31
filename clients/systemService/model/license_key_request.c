#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_key_request.h"


char* license_key_request_license_type_ToString(systemservice_license_key_request_LICENSETYPE_e license_type) {
    char* license_typeArray[] =  { "NULL", "Trial", "Standard", "Enterprise" };
    return license_typeArray[license_type];
}

systemservice_license_key_request_LICENSETYPE_e license_key_request_license_type_FromString(char* license_type){
    int stringToReturn = 0;
    char *license_typeArray[] =  { "NULL", "Trial", "Standard", "Enterprise" };
    size_t sizeofArray = sizeof(license_typeArray) / sizeof(license_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(license_type, license_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

license_key_request_t *license_key_request_create(
    char *user_id,
    char *tenant_id,
    char *order_id,
    char *payment_id,
    char *invoice_id,
    char *enrollment_id,
    char *entitlement_id,
    int seats,
    systemservice_license_key_request_LICENSETYPE_e license_type,
    char *expiration_date,
    list_t *features,
    list_t *additional_attributes
    ) {
    license_key_request_t *license_key_request_local_var = malloc(sizeof(license_key_request_t));
    if (!license_key_request_local_var) {
        return NULL;
    }
    license_key_request_local_var->user_id = user_id;
    license_key_request_local_var->tenant_id = tenant_id;
    license_key_request_local_var->order_id = order_id;
    license_key_request_local_var->payment_id = payment_id;
    license_key_request_local_var->invoice_id = invoice_id;
    license_key_request_local_var->enrollment_id = enrollment_id;
    license_key_request_local_var->entitlement_id = entitlement_id;
    license_key_request_local_var->seats = seats;
    license_key_request_local_var->license_type = license_type;
    license_key_request_local_var->expiration_date = expiration_date;
    license_key_request_local_var->features = features;
    license_key_request_local_var->additional_attributes = additional_attributes;

    return license_key_request_local_var;
}


void license_key_request_free(license_key_request_t *license_key_request) {
    if(NULL == license_key_request){
        return ;
    }
    listEntry_t *listEntry;
    if (license_key_request->user_id) {
        free(license_key_request->user_id);
        license_key_request->user_id = NULL;
    }
    if (license_key_request->tenant_id) {
        free(license_key_request->tenant_id);
        license_key_request->tenant_id = NULL;
    }
    if (license_key_request->order_id) {
        free(license_key_request->order_id);
        license_key_request->order_id = NULL;
    }
    if (license_key_request->payment_id) {
        free(license_key_request->payment_id);
        license_key_request->payment_id = NULL;
    }
    if (license_key_request->invoice_id) {
        free(license_key_request->invoice_id);
        license_key_request->invoice_id = NULL;
    }
    if (license_key_request->enrollment_id) {
        free(license_key_request->enrollment_id);
        license_key_request->enrollment_id = NULL;
    }
    if (license_key_request->entitlement_id) {
        free(license_key_request->entitlement_id);
        license_key_request->entitlement_id = NULL;
    }
    if (license_key_request->expiration_date) {
        free(license_key_request->expiration_date);
        license_key_request->expiration_date = NULL;
    }
    if (license_key_request->features) {
        list_ForEach(listEntry, license_key_request->features) {
            license_feature_free(listEntry->data);
        }
        list_freeList(license_key_request->features);
        license_key_request->features = NULL;
    }
    if (license_key_request->additional_attributes) {
        list_ForEach(listEntry, license_key_request->additional_attributes) {
            additional_attribute_free(listEntry->data);
        }
        list_freeList(license_key_request->additional_attributes);
        license_key_request->additional_attributes = NULL;
    }
    free(license_key_request);
}

cJSON *license_key_request_convertToJSON(license_key_request_t *license_key_request) {
    cJSON *item = cJSON_CreateObject();

    // license_key_request->user_id
    if(license_key_request->user_id) {
    if(cJSON_AddStringToObject(item, "userId", license_key_request->user_id) == NULL) {
    goto fail; //String
    }
    }


    // license_key_request->tenant_id
    if(license_key_request->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", license_key_request->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // license_key_request->order_id
    if(license_key_request->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", license_key_request->order_id) == NULL) {
    goto fail; //String
    }
    }


    // license_key_request->payment_id
    if(license_key_request->payment_id) {
    if(cJSON_AddStringToObject(item, "paymentId", license_key_request->payment_id) == NULL) {
    goto fail; //String
    }
    }


    // license_key_request->invoice_id
    if(license_key_request->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", license_key_request->invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // license_key_request->enrollment_id
    if(license_key_request->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", license_key_request->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // license_key_request->entitlement_id
    if(license_key_request->entitlement_id) {
    if(cJSON_AddStringToObject(item, "entitlementId", license_key_request->entitlement_id) == NULL) {
    goto fail; //String
    }
    }


    // license_key_request->seats
    if(license_key_request->seats) {
    if(cJSON_AddNumberToObject(item, "seats", license_key_request->seats) == NULL) {
    goto fail; //Numeric
    }
    }


    // license_key_request->license_type
    if(license_key_request->license_type != systemservice_license_key_request_LICENSETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "licenseType", license_typelicense_key_request_ToString(license_key_request->license_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // license_key_request->expiration_date
    if(license_key_request->expiration_date) {
    if(cJSON_AddStringToObject(item, "expirationDate", license_key_request->expiration_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // license_key_request->features
    if(license_key_request->features) {
    cJSON *features = cJSON_AddArrayToObject(item, "features");
    if(features == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *featuresListEntry;
    if (license_key_request->features) {
    list_ForEach(featuresListEntry, license_key_request->features) {
    cJSON *itemLocal = license_feature_convertToJSON(featuresListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(features, itemLocal);
    }
    }
    }


    // license_key_request->additional_attributes
    if(license_key_request->additional_attributes) {
    cJSON *additional_attributes = cJSON_AddArrayToObject(item, "additionalAttributes");
    if(additional_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *additional_attributesListEntry;
    if (license_key_request->additional_attributes) {
    list_ForEach(additional_attributesListEntry, license_key_request->additional_attributes) {
    cJSON *itemLocal = additional_attribute_convertToJSON(additional_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(additional_attributes, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

license_key_request_t *license_key_request_parseFromJSON(cJSON *license_key_requestJSON){

    license_key_request_t *license_key_request_local_var = NULL;

    // define the local list for license_key_request->features
    list_t *featuresList = NULL;

    // define the local list for license_key_request->additional_attributes
    list_t *additional_attributesList = NULL;

    // license_key_request->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(license_key_requestJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // license_key_request->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(license_key_requestJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // license_key_request->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(license_key_requestJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // license_key_request->payment_id
    cJSON *payment_id = cJSON_GetObjectItemCaseSensitive(license_key_requestJSON, "paymentId");
    if (payment_id) { 
    if(!cJSON_IsString(payment_id) && !cJSON_IsNull(payment_id))
    {
    goto end; //String
    }
    }

    // license_key_request->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(license_key_requestJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }

    // license_key_request->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(license_key_requestJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // license_key_request->entitlement_id
    cJSON *entitlement_id = cJSON_GetObjectItemCaseSensitive(license_key_requestJSON, "entitlementId");
    if (entitlement_id) { 
    if(!cJSON_IsString(entitlement_id) && !cJSON_IsNull(entitlement_id))
    {
    goto end; //String
    }
    }

    // license_key_request->seats
    cJSON *seats = cJSON_GetObjectItemCaseSensitive(license_key_requestJSON, "seats");
    if (seats) { 
    if(!cJSON_IsNumber(seats))
    {
    goto end; //Numeric
    }
    }

    // license_key_request->license_type
    cJSON *license_type = cJSON_GetObjectItemCaseSensitive(license_key_requestJSON, "licenseType");
    systemservice_license_key_request_LICENSETYPE_e license_typeVariable;
    if (license_type) { 
    if(!cJSON_IsString(license_type))
    {
    goto end; //Enum
    }
    license_typeVariable = license_key_request_license_type_FromString(license_type->valuestring);
    }

    // license_key_request->expiration_date
    cJSON *expiration_date = cJSON_GetObjectItemCaseSensitive(license_key_requestJSON, "expirationDate");
    if (expiration_date) { 
    if(!cJSON_IsString(expiration_date) && !cJSON_IsNull(expiration_date))
    {
    goto end; //DateTime
    }
    }

    // license_key_request->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(license_key_requestJSON, "features");
    if (features) { 
    cJSON *features_local_nonprimitive = NULL;
    if(!cJSON_IsArray(features)){
        goto end; //nonprimitive container
    }

    featuresList = list_createList();

    cJSON_ArrayForEach(features_local_nonprimitive,features )
    {
        if(!cJSON_IsObject(features_local_nonprimitive)){
            goto end;
        }
        license_feature_t *featuresItem = license_feature_parseFromJSON(features_local_nonprimitive);

        list_addElement(featuresList, featuresItem);
    }
    }

    // license_key_request->additional_attributes
    cJSON *additional_attributes = cJSON_GetObjectItemCaseSensitive(license_key_requestJSON, "additionalAttributes");
    if (additional_attributes) { 
    cJSON *additional_attributes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(additional_attributes)){
        goto end; //nonprimitive container
    }

    additional_attributesList = list_createList();

    cJSON_ArrayForEach(additional_attributes_local_nonprimitive,additional_attributes )
    {
        if(!cJSON_IsObject(additional_attributes_local_nonprimitive)){
            goto end;
        }
        additional_attribute_t *additional_attributesItem = additional_attribute_parseFromJSON(additional_attributes_local_nonprimitive);

        list_addElement(additional_attributesList, additional_attributesItem);
    }
    }


    license_key_request_local_var = license_key_request_create (
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        payment_id && !cJSON_IsNull(payment_id) ? strdup(payment_id->valuestring) : NULL,
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        entitlement_id && !cJSON_IsNull(entitlement_id) ? strdup(entitlement_id->valuestring) : NULL,
        seats ? seats->valuedouble : 0,
        license_type ? license_typeVariable : systemservice_license_key_request_LICENSETYPE_NULL,
        expiration_date && !cJSON_IsNull(expiration_date) ? strdup(expiration_date->valuestring) : NULL,
        features ? featuresList : NULL,
        additional_attributes ? additional_attributesList : NULL
        );

    return license_key_request_local_var;
end:
    if (featuresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, featuresList) {
            license_feature_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(featuresList);
        featuresList = NULL;
    }
    if (additional_attributesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, additional_attributesList) {
            additional_attribute_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(additional_attributesList);
        additional_attributesList = NULL;
    }
    return NULL;

}
