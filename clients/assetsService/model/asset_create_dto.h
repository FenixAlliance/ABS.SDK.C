/*
 * asset_create_dto.h
 *
 * 
 */

#ifndef _asset_create_dto_H_
#define _asset_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_create_dto_t asset_create_dto_t;


// Enum ASSETCLASS for asset_create_dto

typedef enum  { assetsservice_asset_create_dto_ASSETCLASS_NULL = 0, assetsservice_asset_create_dto_ASSETCLASS_Fixed, assetsservice_asset_create_dto_ASSETCLASS_Stock } assetsservice_asset_create_dto_ASSETCLASS_e;

char* asset_create_dto_asset_class_ToString(assetsservice_asset_create_dto_ASSETCLASS_e asset_class);

assetsservice_asset_create_dto_ASSETCLASS_e asset_create_dto_asset_class_FromString(char* asset_class);

// Enum ASSETOWNER for asset_create_dto

typedef enum  { assetsservice_asset_create_dto_ASSETOWNER_NULL = 0, assetsservice_asset_create_dto_ASSETOWNER_Business, assetsservice_asset_create_dto_ASSETOWNER_Organization, assetsservice_asset_create_dto_ASSETOWNER_Contact, assetsservice_asset_create_dto_ASSETOWNER_Supplier } assetsservice_asset_create_dto_ASSETOWNER_e;

char* asset_create_dto_asset_owner_ToString(assetsservice_asset_create_dto_ASSETOWNER_e asset_owner);

assetsservice_asset_create_dto_ASSETOWNER_e asset_create_dto_asset_owner_FromString(char* asset_owner);



typedef struct asset_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    assetsservice_asset_create_dto_ASSETCLASS_e asset_class; //enum
    assetsservice_asset_create_dto_ASSETOWNER_e asset_owner; //enum
    int is_existing_asset; //boolean
    int calculate_depreciation; //boolean
    int allow_monthly_depreciation; //boolean
    double opening_depreciation; //numeric
    char *purchase_date; //date time
    double purchase_price; //numeric
    char *currency_id; // string
    char *item_id; // string
    char *asset_category_id; // string
    char *purchase_invoice_id; // string
    char *purchase_receipt_id; // string
    char *asset_location_id; // string
    char *contact_id; // string
    char *organization_department_id; // string

} asset_create_dto_t;

asset_create_dto_t *asset_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    assetsservice_asset_create_dto_ASSETCLASS_e asset_class,
    assetsservice_asset_create_dto_ASSETOWNER_e asset_owner,
    int is_existing_asset,
    int calculate_depreciation,
    int allow_monthly_depreciation,
    double opening_depreciation,
    char *purchase_date,
    double purchase_price,
    char *currency_id,
    char *item_id,
    char *asset_category_id,
    char *purchase_invoice_id,
    char *purchase_receipt_id,
    char *asset_location_id,
    char *contact_id,
    char *organization_department_id
);

void asset_create_dto_free(asset_create_dto_t *asset_create_dto);

asset_create_dto_t *asset_create_dto_parseFromJSON(cJSON *asset_create_dtoJSON);

cJSON *asset_create_dto_convertToJSON(asset_create_dto_t *asset_create_dto);

#endif /* _asset_create_dto_H_ */

