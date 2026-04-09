#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blog_options.h"



blog_options_t *blog_options_create(
    int posts_per_page,
    int enable_blog_post_comments
    ) {
    blog_options_t *blog_options_local_var = malloc(sizeof(blog_options_t));
    if (!blog_options_local_var) {
        return NULL;
    }
    blog_options_local_var->posts_per_page = posts_per_page;
    blog_options_local_var->enable_blog_post_comments = enable_blog_post_comments;

    return blog_options_local_var;
}


void blog_options_free(blog_options_t *blog_options) {
    if(NULL == blog_options){
        return ;
    }
    listEntry_t *listEntry;
    free(blog_options);
}

cJSON *blog_options_convertToJSON(blog_options_t *blog_options) {
    cJSON *item = cJSON_CreateObject();

    // blog_options->posts_per_page
    if(blog_options->posts_per_page) {
    if(cJSON_AddNumberToObject(item, "postsPerPage", blog_options->posts_per_page) == NULL) {
    goto fail; //Numeric
    }
    }


    // blog_options->enable_blog_post_comments
    if(blog_options->enable_blog_post_comments) {
    if(cJSON_AddBoolToObject(item, "enableBlogPostComments", blog_options->enable_blog_post_comments) == NULL) {
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

blog_options_t *blog_options_parseFromJSON(cJSON *blog_optionsJSON){

    blog_options_t *blog_options_local_var = NULL;

    // blog_options->posts_per_page
    cJSON *posts_per_page = cJSON_GetObjectItemCaseSensitive(blog_optionsJSON, "postsPerPage");
    if (posts_per_page) { 
    if(!cJSON_IsNumber(posts_per_page))
    {
    goto end; //Numeric
    }
    }

    // blog_options->enable_blog_post_comments
    cJSON *enable_blog_post_comments = cJSON_GetObjectItemCaseSensitive(blog_optionsJSON, "enableBlogPostComments");
    if (enable_blog_post_comments) { 
    if(!cJSON_IsBool(enable_blog_post_comments))
    {
    goto end; //Bool
    }
    }


    blog_options_local_var = blog_options_create (
        posts_per_page ? posts_per_page->valuedouble : 0,
        enable_blog_post_comments ? enable_blog_post_comments->valueint : 0
        );

    return blog_options_local_var;
end:
    return NULL;

}
