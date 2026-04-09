#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "downloadables_options.h"



downloadables_options_t *downloadables_options_create(
    int mask_file_names,
    int grant_access_after_payment,
    int downloads_require_login
    ) {
    downloadables_options_t *downloadables_options_local_var = malloc(sizeof(downloadables_options_t));
    if (!downloadables_options_local_var) {
        return NULL;
    }
    downloadables_options_local_var->mask_file_names = mask_file_names;
    downloadables_options_local_var->grant_access_after_payment = grant_access_after_payment;
    downloadables_options_local_var->downloads_require_login = downloads_require_login;

    return downloadables_options_local_var;
}


void downloadables_options_free(downloadables_options_t *downloadables_options) {
    if(NULL == downloadables_options){
        return ;
    }
    listEntry_t *listEntry;
    free(downloadables_options);
}

cJSON *downloadables_options_convertToJSON(downloadables_options_t *downloadables_options) {
    cJSON *item = cJSON_CreateObject();

    // downloadables_options->mask_file_names
    if(downloadables_options->mask_file_names) {
    if(cJSON_AddBoolToObject(item, "maskFileNames", downloadables_options->mask_file_names) == NULL) {
    goto fail; //Bool
    }
    }


    // downloadables_options->grant_access_after_payment
    if(downloadables_options->grant_access_after_payment) {
    if(cJSON_AddBoolToObject(item, "grantAccessAfterPayment", downloadables_options->grant_access_after_payment) == NULL) {
    goto fail; //Bool
    }
    }


    // downloadables_options->downloads_require_login
    if(downloadables_options->downloads_require_login) {
    if(cJSON_AddBoolToObject(item, "downloadsRequireLogin", downloadables_options->downloads_require_login) == NULL) {
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

downloadables_options_t *downloadables_options_parseFromJSON(cJSON *downloadables_optionsJSON){

    downloadables_options_t *downloadables_options_local_var = NULL;

    // downloadables_options->mask_file_names
    cJSON *mask_file_names = cJSON_GetObjectItemCaseSensitive(downloadables_optionsJSON, "maskFileNames");
    if (mask_file_names) { 
    if(!cJSON_IsBool(mask_file_names))
    {
    goto end; //Bool
    }
    }

    // downloadables_options->grant_access_after_payment
    cJSON *grant_access_after_payment = cJSON_GetObjectItemCaseSensitive(downloadables_optionsJSON, "grantAccessAfterPayment");
    if (grant_access_after_payment) { 
    if(!cJSON_IsBool(grant_access_after_payment))
    {
    goto end; //Bool
    }
    }

    // downloadables_options->downloads_require_login
    cJSON *downloads_require_login = cJSON_GetObjectItemCaseSensitive(downloadables_optionsJSON, "downloadsRequireLogin");
    if (downloads_require_login) { 
    if(!cJSON_IsBool(downloads_require_login))
    {
    goto end; //Bool
    }
    }


    downloadables_options_local_var = downloadables_options_create (
        mask_file_names ? mask_file_names->valueint : 0,
        grant_access_after_payment ? grant_access_after_payment->valueint : 0,
        downloads_require_login ? downloads_require_login->valueint : 0
        );

    return downloadables_options_local_var;
end:
    return NULL;

}
