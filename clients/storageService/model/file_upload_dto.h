/*
 * file_upload_dto.h
 *
 * 
 */

#ifndef _file_upload_dto_H_
#define _file_upload_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct file_upload_dto_t file_upload_dto_t;


// Enum SCANSTATUS for file_upload_dto

typedef enum  { storageservice_file_upload_dto_SCANSTATUS_NULL = 0, storageservice_file_upload_dto_SCANSTATUS_NotRequired, storageservice_file_upload_dto_SCANSTATUS_Pending, storageservice_file_upload_dto_SCANSTATUS_Clean, storageservice_file_upload_dto_SCANSTATUS_Infected, storageservice_file_upload_dto_SCANSTATUS_Failed, storageservice_file_upload_dto_SCANSTATUS_Quarantined } storageservice_file_upload_dto_SCANSTATUS_e;

char* file_upload_dto_scan_status_ToString(storageservice_file_upload_dto_SCANSTATUS_e scan_status);

storageservice_file_upload_dto_SCANSTATUS_e file_upload_dto_scan_status_FromString(char* scan_status);

// Enum THUMBNAILSTATUS for file_upload_dto

typedef enum  { storageservice_file_upload_dto_THUMBNAILSTATUS_NULL = 0, storageservice_file_upload_dto_THUMBNAILSTATUS_NotRequired, storageservice_file_upload_dto_THUMBNAILSTATUS_Pending, storageservice_file_upload_dto_THUMBNAILSTATUS_Ready, storageservice_file_upload_dto_THUMBNAILSTATUS_Failed, storageservice_file_upload_dto_THUMBNAILSTATUS_Unsupported } storageservice_file_upload_dto_THUMBNAILSTATUS_e;

char* file_upload_dto_thumbnail_status_ToString(storageservice_file_upload_dto_THUMBNAILSTATUS_e thumbnail_status);

storageservice_file_upload_dto_THUMBNAILSTATUS_e file_upload_dto_thumbnail_status_FromString(char* thumbnail_status);

// Enum PUBLICACCESSTYPE for file_upload_dto

typedef enum  { storageservice_file_upload_dto_PUBLICACCESSTYPE_NULL = 0, storageservice_file_upload_dto_PUBLICACCESSTYPE__false, storageservice_file_upload_dto_PUBLICACCESSTYPE_Container, storageservice_file_upload_dto_PUBLICACCESSTYPE_Blob, storageservice_file_upload_dto_PUBLICACCESSTYPE_Unknown } storageservice_file_upload_dto_PUBLICACCESSTYPE_e;

char* file_upload_dto_public_access_type_ToString(storageservice_file_upload_dto_PUBLICACCESSTYPE_e public_access_type);

storageservice_file_upload_dto_PUBLICACCESSTYPE_e file_upload_dto_public_access_type_FromString(char* public_access_type);



typedef struct file_upload_dto_t {
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
    storageservice_file_upload_dto_SCANSTATUS_e scan_status; //enum
    storageservice_file_upload_dto_THUMBNAILSTATUS_e thumbnail_status; //enum
    int has_thumbnail; //boolean
    char *thumbnail_storage_key; // string
    char *thumbnail_content_type; // string
    int thumbnail_width; //numeric
    int thumbnail_height; //numeric
    storageservice_file_upload_dto_PUBLICACCESSTYPE_e public_access_type; //enum

} file_upload_dto_t;

file_upload_dto_t *file_upload_dto_create(
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
    storageservice_file_upload_dto_SCANSTATUS_e scan_status,
    storageservice_file_upload_dto_THUMBNAILSTATUS_e thumbnail_status,
    int has_thumbnail,
    char *thumbnail_storage_key,
    char *thumbnail_content_type,
    int thumbnail_width,
    int thumbnail_height,
    storageservice_file_upload_dto_PUBLICACCESSTYPE_e public_access_type
);

void file_upload_dto_free(file_upload_dto_t *file_upload_dto);

file_upload_dto_t *file_upload_dto_parseFromJSON(cJSON *file_upload_dtoJSON);

cJSON *file_upload_dto_convertToJSON(file_upload_dto_t *file_upload_dto);

#endif /* _file_upload_dto_H_ */

