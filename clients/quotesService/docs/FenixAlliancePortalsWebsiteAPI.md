# FenixAlliancePortalsWebsiteAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FenixAlliancePortalsWebsiteAPI_accountLogoutPost**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_accountLogoutPost) | **POST** /Account/Logout | 
[**FenixAlliancePortalsWebsiteAPI_accountManageDownloadPersonalDataPost**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_accountManageDownloadPersonalDataPost) | **POST** /Account/Manage/DownloadPersonalData | 
[**FenixAlliancePortalsWebsiteAPI_accountManageLinkExternalLoginPost**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_accountManageLinkExternalLoginPost) | **POST** /Account/Manage/LinkExternalLogin | 
[**FenixAlliancePortalsWebsiteAPI_accountPerformExternalLoginPost**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_accountPerformExternalLoginPost) | **POST** /Account/PerformExternalLogin | 
[**FenixAlliancePortalsWebsiteAPI_forgotPasswordPost**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_forgotPasswordPost) | **POST** /forgotPassword | 
[**FenixAlliancePortalsWebsiteAPI_healthGet**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_healthGet) | **GET** /health | 
[**FenixAlliancePortalsWebsiteAPI_helloGet**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_helloGet) | **GET** /hello | 
[**FenixAlliancePortalsWebsiteAPI_loginPost**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_loginPost) | **POST** /login | 
[**FenixAlliancePortalsWebsiteAPI_manage2faPost**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_manage2faPost) | **POST** /manage/2fa | 
[**FenixAlliancePortalsWebsiteAPI_manageInfoGet**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_manageInfoGet) | **GET** /manage/info | 
[**FenixAlliancePortalsWebsiteAPI_manageInfoPost**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_manageInfoPost) | **POST** /manage/info | 
[**FenixAlliancePortalsWebsiteAPI_mapIdentityApiConfirmEmail**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_mapIdentityApiConfirmEmail) | **GET** /confirmEmail | 
[**FenixAlliancePortalsWebsiteAPI_refreshPost**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_refreshPost) | **POST** /refresh | 
[**FenixAlliancePortalsWebsiteAPI_registerPost**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_registerPost) | **POST** /register | 
[**FenixAlliancePortalsWebsiteAPI_resendConfirmationEmailPost**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_resendConfirmationEmailPost) | **POST** /resendConfirmationEmail | 
[**FenixAlliancePortalsWebsiteAPI_resetPasswordPost**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_resetPasswordPost) | **POST** /resetPassword | 
[**FenixAlliancePortalsWebsiteAPI_versionGet**](FenixAlliancePortalsWebsiteAPI.md#FenixAlliancePortalsWebsiteAPI_versionGet) | **GET** /version | 


# **FenixAlliancePortalsWebsiteAPI_accountLogoutPost**
```c
void FenixAlliancePortalsWebsiteAPI_accountLogoutPost(apiClient_t *apiClient, char *returnUrl);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**returnUrl** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/x-www-form-urlencoded
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_accountManageDownloadPersonalDataPost**
```c
void FenixAlliancePortalsWebsiteAPI_accountManageDownloadPersonalDataPost(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_accountManageLinkExternalLoginPost**
```c
void FenixAlliancePortalsWebsiteAPI_accountManageLinkExternalLoginPost(apiClient_t *apiClient, char *provider);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**provider** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/x-www-form-urlencoded
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_accountPerformExternalLoginPost**
```c
void FenixAlliancePortalsWebsiteAPI_accountPerformExternalLoginPost(apiClient_t *apiClient, char *provider, char *returnUrl);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**provider** | **char \*** |  | [optional] 
**returnUrl** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/x-www-form-urlencoded
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_forgotPasswordPost**
```c
void FenixAlliancePortalsWebsiteAPI_forgotPasswordPost(apiClient_t *apiClient, forgot_password_request_t *forgot_password_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**forgot_password_request** | **[forgot_password_request_t](forgot_password_request.md) \*** |  | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_healthGet**
```c
void FenixAlliancePortalsWebsiteAPI_healthGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_helloGet**
```c
void FenixAlliancePortalsWebsiteAPI_helloGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_loginPost**
```c
access_token_response_t* FenixAlliancePortalsWebsiteAPI_loginPost(apiClient_t *apiClient, login_request_t *login_request, int *useCookies, int *useSessionCookies);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**login_request** | **[login_request_t](login_request.md) \*** |  | 
**useCookies** | **int \*** |  | [optional] 
**useSessionCookies** | **int \*** |  | [optional] 

### Return type

[access_token_response_t](access_token_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_manage2faPost**
```c
two_factor_response_t* FenixAlliancePortalsWebsiteAPI_manage2faPost(apiClient_t *apiClient, two_factor_request_t *two_factor_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**two_factor_request** | **[two_factor_request_t](two_factor_request.md) \*** |  | 

### Return type

[two_factor_response_t](two_factor_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_manageInfoGet**
```c
info_response_t* FenixAlliancePortalsWebsiteAPI_manageInfoGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[info_response_t](info_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_manageInfoPost**
```c
info_response_t* FenixAlliancePortalsWebsiteAPI_manageInfoPost(apiClient_t *apiClient, info_request_t *info_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**info_request** | **[info_request_t](info_request.md) \*** |  | 

### Return type

[info_response_t](info_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_mapIdentityApiConfirmEmail**
```c
void FenixAlliancePortalsWebsiteAPI_mapIdentityApiConfirmEmail(apiClient_t *apiClient, char *userId, char *code, char *changedEmail);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**code** | **char \*** |  | 
**changedEmail** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_refreshPost**
```c
access_token_response_t* FenixAlliancePortalsWebsiteAPI_refreshPost(apiClient_t *apiClient, refresh_request_t *refresh_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**refresh_request** | **[refresh_request_t](refresh_request.md) \*** |  | 

### Return type

[access_token_response_t](access_token_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_registerPost**
```c
void FenixAlliancePortalsWebsiteAPI_registerPost(apiClient_t *apiClient, register_request_t *register_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**register_request** | **[register_request_t](register_request.md) \*** |  | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_resendConfirmationEmailPost**
```c
void FenixAlliancePortalsWebsiteAPI_resendConfirmationEmailPost(apiClient_t *apiClient, resend_confirmation_email_request_t *resend_confirmation_email_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**resend_confirmation_email_request** | **[resend_confirmation_email_request_t](resend_confirmation_email_request.md) \*** |  | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_resetPasswordPost**
```c
void FenixAlliancePortalsWebsiteAPI_resetPasswordPost(apiClient_t *apiClient, reset_password_request_t *reset_password_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**reset_password_request** | **[reset_password_request_t](reset_password_request.md) \*** |  | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAlliancePortalsWebsiteAPI_versionGet**
```c
void FenixAlliancePortalsWebsiteAPI_versionGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

