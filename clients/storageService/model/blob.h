/*
 * blob.h
 *
 * 
 */

#ifndef _blob_H_
#define _blob_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blob_t blob_t;

#include "any_type.h"

// Enum KIND for blob

typedef enum  { storageservice_blob_KIND_NULL = 0, storageservice_blob_KIND_File, storageservice_blob_KIND_Folder } storageservice_blob_KIND_e;

char* blob_kind_ToString(storageservice_blob_KIND_e kind);

storageservice_blob_KIND_e blob_kind_FromString(char* kind);



typedef struct blob_t {
    storageservice_blob_KIND_e kind; //enum
    int is_folder; //boolean
    int is_file; //boolean
    char *folder_path; // string
    char *name; // string
    long size; //numeric
    char *md5; // string
    char *created_time; //date time
    char *last_modification_time; //date time
    char *full_path; // string
    list_t* properties; //map
    list_t* metadata; //map
    int is_root_folder; //boolean

} blob_t;

blob_t *blob_create(
    storageservice_blob_KIND_e kind,
    int is_folder,
    int is_file,
    char *folder_path,
    char *name,
    long size,
    char *md5,
    char *created_time,
    char *last_modification_time,
    char *full_path,
    list_t* properties,
    list_t* metadata,
    int is_root_folder
);

void blob_free(blob_t *blob);

blob_t *blob_parseFromJSON(cJSON *blobJSON);

cJSON *blob_convertToJSON(blob_t *blob);

#endif /* _blob_H_ */

