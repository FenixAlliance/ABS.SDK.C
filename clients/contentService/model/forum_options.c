#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "forum_options.h"



forum_options_t *forum_options_create(
    int forums_per_page
    ) {
    forum_options_t *forum_options_local_var = malloc(sizeof(forum_options_t));
    if (!forum_options_local_var) {
        return NULL;
    }
    forum_options_local_var->forums_per_page = forums_per_page;

    return forum_options_local_var;
}


void forum_options_free(forum_options_t *forum_options) {
    if(NULL == forum_options){
        return ;
    }
    listEntry_t *listEntry;
    free(forum_options);
}

cJSON *forum_options_convertToJSON(forum_options_t *forum_options) {
    cJSON *item = cJSON_CreateObject();

    // forum_options->forums_per_page
    if(forum_options->forums_per_page) {
    if(cJSON_AddNumberToObject(item, "forumsPerPage", forum_options->forums_per_page) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

forum_options_t *forum_options_parseFromJSON(cJSON *forum_optionsJSON){

    forum_options_t *forum_options_local_var = NULL;

    // forum_options->forums_per_page
    cJSON *forums_per_page = cJSON_GetObjectItemCaseSensitive(forum_optionsJSON, "forumsPerPage");
    if (forums_per_page) { 
    if(!cJSON_IsNumber(forums_per_page))
    {
    goto end; //Numeric
    }
    }


    forum_options_local_var = forum_options_create (
        forums_per_page ? forums_per_page->valuedouble : 0
        );

    return forum_options_local_var;
end:
    return NULL;

}
