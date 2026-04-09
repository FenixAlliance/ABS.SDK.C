/*
 * asset_dto.h
 *
 * 
 */

#ifndef _asset_dto_H_
#define _asset_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_dto_t asset_dto_t;


// Enum ASSETCLASS for asset_dto

typedef enum  { assetsservice_asset_dto_ASSETCLASS_NULL = 0, assetsservice_asset_dto_ASSETCLASS_Fixed, assetsservice_asset_dto_ASSETCLASS_Stock } assetsservice_asset_dto_ASSETCLASS_e;

char* asset_dto_asset_class_ToString(assetsservice_asset_dto_ASSETCLASS_e asset_class);

assetsservice_asset_dto_ASSETCLASS_e asset_dto_asset_class_FromString(char* asset_class);

// Enum ASSETOWNER for asset_dto

typedef enum  { assetsservice_asset_dto_ASSETOWNER_NULL = 0, assetsservice_asset_dto_ASSETOWNER_Business, assetsservice_asset_dto_ASSETOWNER_Organization, assetsservice_asset_dto_ASSETOWNER_Contact, assetsservice_asset_dto_ASSETOWNER_Supplier } assetsservice_asset_dto_ASSETOWNER_e;

char* asset_dto_asset_owner_ToString(assetsservice_asset_dto_ASSETOWNER_e asset_owner);

assetsservice_asset_dto_ASSETOWNER_e asset_dto_asset_owner_FromString(char* asset_owner);



typedef struct asset_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *business_name; // string
    char *business_profile_record_id; // string
    char *name; // string
    char *description; // string
    assetsservice_asset_dto_ASSETCLASS_e asset_class; //enum
    assetsservice_asset_dto_ASSETOWNER_e asset_owner; //enum
    int is_existing_asset; //boolean
    int calculate_depreciation; //boolean
    int allow_monthly_depreciation; //boolean
    double opening_depreciation; //numeric
    char *purchase_date; //date time
    double purchase_price; //numeric
    char *currency_id; // string
    char *currency_code; // string
    char *item_id; // string
    char *item_name; // string
    char *asset_category_id; // string
    char *asset_category_name; // string
    char *purchase_invoice_id; // string
    char *purchase_invoice_number; // string
    char *asset_location_id; // string
    char *asset_location_name; // string
    char *contact_id; // string
    char *contact_name; // string
    char *organization_department_id; // string
    char *organization_department_name; // string
    char *purchase_receipt_id; // string

} asset_dto_t;

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
);

void asset_dto_free(asset_dto_t *asset_dto);

asset_dto_t *asset_dto_parseFromJSON(cJSON *asset_dtoJSON);

cJSON *asset_dto_convertToJSON(asset_dto_t *asset_dto);

#endif /* _asset_dto_H_ */

