#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/access_token_response.h"
#include "../model/forgot_password_request.h"
#include "../model/http_validation_problem_details.h"
#include "../model/info_request.h"
#include "../model/info_response.h"
#include "../model/login_request.h"
#include "../model/refresh_request.h"
#include "../model/register_request.h"
#include "../model/resend_confirmation_email_request.h"
#include "../model/reset_password_request.h"
#include "../model/two_factor_request.h"
#include "../model/two_factor_response.h"


void
FenixAllianceABSWebAPI_accountLogoutPost(apiClient_t *apiClient, char *returnUrl);


void
FenixAllianceABSWebAPI_accountManageDownloadPersonalDataPost(apiClient_t *apiClient);


void
FenixAllianceABSWebAPI_accountManageLinkExternalLoginPost(apiClient_t *apiClient, char *provider);


void
FenixAllianceABSWebAPI_accountPerformExternalLoginPost(apiClient_t *apiClient, char *provider, char *returnUrl);


void
FenixAllianceABSWebAPI_apiV2AIServiceAgentsAgentIdAguiPost(apiClient_t *apiClient, char *agentId);


void
FenixAllianceABSWebAPI_forgotPasswordPost(apiClient_t *apiClient, forgot_password_request_t *forgot_password_request);


void
FenixAllianceABSWebAPI_healthGet(apiClient_t *apiClient);


void
FenixAllianceABSWebAPI_helloGet(apiClient_t *apiClient);


access_token_response_t*
FenixAllianceABSWebAPI_loginPost(apiClient_t *apiClient, login_request_t *login_request, int *useCookies, int *useSessionCookies);


two_factor_response_t*
FenixAllianceABSWebAPI_manage2faPost(apiClient_t *apiClient, two_factor_request_t *two_factor_request);


info_response_t*
FenixAllianceABSWebAPI_manageInfoGet(apiClient_t *apiClient);


info_response_t*
FenixAllianceABSWebAPI_manageInfoPost(apiClient_t *apiClient, info_request_t *info_request);


void
FenixAllianceABSWebAPI_mapIdentityApiConfirmEmail(apiClient_t *apiClient, char *userId, char *code, char *changedEmail);


access_token_response_t*
FenixAllianceABSWebAPI_refreshPost(apiClient_t *apiClient, refresh_request_t *refresh_request);


void
FenixAllianceABSWebAPI_registerPost(apiClient_t *apiClient, register_request_t *register_request);


void
FenixAllianceABSWebAPI_resendConfirmationEmailPost(apiClient_t *apiClient, resend_confirmation_email_request_t *resend_confirmation_email_request);


void
FenixAllianceABSWebAPI_resetPasswordPost(apiClient_t *apiClient, reset_password_request_t *reset_password_request);


void
FenixAllianceABSWebAPI_versionGet(apiClient_t *apiClient);


