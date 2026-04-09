#ifndef portal_options_TEST
#define portal_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define portal_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/portal_options.h"
portal_options_t* instantiate_portal_options(int include_optional);

#include "test_seo_options.c"
#include "test_store_options.c"
#include "test_theming_options.c"
#include "test_branding_options.c"
#include "test_social_media_options.c"
#include "test_privacy_options.c"
#include "test_blog_options.c"
#include "test_forum_options.c"
#include "test_footer_options.c"
#include "test_background_options.c"
#include "test_breadcrumbs_options.c"
#include "test_contact_options.c"
#include "test_color_options.c"
#include "test_dashboard_options.c"
#include "test_header_options.c"
#include "test_title_bar_options.c"
#include "test_typography_options.c"
#include "test_social_media_options.c"
#include "test_sliding_bar_options.c"
#include "test_responsive_options.c"
#include "test_menu_options.c"
#include "test_layout_options.c"
#include "test_integrations_options.c"
#include "test_emails_options.c"


portal_options_t* instantiate_portal_options(int include_optional) {
  portal_options_t* portal_options = NULL;
  if (include_optional) {
    portal_options = portal_options_create(
      "0",
      "0",
      contentservice_portal_options_PORTALUIENGINE_Angular,
       // false, not to have infinite recursion
      instantiate_seo_options(0),
       // false, not to have infinite recursion
      instantiate_store_options(0),
       // false, not to have infinite recursion
      instantiate_theming_options(0),
       // false, not to have infinite recursion
      instantiate_branding_options(0),
       // false, not to have infinite recursion
      instantiate_social_media_options(0),
       // false, not to have infinite recursion
      instantiate_privacy_options(0),
       // false, not to have infinite recursion
      instantiate_blog_options(0),
       // false, not to have infinite recursion
      instantiate_forum_options(0),
       // false, not to have infinite recursion
      instantiate_footer_options(0),
       // false, not to have infinite recursion
      instantiate_background_options(0),
       // false, not to have infinite recursion
      instantiate_breadcrumbs_options(0),
       // false, not to have infinite recursion
      instantiate_contact_options(0),
       // false, not to have infinite recursion
      instantiate_color_options(0),
       // false, not to have infinite recursion
      instantiate_dashboard_options(0),
       // false, not to have infinite recursion
      instantiate_header_options(0),
       // false, not to have infinite recursion
      instantiate_title_bar_options(0),
       // false, not to have infinite recursion
      instantiate_typography_options(0),
       // false, not to have infinite recursion
      instantiate_social_media_options(0),
       // false, not to have infinite recursion
      instantiate_sliding_bar_options(0),
      0,
      0,
      0,
      0,
       // false, not to have infinite recursion
      instantiate_responsive_options(0),
      0,
      0,
      0,
      0,
       // false, not to have infinite recursion
      instantiate_menu_options(0),
      0,
      0,
      0,
       // false, not to have infinite recursion
      instantiate_layout_options(0),
      0,
      0,
      0,
       // false, not to have infinite recursion
      instantiate_integrations_options(0),
       // false, not to have infinite recursion
      instantiate_emails_options(0)
    );
  } else {
    portal_options = portal_options_create(
      "0",
      "0",
      contentservice_portal_options_PORTALUIENGINE_Angular,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      0,
      0,
      0,
      0,
      NULL,
      0,
      0,
      0,
      0,
      NULL,
      0,
      0,
      0,
      NULL,
      0,
      0,
      0,
      NULL,
      NULL
    );
  }

  return portal_options;
}


#ifdef portal_options_MAIN

void test_portal_options(int include_optional) {
    portal_options_t* portal_options_1 = instantiate_portal_options(include_optional);

	cJSON* jsonportal_options_1 = portal_options_convertToJSON(portal_options_1);
	printf("portal_options :\n%s\n", cJSON_Print(jsonportal_options_1));
	portal_options_t* portal_options_2 = portal_options_parseFromJSON(jsonportal_options_1);
	cJSON* jsonportal_options_2 = portal_options_convertToJSON(portal_options_2);
	printf("repeating portal_options:\n%s\n", cJSON_Print(jsonportal_options_2));
}

int main() {
  test_portal_options(1);
  test_portal_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // portal_options_MAIN
#endif // portal_options_TEST
