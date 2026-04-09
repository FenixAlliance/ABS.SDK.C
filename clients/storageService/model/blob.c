#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blob.h"


char* blob_kind_ToString(storageservice_blob_KIND_e kind) {
    char* kindArray[] =  { "NULL", "File", "Folder" };
    return kindArray[kind];
}

storageservice_blob_KIND_e blob_kind_FromString(char* kind){
    int stringToReturn = 0;
    char *kindArray[] =  { "NULL", "File", "Folder" };
    size_t sizeofArray = sizeof(kindArray) / sizeof(kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(kind, kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    blob_t *blob_local_var = malloc(sizeof(blob_t));
    if (!blob_local_var) {
        return NULL;
    }
    blob_local_var->kind = kind;
    blob_local_var->is_folder = is_folder;
    blob_local_var->is_file = is_file;
    blob_local_var->folder_path = folder_path;
    blob_local_var->name = name;
    blob_local_var->size = size;
    blob_local_var->md5 = md5;
    blob_local_var->created_time = created_time;
    blob_local_var->last_modification_time = last_modification_time;
    blob_local_var->full_path = full_path;
    blob_local_var->properties = properties;
    blob_local_var->metadata = metadata;
    blob_local_var->is_root_folder = is_root_folder;

    return blob_local_var;
}


void blob_free(blob_t *blob) {
    if(NULL == blob){
        return ;
    }
    listEntry_t *listEntry;
    if (blob->folder_path) {
        free(blob->folder_path);
        blob->folder_path = NULL;
    }
    if (blob->name) {
        free(blob->name);
        blob->name = NULL;
    }
    if (blob->md5) {
        free(blob->md5);
        blob->md5 = NULL;
    }
    if (blob->created_time) {
        free(blob->created_time);
        blob->created_time = NULL;
    }
    if (blob->last_modification_time) {
        free(blob->last_modification_time);
        blob->last_modification_time = NULL;
    }
    if (blob->full_path) {
        free(blob->full_path);
        blob->full_path = NULL;
    }
    if (blob->properties) {
        list_ForEach(listEntry, blob->properties) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(blob->properties);
        blob->properties = NULL;
    }
    if (blob->metadata) {
        list_ForEach(listEntry, blob->metadata) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(blob->metadata);
        blob->metadata = NULL;
    }
    free(blob);
}

cJSON *blob_convertToJSON(blob_t *blob) {
    cJSON *item = cJSON_CreateObject();

    // blob->kind
    if(blob->kind != storageservice_blob_KIND_NULL) {
    if(cJSON_AddStringToObject(item, "kind", kindblob_ToString(blob->kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // blob->is_folder
    if(blob->is_folder) {
    if(cJSON_AddBoolToObject(item, "isFolder", blob->is_folder) == NULL) {
    goto fail; //Bool
    }
    }


    // blob->is_file
    if(blob->is_file) {
    if(cJSON_AddBoolToObject(item, "isFile", blob->is_file) == NULL) {
    goto fail; //Bool
    }
    }


    // blob->folder_path
    if(blob->folder_path) {
    if(cJSON_AddStringToObject(item, "folderPath", blob->folder_path) == NULL) {
    goto fail; //String
    }
    }


    // blob->name
    if(blob->name) {
    if(cJSON_AddStringToObject(item, "name", blob->name) == NULL) {
    goto fail; //String
    }
    }


    // blob->size
    if(blob->size) {
    if(cJSON_AddNumberToObject(item, "size", blob->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // blob->md5
    if(blob->md5) {
    if(cJSON_AddStringToObject(item, "md5", blob->md5) == NULL) {
    goto fail; //String
    }
    }


    // blob->created_time
    if(blob->created_time) {
    if(cJSON_AddStringToObject(item, "createdTime", blob->created_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blob->last_modification_time
    if(blob->last_modification_time) {
    if(cJSON_AddStringToObject(item, "lastModificationTime", blob->last_modification_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blob->full_path
    if(blob->full_path) {
    if(cJSON_AddStringToObject(item, "fullPath", blob->full_path) == NULL) {
    goto fail; //String
    }
    }


    // blob->properties
    if(blob->properties) {
    cJSON *properties = cJSON_AddObjectToObject(item, "properties");
    if(properties == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = properties;
    listEntry_t *propertiesListEntry;
    if (blob->properties) {
    list_ForEach(propertiesListEntry, blob->properties) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)propertiesListEntry->data;
    }
    }
    }


    // blob->metadata
    if(blob->metadata) {
    cJSON *metadata = cJSON_AddObjectToObject(item, "metadata");
    if(metadata == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = metadata;
    listEntry_t *metadataListEntry;
    if (blob->metadata) {
    list_ForEach(metadataListEntry, blob->metadata) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)metadataListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
    }


    // blob->is_root_folder
    if(blob->is_root_folder) {
    if(cJSON_AddBoolToObject(item, "isRootFolder", blob->is_root_folder) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

blob_t *blob_parseFromJSON(cJSON *blobJSON){

    blob_t *blob_local_var = NULL;

    // define the local map for blob->properties
    list_t *propertiesList = NULL;

    // define the local map for blob->metadata
    list_t *metadataList = NULL;

    // blob->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(blobJSON, "kind");
    storageservice_blob_KIND_e kindVariable;
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //Enum
    }
    kindVariable = blob_kind_FromString(kind->valuestring);
    }

    // blob->is_folder
    cJSON *is_folder = cJSON_GetObjectItemCaseSensitive(blobJSON, "isFolder");
    if (is_folder) { 
    if(!cJSON_IsBool(is_folder))
    {
    goto end; //Bool
    }
    }

    // blob->is_file
    cJSON *is_file = cJSON_GetObjectItemCaseSensitive(blobJSON, "isFile");
    if (is_file) { 
    if(!cJSON_IsBool(is_file))
    {
    goto end; //Bool
    }
    }

    // blob->folder_path
    cJSON *folder_path = cJSON_GetObjectItemCaseSensitive(blobJSON, "folderPath");
    if (folder_path) { 
    if(!cJSON_IsString(folder_path) && !cJSON_IsNull(folder_path))
    {
    goto end; //String
    }
    }

    // blob->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(blobJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // blob->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(blobJSON, "size");
    if (size) { 
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    }

    // blob->md5
    cJSON *md5 = cJSON_GetObjectItemCaseSensitive(blobJSON, "md5");
    if (md5) { 
    if(!cJSON_IsString(md5) && !cJSON_IsNull(md5))
    {
    goto end; //String
    }
    }

    // blob->created_time
    cJSON *created_time = cJSON_GetObjectItemCaseSensitive(blobJSON, "createdTime");
    if (created_time) { 
    if(!cJSON_IsString(created_time) && !cJSON_IsNull(created_time))
    {
    goto end; //DateTime
    }
    }

    // blob->last_modification_time
    cJSON *last_modification_time = cJSON_GetObjectItemCaseSensitive(blobJSON, "lastModificationTime");
    if (last_modification_time) { 
    if(!cJSON_IsString(last_modification_time) && !cJSON_IsNull(last_modification_time))
    {
    goto end; //DateTime
    }
    }

    // blob->full_path
    cJSON *full_path = cJSON_GetObjectItemCaseSensitive(blobJSON, "fullPath");
    if (full_path) { 
    if(!cJSON_IsString(full_path) && !cJSON_IsNull(full_path))
    {
    goto end; //String
    }
    }

    // blob->properties
    cJSON *properties = cJSON_GetObjectItemCaseSensitive(blobJSON, "properties");
    if (properties) { 
    cJSON *properties_local_map = NULL;
    if(!cJSON_IsObject(properties) && !cJSON_IsNull(properties))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(properties))
    {
        propertiesList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(properties_local_map, properties)
        {
            cJSON *localMapObject = properties_local_map;
            list_addElement(propertiesList , localMapKeyPair);
        }
    }
    }

    // blob->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(blobJSON, "metadata");
    if (metadata) { 
    cJSON *metadata_local_map = NULL;
    if(!cJSON_IsObject(metadata) && !cJSON_IsNull(metadata))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(metadata))
    {
        metadataList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(metadata_local_map, metadata)
        {
            cJSON *localMapObject = metadata_local_map;
            if(!cJSON_IsString(localMapObject))
            {
                goto end;
            }
            localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
            list_addElement(metadataList , localMapKeyPair);
        }
    }
    }

    // blob->is_root_folder
    cJSON *is_root_folder = cJSON_GetObjectItemCaseSensitive(blobJSON, "isRootFolder");
    if (is_root_folder) { 
    if(!cJSON_IsBool(is_root_folder))
    {
    goto end; //Bool
    }
    }


    blob_local_var = blob_create (
        kind ? kindVariable : storageservice_blob_KIND_NULL,
        is_folder ? is_folder->valueint : 0,
        is_file ? is_file->valueint : 0,
        folder_path && !cJSON_IsNull(folder_path) ? strdup(folder_path->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        size ? size->valuedouble : 0,
        md5 && !cJSON_IsNull(md5) ? strdup(md5->valuestring) : NULL,
        created_time && !cJSON_IsNull(created_time) ? strdup(created_time->valuestring) : NULL,
        last_modification_time && !cJSON_IsNull(last_modification_time) ? strdup(last_modification_time->valuestring) : NULL,
        full_path && !cJSON_IsNull(full_path) ? strdup(full_path->valuestring) : NULL,
        properties ? propertiesList : NULL,
        metadata ? metadataList : NULL,
        is_root_folder ? is_root_folder->valueint : 0
        );

    return blob_local_var;
end:
    if (propertiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, propertiesList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(propertiesList);
        propertiesList = NULL;
    }
    if (metadataList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, metadataList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            free(localKeyValue->value);
            localKeyValue->value = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(metadataList);
        metadataList = NULL;
    }
    return NULL;

}
