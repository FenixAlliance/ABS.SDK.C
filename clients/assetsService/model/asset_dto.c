#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_dto.h"


char* asset_dto_asset_class_ToString(assetsservice_asset_dto_ASSETCLASS_e asset_class) {
    char* asset_classArray[] =  { "NULL", "Fixed", "Stock" };
    return asset_classArray[asset_class];
}

assetsservice_asset_dto_ASSETCLASS_e asset_dto_asset_class_FromString(char* asset_class){
    int stringToReturn = 0;
    char *asset_classArray[] =  { "NULL", "Fixed", "Stock" };
    size_t sizeofArray = sizeof(asset_classArray) / sizeof(asset_classArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(asset_class, asset_classArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* asset_dto_asset_owner_ToString(assetsservice_asset_dto_ASSETOWNER_e asset_owner) {
    char* asset_ownerArray[] =  { "NULL", "Business", "Organization", "Contact", "Supplier" };
    return asset_ownerArray[asset_owner];
}

assetsservice_asset_dto_ASSETOWNER_e asset_dto_asset_owner_FromString(char* asset_owner){
    int stringToReturn = 0;
    char *asset_ownerArray[] =  { "NULL", "Business", "Organization", "Contact", "Supplier" };
    size_t sizeofArray = sizeof(asset_ownerArray) / sizeof(asset_ownerArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(asset_owner, asset_ownerArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

asset_dto_t *asset_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *business_name,
    char *business_profile_record_id,
    char *name,
    char *description,
    assetsservice_asset_dto_ASSETCLASS_e asset_class,
    assetsservice_asset_dto_ASSETOWNER_e asset_owner,
    int is_existing_asset,
    int calculate_depreciation,
    int allow_monthly_depreciation,
    double opening_depreciation,
    char *purchase_date,
    double purchase_price,
    char *currency_id,
    char *currency_code,
    char *item_id,
    char *item_name,
    char *asset_category_id,
    char *asset_category_name,
    char *purchase_invoice_id,
    char *purchase_invoice_number,
    char *asset_location_id,
    char *asset_location_name,
    char *contact_id,
    char *contact_name,
    char *organization_department_id,
    char *organization_department_name,
    char *purchase_receipt_id
    ) {
    asset_dto_t *asset_dto_local_var = malloc(sizeof(asset_dto_t));
    if (!asset_dto_local_var) {
        return NULL;
    }
    asset_dto_local_var->id = id;
    asset_dto_local_var->timestamp = timestamp;
    asset_dto_local_var->tenant_id = tenant_id;
    asset_dto_local_var->business_name = business_name;
    asset_dto_local_var->business_profile_record_id = business_profile_record_id;
    asset_dto_local_var->name = name;
    asset_dto_local_var->description = description;
    asset_dto_local_var->asset_class = asset_class;
    asset_dto_local_var->asset_owner = asset_owner;
    asset_dto_local_var->is_existing_asset = is_existing_asset;
    asset_dto_local_var->calculate_depreciation = calculate_depreciation;
    asset_dto_local_var->allow_monthly_depreciation = allow_monthly_depreciation;
    asset_dto_local_var->opening_depreciation = opening_depreciation;
    asset_dto_local_var->purchase_date = purchase_date;
    asset_dto_local_var->purchase_price = purchase_price;
    asset_dto_local_var->currency_id = currency_id;
    asset_dto_local_var->currency_code = currency_code;
    asset_dto_local_var->item_id = item_id;
    asset_dto_local_var->item_name = item_name;
    asset_dto_local_var->asset_category_id = asset_category_id;
    asset_dto_local_var->asset_category_name = asset_category_name;
    asset_dto_local_var->purchase_invoice_id = purchase_invoice_id;
    asset_dto_local_var->purchase_invoice_number = purchase_invoice_number;
    asset_dto_local_var->asset_location_id = asset_location_id;
    asset_dto_local_var->asset_location_name = asset_location_name;
    asset_dto_local_var->contact_id = contact_id;
    asset_dto_local_var->contact_name = contact_name;
    asset_dto_local_var->organization_department_id = organization_department_id;
    asset_dto_local_var->organization_department_name = organization_department_name;
    asset_dto_local_var->purchase_receipt_id = purchase_receipt_id;

    return asset_dto_local_var;
}


void asset_dto_free(asset_dto_t *asset_dto) {
    if(NULL == asset_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_dto->id) {
        free(asset_dto->id);
        asset_dto->id = NULL;
    }
    if (asset_dto->timestamp) {
        free(asset_dto->timestamp);
        asset_dto->timestamp = NULL;
    }
    if (asset_dto->tenant_id) {
        free(asset_dto->tenant_id);
        asset_dto->tenant_id = NULL;
    }
    if (asset_dto->business_name) {
        free(asset_dto->business_name);
        asset_dto->business_name = NULL;
    }
    if (asset_dto->business_profile_record_id) {
        free(asset_dto->business_profile_record_id);
        asset_dto->business_profile_record_id = NULL;
    }
    if (asset_dto->name) {
        free(asset_dto->name);
        asset_dto->name = NULL;
    }
    if (asset_dto->description) {
        free(asset_dto->description);
        asset_dto->description = NULL;
    }
    if (asset_dto->purchase_date) {
        free(asset_dto->purchase_date);
        asset_dto->purchase_date = NULL;
    }
    if (asset_dto->currency_id) {
        free(asset_dto->currency_id);
        asset_dto->currency_id = NULL;
    }
    if (asset_dto->currency_code) {
        free(asset_dto->currency_code);
        asset_dto->currency_code = NULL;
    }
    if (asset_dto->item_id) {
        free(asset_dto->item_id);
        asset_dto->item_id = NULL;
    }
    if (asset_dto->item_name) {
        free(asset_dto->item_name);
        asset_dto->item_name = NULL;
    }
    if (asset_dto->asset_category_id) {
        free(asset_dto->asset_category_id);
        asset_dto->asset_category_id = NULL;
    }
    if (asset_dto->asset_category_name) {
        free(asset_dto->asset_category_name);
        asset_dto->asset_category_name = NULL;
    }
    if (asset_dto->purchase_invoice_id) {
        free(asset_dto->purchase_invoice_id);
        asset_dto->purchase_invoice_id = NULL;
    }
    if (asset_dto->purchase_invoice_number) {
        free(asset_dto->purchase_invoice_number);
        asset_dto->purchase_invoice_number = NULL;
    }
    if (asset_dto->asset_location_id) {
        free(asset_dto->asset_location_id);
        asset_dto->asset_location_id = NULL;
    }
    if (asset_dto->asset_location_name) {
        free(asset_dto->asset_location_name);
        asset_dto->asset_location_name = NULL;
    }
    if (asset_dto->contact_id) {
        free(asset_dto->contact_id);
        asset_dto->contact_id = NULL;
    }
    if (asset_dto->contact_name) {
        free(asset_dto->contact_name);
        asset_dto->contact_name = NULL;
    }
    if (asset_dto->organization_department_id) {
        free(asset_dto->organization_department_id);
        asset_dto->organization_department_id = NULL;
    }
    if (asset_dto->organization_department_name) {
        free(asset_dto->organization_department_name);
        asset_dto->organization_department_name = NULL;
    }
    if (asset_dto->purchase_receipt_id) {
        free(asset_dto->purchase_receipt_id);
        asset_dto->purchase_receipt_id = NULL;
    }
    free(asset_dto);
}

cJSON *asset_dto_convertToJSON(asset_dto_t *asset_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_dto->id
    if(asset_dto->id) {
    if(cJSON_AddStringToObject(item, "id", asset_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->timestamp
    if(asset_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", asset_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_dto->tenant_id
    if(asset_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", asset_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->business_name
    if(asset_dto->business_name) {
    if(cJSON_AddStringToObject(item, "businessName", asset_dto->business_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->business_profile_record_id
    if(asset_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordId", asset_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->name
    if(asset_dto->name) {
    if(cJSON_AddStringToObject(item, "name", asset_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->description
    if(asset_dto->description) {
    if(cJSON_AddStringToObject(item, "description", asset_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->asset_class
    if(asset_dto->asset_class != assetsservice_asset_dto_ASSETCLASS_NULL) {
    if(cJSON_AddStringToObject(item, "assetClass", asset_classasset_dto_ToString(asset_dto->asset_class)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // asset_dto->asset_owner
    if(asset_dto->asset_owner != assetsservice_asset_dto_ASSETOWNER_NULL) {
    if(cJSON_AddStringToObject(item, "assetOwner", asset_ownerasset_dto_ToString(asset_dto->asset_owner)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // asset_dto->is_existing_asset
    if(asset_dto->is_existing_asset) {
    if(cJSON_AddBoolToObject(item, "isExistingAsset", asset_dto->is_existing_asset) == NULL) {
    goto fail; //Bool
    }
    }


    // asset_dto->calculate_depreciation
    if(asset_dto->calculate_depreciation) {
    if(cJSON_AddBoolToObject(item, "calculateDepreciation", asset_dto->calculate_depreciation) == NULL) {
    goto fail; //Bool
    }
    }


    // asset_dto->allow_monthly_depreciation
    if(asset_dto->allow_monthly_depreciation) {
    if(cJSON_AddBoolToObject(item, "allowMonthlyDepreciation", asset_dto->allow_monthly_depreciation) == NULL) {
    goto fail; //Bool
    }
    }


    // asset_dto->opening_depreciation
    if(asset_dto->opening_depreciation) {
    if(cJSON_AddNumberToObject(item, "openingDepreciation", asset_dto->opening_depreciation) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_dto->purchase_date
    if(asset_dto->purchase_date) {
    if(cJSON_AddStringToObject(item, "purchaseDate", asset_dto->purchase_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_dto->purchase_price
    if(asset_dto->purchase_price) {
    if(cJSON_AddNumberToObject(item, "purchasePrice", asset_dto->purchase_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_dto->currency_id
    if(asset_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", asset_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->currency_code
    if(asset_dto->currency_code) {
    if(cJSON_AddStringToObject(item, "currencyCode", asset_dto->currency_code) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->item_id
    if(asset_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", asset_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->item_name
    if(asset_dto->item_name) {
    if(cJSON_AddStringToObject(item, "itemName", asset_dto->item_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->asset_category_id
    if(asset_dto->asset_category_id) {
    if(cJSON_AddStringToObject(item, "assetCategoryId", asset_dto->asset_category_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->asset_category_name
    if(asset_dto->asset_category_name) {
    if(cJSON_AddStringToObject(item, "assetCategoryName", asset_dto->asset_category_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->purchase_invoice_id
    if(asset_dto->purchase_invoice_id) {
    if(cJSON_AddStringToObject(item, "purchaseInvoiceId", asset_dto->purchase_invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->purchase_invoice_number
    if(asset_dto->purchase_invoice_number) {
    if(cJSON_AddStringToObject(item, "purchaseInvoiceNumber", asset_dto->purchase_invoice_number) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->asset_location_id
    if(asset_dto->asset_location_id) {
    if(cJSON_AddStringToObject(item, "assetLocationId", asset_dto->asset_location_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->asset_location_name
    if(asset_dto->asset_location_name) {
    if(cJSON_AddStringToObject(item, "assetLocationName", asset_dto->asset_location_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->contact_id
    if(asset_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", asset_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->contact_name
    if(asset_dto->contact_name) {
    if(cJSON_AddStringToObject(item, "contactName", asset_dto->contact_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->organization_department_id
    if(asset_dto->organization_department_id) {
    if(cJSON_AddStringToObject(item, "organizationDepartmentId", asset_dto->organization_department_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->organization_department_name
    if(asset_dto->organization_department_name) {
    if(cJSON_AddStringToObject(item, "organizationDepartmentName", asset_dto->organization_department_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_dto->purchase_receipt_id
    if(asset_dto->purchase_receipt_id) {
    if(cJSON_AddStringToObject(item, "purchaseReceiptId", asset_dto->purchase_receipt_id) == NULL) {
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

asset_dto_t *asset_dto_parseFromJSON(cJSON *asset_dtoJSON){

    asset_dto_t *asset_dto_local_var = NULL;

    // asset_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // asset_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // asset_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // asset_dto->business_name
    cJSON *business_name = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "businessName");
    if (business_name) { 
    if(!cJSON_IsString(business_name) && !cJSON_IsNull(business_name))
    {
    goto end; //String
    }
    }

    // asset_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "businessProfileRecordId");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // asset_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // asset_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // asset_dto->asset_class
    cJSON *asset_class = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "assetClass");
    assetsservice_asset_dto_ASSETCLASS_e asset_classVariable;
    if (asset_class) { 
    if(!cJSON_IsString(asset_class))
    {
    goto end; //Enum
    }
    asset_classVariable = asset_dto_asset_class_FromString(asset_class->valuestring);
    }

    // asset_dto->asset_owner
    cJSON *asset_owner = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "assetOwner");
    assetsservice_asset_dto_ASSETOWNER_e asset_ownerVariable;
    if (asset_owner) { 
    if(!cJSON_IsString(asset_owner))
    {
    goto end; //Enum
    }
    asset_ownerVariable = asset_dto_asset_owner_FromString(asset_owner->valuestring);
    }

    // asset_dto->is_existing_asset
    cJSON *is_existing_asset = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "isExistingAsset");
    if (is_existing_asset) { 
    if(!cJSON_IsBool(is_existing_asset))
    {
    goto end; //Bool
    }
    }

    // asset_dto->calculate_depreciation
    cJSON *calculate_depreciation = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "calculateDepreciation");
    if (calculate_depreciation) { 
    if(!cJSON_IsBool(calculate_depreciation))
    {
    goto end; //Bool
    }
    }

    // asset_dto->allow_monthly_depreciation
    cJSON *allow_monthly_depreciation = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "allowMonthlyDepreciation");
    if (allow_monthly_depreciation) { 
    if(!cJSON_IsBool(allow_monthly_depreciation))
    {
    goto end; //Bool
    }
    }

    // asset_dto->opening_depreciation
    cJSON *opening_depreciation = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "openingDepreciation");
    if (opening_depreciation) { 
    if(!cJSON_IsNumber(opening_depreciation))
    {
    goto end; //Numeric
    }
    }

    // asset_dto->purchase_date
    cJSON *purchase_date = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "purchaseDate");
    if (purchase_date) { 
    if(!cJSON_IsString(purchase_date) && !cJSON_IsNull(purchase_date))
    {
    goto end; //DateTime
    }
    }

    // asset_dto->purchase_price
    cJSON *purchase_price = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "purchasePrice");
    if (purchase_price) { 
    if(!cJSON_IsNumber(purchase_price))
    {
    goto end; //Numeric
    }
    }

    // asset_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // asset_dto->currency_code
    cJSON *currency_code = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "currencyCode");
    if (currency_code) { 
    if(!cJSON_IsString(currency_code) && !cJSON_IsNull(currency_code))
    {
    goto end; //String
    }
    }

    // asset_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // asset_dto->item_name
    cJSON *item_name = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "itemName");
    if (item_name) { 
    if(!cJSON_IsString(item_name) && !cJSON_IsNull(item_name))
    {
    goto end; //String
    }
    }

    // asset_dto->asset_category_id
    cJSON *asset_category_id = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "assetCategoryId");
    if (asset_category_id) { 
    if(!cJSON_IsString(asset_category_id) && !cJSON_IsNull(asset_category_id))
    {
    goto end; //String
    }
    }

    // asset_dto->asset_category_name
    cJSON *asset_category_name = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "assetCategoryName");
    if (asset_category_name) { 
    if(!cJSON_IsString(asset_category_name) && !cJSON_IsNull(asset_category_name))
    {
    goto end; //String
    }
    }

    // asset_dto->purchase_invoice_id
    cJSON *purchase_invoice_id = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "purchaseInvoiceId");
    if (purchase_invoice_id) { 
    if(!cJSON_IsString(purchase_invoice_id) && !cJSON_IsNull(purchase_invoice_id))
    {
    goto end; //String
    }
    }

    // asset_dto->purchase_invoice_number
    cJSON *purchase_invoice_number = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "purchaseInvoiceNumber");
    if (purchase_invoice_number) { 
    if(!cJSON_IsString(purchase_invoice_number) && !cJSON_IsNull(purchase_invoice_number))
    {
    goto end; //String
    }
    }

    // asset_dto->asset_location_id
    cJSON *asset_location_id = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "assetLocationId");
    if (asset_location_id) { 
    if(!cJSON_IsString(asset_location_id) && !cJSON_IsNull(asset_location_id))
    {
    goto end; //String
    }
    }

    // asset_dto->asset_location_name
    cJSON *asset_location_name = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "assetLocationName");
    if (asset_location_name) { 
    if(!cJSON_IsString(asset_location_name) && !cJSON_IsNull(asset_location_name))
    {
    goto end; //String
    }
    }

    // asset_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // asset_dto->contact_name
    cJSON *contact_name = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "contactName");
    if (contact_name) { 
    if(!cJSON_IsString(contact_name) && !cJSON_IsNull(contact_name))
    {
    goto end; //String
    }
    }

    // asset_dto->organization_department_id
    cJSON *organization_department_id = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "organizationDepartmentId");
    if (organization_department_id) { 
    if(!cJSON_IsString(organization_department_id) && !cJSON_IsNull(organization_department_id))
    {
    goto end; //String
    }
    }

    // asset_dto->organization_department_name
    cJSON *organization_department_name = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "organizationDepartmentName");
    if (organization_department_name) { 
    if(!cJSON_IsString(organization_department_name) && !cJSON_IsNull(organization_department_name))
    {
    goto end; //String
    }
    }

    // asset_dto->purchase_receipt_id
    cJSON *purchase_receipt_id = cJSON_GetObjectItemCaseSensitive(asset_dtoJSON, "purchaseReceiptId");
    if (purchase_receipt_id) { 
    if(!cJSON_IsString(purchase_receipt_id) && !cJSON_IsNull(purchase_receipt_id))
    {
    goto end; //String
    }
    }


    asset_dto_local_var = asset_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        business_name && !cJSON_IsNull(business_name) ? strdup(business_name->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        asset_class ? asset_classVariable : assetsservice_asset_dto_ASSETCLASS_NULL,
        asset_owner ? asset_ownerVariable : assetsservice_asset_dto_ASSETOWNER_NULL,
        is_existing_asset ? is_existing_asset->valueint : 0,
        calculate_depreciation ? calculate_depreciation->valueint : 0,
        allow_monthly_depreciation ? allow_monthly_depreciation->valueint : 0,
        opening_depreciation ? opening_depreciation->valuedouble : 0,
        purchase_date && !cJSON_IsNull(purchase_date) ? strdup(purchase_date->valuestring) : NULL,
        purchase_price ? purchase_price->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        currency_code && !cJSON_IsNull(currency_code) ? strdup(currency_code->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        item_name && !cJSON_IsNull(item_name) ? strdup(item_name->valuestring) : NULL,
        asset_category_id && !cJSON_IsNull(asset_category_id) ? strdup(asset_category_id->valuestring) : NULL,
        asset_category_name && !cJSON_IsNull(asset_category_name) ? strdup(asset_category_name->valuestring) : NULL,
        purchase_invoice_id && !cJSON_IsNull(purchase_invoice_id) ? strdup(purchase_invoice_id->valuestring) : NULL,
        purchase_invoice_number && !cJSON_IsNull(purchase_invoice_number) ? strdup(purchase_invoice_number->valuestring) : NULL,
        asset_location_id && !cJSON_IsNull(asset_location_id) ? strdup(asset_location_id->valuestring) : NULL,
        asset_location_name && !cJSON_IsNull(asset_location_name) ? strdup(asset_location_name->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        contact_name && !cJSON_IsNull(contact_name) ? strdup(contact_name->valuestring) : NULL,
        organization_department_id && !cJSON_IsNull(organization_department_id) ? strdup(organization_department_id->valuestring) : NULL,
        organization_department_name && !cJSON_IsNull(organization_department_name) ? strdup(organization_department_name->valuestring) : NULL,
        purchase_receipt_id && !cJSON_IsNull(purchase_receipt_id) ? strdup(purchase_receipt_id->valuestring) : NULL
        );

    return asset_dto_local_var;
end:
    return NULL;

}
