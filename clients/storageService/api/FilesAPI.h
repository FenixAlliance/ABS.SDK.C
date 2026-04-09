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


empty_envelope_t*
FilesAPI_createFileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, char *id, char timestamp, char *notes, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadId, char *filePath, binary_t* file);


file_upload_dto_envelope_t*
FilesAPI_deleteFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version);


binary_t**
FilesAPI_downloadFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version);


file_upload_dto_envelope_t*
FilesAPI_getFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version);


file_upload_dto_envelope_t*
FilesAPI_getFilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


file_upload_dto_envelope_t*
FilesAPI_updateFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version, char *notes, char *metadata, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadID, char *filePath, binary_t* file);


