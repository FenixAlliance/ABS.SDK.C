#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/file_upload_dto_envelope.h"

// Enum PUBLICACCESSTYPE for FilesAPI_createFileAsync
typedef enum  { storageservice_createFileAsync_PUBLICACCESSTYPE_NULL = 0, storageservice_createFileAsync_PUBLICACCESSTYPE__false, storageservice_createFileAsync_PUBLICACCESSTYPE_Container, storageservice_createFileAsync_PUBLICACCESSTYPE_Blob, storageservice_createFileAsync_PUBLICACCESSTYPE_Unknown } storageservice_createFileAsync_publicAccessType_e;

// Enum PURPOSE for FilesAPI_createFileAsync
typedef enum  { storageservice_createFileAsync_PURPOSE_NULL = 0, storageservice_createFileAsync_PURPOSE_Unknown, storageservice_createFileAsync_PURPOSE_IdentityAvatar, storageservice_createFileAsync_PURPOSE_IdentityBanner, storageservice_createFileAsync_PURPOSE_ProfileAsset, storageservice_createFileAsync_PURPOSE_EngagementInline, storageservice_createFileAsync_PURPOSE_EngagementAttachment, storageservice_createFileAsync_PURPOSE_MessageAttachment, storageservice_createFileAsync_PURPOSE_SocialPost, storageservice_createFileAsync_PURPOSE_RecordAttachment, storageservice_createFileAsync_PURPOSE_AiGenerated, storageservice_createFileAsync_PURPOSE_SystemArtifact, storageservice_createFileAsync_PURPOSE_Temporary } storageservice_createFileAsync_purpose_e;

// Enum APPFILESOURCE for FilesAPI_createFileAsync
typedef enum  { storageservice_createFileAsync_APPFILESOURCE_NULL = 0, storageservice_createFileAsync_APPFILESOURCE_Unknown, storageservice_createFileAsync_APPFILESOURCE_HttpUpload, storageservice_createFileAsync_APPFILESOURCE_Integration, storageservice_createFileAsync_APPFILESOURCE_InternalProcess, storageservice_createFileAsync_APPFILESOURCE_ApiClient, storageservice_createFileAsync_APPFILESOURCE_WorkflowEngine } storageservice_createFileAsync_appFile.source_e;

// Enum APPFILESOURCE for FilesAPI_updateFileAsync
typedef enum  { storageservice_updateFileAsync_APPFILESOURCE_NULL = 0, storageservice_updateFileAsync_APPFILESOURCE_Unknown, storageservice_updateFileAsync_APPFILESOURCE_HttpUpload, storageservice_updateFileAsync_APPFILESOURCE_Integration, storageservice_updateFileAsync_APPFILESOURCE_InternalProcess, storageservice_updateFileAsync_APPFILESOURCE_ApiClient, storageservice_updateFileAsync_APPFILESOURCE_WorkflowEngine } storageservice_updateFileAsync_appFile.source_e;


empty_envelope_t*
FilesAPI_createFileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file, char *notes, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadId, char *filePath, storageservice_createFileAsync_publicAccessType_e publicAccessType, storageservice_createFileAsync_purpose_e purpose, char *socialProfileId.value, char *appFile.content, char *appFile.sha256, char appFile.createdAtUtc, char *appFile.userId.value, char *appFile.tenantId.value, char *appFile.enrollmentId.value, storageservice_createFileAsync_appFile.source_e appFile.source, long appFile.length, char *appFile.name, char *appFile.fileName, char appFile.lastModified, long appFile.size, char *appFile.contentType, char *appFile.contentDisposition, list_t* appFile.headers, char *id, char timestamp);


empty_envelope_t*
FilesAPI_deleteFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version);


binary_t**
FilesAPI_downloadFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version);


file_upload_dto_envelope_t*
FilesAPI_getFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version);


binary_t**
FilesAPI_getFileThumbnailAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version);


file_upload_dto_envelope_t*
FilesAPI_getFilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, int *top, int *skip, int *count, char *filter, char *orderBy, char *search, char *select, char *expand, int *isEmpty);


long*
FilesAPI_getFilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, int *top, int *skip, int *count, char *filter, char *orderBy, char *search, char *select, char *expand, int *isEmpty);


empty_envelope_t*
FilesAPI_updateFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version, binary_t* file, char *notes, char *metadata, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadID, char *filePath, char *appFile.content, char *appFile.sha256, char appFile.createdAtUtc, char *appFile.userId.value, char *appFile.tenantId.value, char *appFile.enrollmentId.value, storageservice_updateFileAsync_appFile.source_e appFile.source, long appFile.length, char *appFile.name, char *appFile.fileName, char appFile.lastModified, long appFile.size, char *appFile.contentType, char *appFile.contentDisposition, list_t* appFile.headers);


