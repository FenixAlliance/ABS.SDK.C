#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signin_model.h"



signin_model_t *signin_model_create(
    char *email,
    char *password
    ) {
    signin_model_t *signin_model_local_var = malloc(sizeof(signin_model_t));
    if (!signin_model_local_var) {
        return NULL;
    }
    signin_model_local_var->email = email;
    signin_model_local_var->password = password;

    return signin_model_local_var;
}


void signin_model_free(signin_model_t *signin_model) {
    if(NULL == signin_model){
        return ;
    }
    listEntry_t *listEntry;
    if (signin_model->email) {
        free(signin_model->email);
        signin_model->email = NULL;
    }
    if (signin_model->password) {
        free(signin_model->password);
        signin_model->password = NULL;
    }
    free(signin_model);
}

cJSON *signin_model_convertToJSON(signin_model_t *signin_model) {
    cJSON *item = cJSON_CreateObject();

    // signin_model->email
    if(signin_model->email) {
    if(cJSON_AddStringToObject(item, "email", signin_model->email) == NULL) {
    goto fail; //String
    }
    }


    // signin_model->password
    if(signin_model->password) {
    if(cJSON_AddStringToObject(item, "password", signin_model->password) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

signin_model_t *signin_model_parseFromJSON(cJSON *signin_modelJSON){

    signin_model_t *signin_model_local_var = NULL;

    // signin_model->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(signin_modelJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // signin_model->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(signin_modelJSON, "password");
    if (password) { 
    if(!cJSON_IsString(password) && !cJSON_IsNull(password))
    {
    goto end; //String
    }
    }


    signin_model_local_var = signin_model_create (
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        password && !cJSON_IsNull(password) ? strdup(password->valuestring) : NULL
        );

    return signin_model_local_var;
end:
    return NULL;

}
