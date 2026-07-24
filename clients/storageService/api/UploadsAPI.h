#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"

// Enum PUBLICACCESSTYPE for UploadsAPI_saveFileAsync
typedef enum  { storageservice_saveFileAsync_PUBLICACCESSTYPE_NULL = 0, storageservice_saveFileAsync_PUBLICACCESSTYPE__false, storageservice_saveFileAsync_PUBLICACCESSTYPE_Container, storageservice_saveFileAsync_PUBLICACCESSTYPE_Blob, storageservice_saveFileAsync_PUBLICACCESSTYPE_Unknown } storageservice_saveFileAsync_publicAccessType_e;

// Enum PURPOSE for UploadsAPI_saveFileAsync
typedef enum  { storageservice_saveFileAsync_PURPOSE_NULL = 0, storageservice_saveFileAsync_PURPOSE_Unknown, storageservice_saveFileAsync_PURPOSE_IdentityAvatar, storageservice_saveFileAsync_PURPOSE_IdentityBanner, storageservice_saveFileAsync_PURPOSE_ProfileAsset, storageservice_saveFileAsync_PURPOSE_EngagementInline, storageservice_saveFileAsync_PURPOSE_EngagementAttachment, storageservice_saveFileAsync_PURPOSE_MessageAttachment, storageservice_saveFileAsync_PURPOSE_SocialPost, storageservice_saveFileAsync_PURPOSE_RecordAttachment, storageservice_saveFileAsync_PURPOSE_AiGenerated, storageservice_saveFileAsync_PURPOSE_SystemArtifact, storageservice_saveFileAsync_PURPOSE_Temporary } storageservice_saveFileAsync_purpose_e;

// Enum APPFILESOURCE for UploadsAPI_saveFileAsync
typedef enum  { storageservice_saveFileAsync_APPFILESOURCE_NULL = 0, storageservice_saveFileAsync_APPFILESOURCE_Unknown, storageservice_saveFileAsync_APPFILESOURCE_HttpUpload, storageservice_saveFileAsync_APPFILESOURCE_Integration, storageservice_saveFileAsync_APPFILESOURCE_InternalProcess, storageservice_saveFileAsync_APPFILESOURCE_ApiClient, storageservice_saveFileAsync_APPFILESOURCE_WorkflowEngine } storageservice_saveFileAsync_appFile.source_e;


// Upload a file
//
// Uploads a file to tenant or user storage, scanned and catalogued through the storage spine.
//
empty_envelope_t*
UploadsAPI_saveFileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file, char *notes, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadId, char *filePath, storageservice_saveFileAsync_publicAccessType_e publicAccessType, storageservice_saveFileAsync_purpose_e purpose, char *socialProfileId.value, char *appFile.content, char *appFile.sha256, char appFile.createdAtUtc, char *appFile.userId.value, char *appFile.tenantId.value, char *appFile.enrollmentId.value, storageservice_saveFileAsync_appFile.source_e appFile.source, long appFile.length, char *appFile.name, char *appFile.fileName, char appFile.lastModified, long appFile.size, char *appFile.contentType, char *appFile.contentDisposition, list_t* appFile.headers, char *id, char timestamp);


