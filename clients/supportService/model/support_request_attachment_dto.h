/*
 * support_request_attachment_dto.h
 *
 * 
 */

#ifndef _support_request_attachment_dto_H_
#define _support_request_attachment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_request_attachment_dto_t support_request_attachment_dto_t;


// Enum SCANSTATUS for support_request_attachment_dto

typedef enum  { supportservice_support_request_attachment_dto_SCANSTATUS_NULL = 0, supportservice_support_request_attachment_dto_SCANSTATUS_NotRequired, supportservice_support_request_attachment_dto_SCANSTATUS_Pending, supportservice_support_request_attachment_dto_SCANSTATUS_Clean, supportservice_support_request_attachment_dto_SCANSTATUS_Infected, supportservice_support_request_attachment_dto_SCANSTATUS_Failed, supportservice_support_request_attachment_dto_SCANSTATUS_Quarantined } supportservice_support_request_attachment_dto_SCANSTATUS_e;

char* support_request_attachment_dto_scan_status_ToString(supportservice_support_request_attachment_dto_SCANSTATUS_e scan_status);

supportservice_support_request_attachment_dto_SCANSTATUS_e support_request_attachment_dto_scan_status_FromString(char* scan_status);

// Enum THUMBNAILSTATUS for support_request_attachment_dto

typedef enum  { supportservice_support_request_attachment_dto_THUMBNAILSTATUS_NULL = 0, supportservice_support_request_attachment_dto_THUMBNAILSTATUS_NotRequired, supportservice_support_request_attachment_dto_THUMBNAILSTATUS_Pending, supportservice_support_request_attachment_dto_THUMBNAILSTATUS_Ready, supportservice_support_request_attachment_dto_THUMBNAILSTATUS_Failed, supportservice_support_request_attachment_dto_THUMBNAILSTATUS_Unsupported } supportservice_support_request_attachment_dto_THUMBNAILSTATUS_e;

char* support_request_attachment_dto_thumbnail_status_ToString(supportservice_support_request_attachment_dto_THUMBNAILSTATUS_e thumbnail_status);

supportservice_support_request_attachment_dto_THUMBNAILSTATUS_e support_request_attachment_dto_thumbnail_status_FromString(char* thumbnail_status);

// Enum PUBLICACCESSTYPE for support_request_attachment_dto

typedef enum  { supportservice_support_request_attachment_dto_PUBLICACCESSTYPE_NULL = 0, supportservice_support_request_attachment_dto_PUBLICACCESSTYPE__false, supportservice_support_request_attachment_dto_PUBLICACCESSTYPE_Container, supportservice_support_request_attachment_dto_PUBLICACCESSTYPE_Blob, supportservice_support_request_attachment_dto_PUBLICACCESSTYPE_Unknown } supportservice_support_request_attachment_dto_PUBLICACCESSTYPE_e;

char* support_request_attachment_dto_public_access_type_ToString(supportservice_support_request_attachment_dto_PUBLICACCESSTYPE_e public_access_type);

supportservice_support_request_attachment_dto_PUBLICACCESSTYPE_e support_request_attachment_dto_public_access_type_FromString(char* public_access_type);



typedef struct support_request_attachment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *notes; // string
    char *title; // string
    char *author; // string
    int is_folder; //boolean
    char *hash; // string
    char *file_url; // string
    char *file_path; // string
    char *storage_key; // string
    char *storage_provider_key; // string
    char *file_name; // string
    char *abstract; // string
    char *key_words; // string
    char *metadata; // string
    long file_length; //numeric
    char *content_type; // string
    char *parent_file_id; // string
    int valid_response; //boolean
    char *user_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *social_profile_id; // string
    char *folder_path; // string
    supportservice_support_request_attachment_dto_SCANSTATUS_e scan_status; //enum
    supportservice_support_request_attachment_dto_THUMBNAILSTATUS_e thumbnail_status; //enum
    int has_thumbnail; //boolean
    char *thumbnail_storage_key; // string
    char *thumbnail_content_type; // string
    int thumbnail_width; //numeric
    int thumbnail_height; //numeric
    supportservice_support_request_attachment_dto_PUBLICACCESSTYPE_e public_access_type; //enum
    char *support_request_id; // string

} support_request_attachment_dto_t;

support_request_attachment_dto_t *support_request_attachment_dto_create(
    char *id,
    char *timestamp,
    char *notes,
    char *title,
    char *author,
    int is_folder,
    char *hash,
    char *file_url,
    char *file_path,
    char *storage_key,
    char *storage_provider_key,
    char *file_name,
    char *abstract,
    char *key_words,
    char *metadata,
    long file_length,
    char *content_type,
    char *parent_file_id,
    int valid_response,
    char *user_id,
    char *tenant_id,
    char *enrollment_id,
    char *social_profile_id,
    char *folder_path,
    supportservice_support_request_attachment_dto_SCANSTATUS_e scan_status,
    supportservice_support_request_attachment_dto_THUMBNAILSTATUS_e thumbnail_status,
    int has_thumbnail,
    char *thumbnail_storage_key,
    char *thumbnail_content_type,
    int thumbnail_width,
    int thumbnail_height,
    supportservice_support_request_attachment_dto_PUBLICACCESSTYPE_e public_access_type,
    char *support_request_id
);

void support_request_attachment_dto_free(support_request_attachment_dto_t *support_request_attachment_dto);

support_request_attachment_dto_t *support_request_attachment_dto_parseFromJSON(cJSON *support_request_attachment_dtoJSON);

cJSON *support_request_attachment_dto_convertToJSON(support_request_attachment_dto_t *support_request_attachment_dto);

#endif /* _support_request_attachment_dto_H_ */

