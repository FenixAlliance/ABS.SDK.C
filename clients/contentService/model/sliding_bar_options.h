/*
 * sliding_bar_options.h
 *
 * 
 */

#ifndef _sliding_bar_options_H_
#define _sliding_bar_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sliding_bar_options_t sliding_bar_options_t;

#include "padding.h"

// Enum POSITION for sliding_bar_options

typedef enum  { contentservice_sliding_bar_options_POSITION_NULL = 0, contentservice_sliding_bar_options_POSITION_Bottom, contentservice_sliding_bar_options_POSITION_Right, contentservice_sliding_bar_options_POSITION_Left, contentservice_sliding_bar_options_POSITION_Top } contentservice_sliding_bar_options_POSITION_e;

char* sliding_bar_options_position_ToString(contentservice_sliding_bar_options_POSITION_e position);

contentservice_sliding_bar_options_POSITION_e sliding_bar_options_position_FromString(char* position);

// Enum CONTENTALIGNMENT for sliding_bar_options

typedef enum  { contentservice_sliding_bar_options_CONTENTALIGNMENT_NULL = 0, contentservice_sliding_bar_options_CONTENTALIGNMENT_Center, contentservice_sliding_bar_options_CONTENTALIGNMENT_Right, contentservice_sliding_bar_options_CONTENTALIGNMENT_Left } contentservice_sliding_bar_options_CONTENTALIGNMENT_e;

char* sliding_bar_options_content_alignment_ToString(contentservice_sliding_bar_options_CONTENTALIGNMENT_e content_alignment);

contentservice_sliding_bar_options_CONTENTALIGNMENT_e sliding_bar_options_content_alignment_FromString(char* content_alignment);



typedef struct sliding_bar_options_t {
    contentservice_sliding_bar_options_POSITION_e position; //enum
    struct padding_t *content_padding; //model
    contentservice_sliding_bar_options_CONTENTALIGNMENT_e content_alignment; //enum
    int columns_count; //numeric
    int enable_sticky; //boolean
    int open_on_page_load; //boolean
    int enable_on_mobile; //boolean
    int enable_on_desktop; //boolean

} sliding_bar_options_t;

sliding_bar_options_t *sliding_bar_options_create(
    contentservice_sliding_bar_options_POSITION_e position,
    padding_t *content_padding,
    contentservice_sliding_bar_options_CONTENTALIGNMENT_e content_alignment,
    int columns_count,
    int enable_sticky,
    int open_on_page_load,
    int enable_on_mobile,
    int enable_on_desktop
);

void sliding_bar_options_free(sliding_bar_options_t *sliding_bar_options);

sliding_bar_options_t *sliding_bar_options_parseFromJSON(cJSON *sliding_bar_optionsJSON);

cJSON *sliding_bar_options_convertToJSON(sliding_bar_options_t *sliding_bar_options);

#endif /* _sliding_bar_options_H_ */

