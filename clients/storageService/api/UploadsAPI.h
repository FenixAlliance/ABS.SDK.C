#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"

// Enum APPFILESOURCE for UploadsAPI_saveFileAsync
typedef enum  { storageservice_saveFileAsync_APPFILESOURCE_NULL = 0, storageservice_saveFileAsync_APPFILESOURCE_Unknown, storageservice_saveFileAsync_APPFILESOURCE_HttpUpload, storageservice_saveFileAsync_APPFILESOURCE_Integration, storageservice_saveFileAsync_APPFILESOURCE_InternalProcess, storageservice_saveFileAsync_APPFILESOURCE_ApiClient, storageservice_saveFileAsync_APPFILESOURCE_WorkflowEngine } storageservice_saveFileAsync_appFile.source_e;


// Upload a file
//
// Uploads a file to tenant or user storage.
//
empty_envelope_t*
UploadsAPI_saveFileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, char *notes, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadId, char *filePath, char *appFile.content, char *appFile.sha256, char appFile.createdAtUtc, char *appFile.userId.value, char *appFile.tenantId.value, char *appFile.enrollmentId.value, storageservice_saveFileAsync_appFile.source_e appFile.source, long appFile.length, char *appFile.name, char *appFile.fileName, char appFile.lastModified, long appFile.size, char *appFile.contentType, char *appFile.contentDisposition, list_t* appFile.headers, char *id, char timestamp);


