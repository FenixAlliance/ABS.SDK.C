# QuotesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**QuotesAPI_calculateQuote**](QuotesAPI.md#QuotesAPI_calculateQuote) | **PUT** /api/v2/QuotesService/Quotes/{quoteId}/Calculate | Calculate a quote.
[**QuotesAPI_calculateQuoteLine**](QuotesAPI.md#QuotesAPI_calculateQuoteLine) | **PUT** /api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId}/Calculate | Calculate a quote line.
[**QuotesAPI_closeQuote**](QuotesAPI.md#QuotesAPI_closeQuote) | **PUT** /api/v2/QuotesService/Quotes/{quoteId}/Close | Close a quote.
[**QuotesAPI_createOrderFromQuote**](QuotesAPI.md#QuotesAPI_createOrderFromQuote) | **POST** /api/v2/QuotesService/Quotes/{quoteId}/Orders | Create an order from a quote.
[**QuotesAPI_createQuote**](QuotesAPI.md#QuotesAPI_createQuote) | **POST** /api/v2/QuotesService/Quotes | Create a new quote.
[**QuotesAPI_createQuoteLine**](QuotesAPI.md#QuotesAPI_createQuoteLine) | **POST** /api/v2/QuotesService/Quotes/{quoteId}/Lines | Create a new quote line.
[**QuotesAPI_deleteQuote**](QuotesAPI.md#QuotesAPI_deleteQuote) | **DELETE** /api/v2/QuotesService/Quotes/{quoteId} | Delete a quote.
[**QuotesAPI_deleteQuoteLine**](QuotesAPI.md#QuotesAPI_deleteQuoteLine) | **DELETE** /api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId} | Delete a quote line.
[**QuotesAPI_getExtendedQuotes**](QuotesAPI.md#QuotesAPI_getExtendedQuotes) | **GET** /api/v2/QuotesService/Quotes/Extended | Get a list of extended quotes.
[**QuotesAPI_getQuote**](QuotesAPI.md#QuotesAPI_getQuote) | **GET** /api/v2/QuotesService/Quotes/{quoteId} | Get a quote by ID.
[**QuotesAPI_getQuoteLine**](QuotesAPI.md#QuotesAPI_getQuoteLine) | **GET** /api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId} | Get a quote line by ID.
[**QuotesAPI_getQuoteLines**](QuotesAPI.md#QuotesAPI_getQuoteLines) | **GET** /api/v2/QuotesService/Quotes/{quoteId}/Lines | Get quote lines for a quote.
[**QuotesAPI_getQuoteLinesCount**](QuotesAPI.md#QuotesAPI_getQuoteLinesCount) | **GET** /api/v2/QuotesService/Quotes/{quoteId}/Lines/Count | Get the count of quote lines.
[**QuotesAPI_getQuotes**](QuotesAPI.md#QuotesAPI_getQuotes) | **GET** /api/v2/QuotesService/Quotes | Get a list of quotes.
[**QuotesAPI_getQuotesCount**](QuotesAPI.md#QuotesAPI_getQuotesCount) | **GET** /api/v2/QuotesService/Quotes/Count | Get the count of quotes.
[**QuotesAPI_previewQuoteEmailTemplate**](QuotesAPI.md#QuotesAPI_previewQuoteEmailTemplate) | **POST** /api/v2/QuotesService/Quotes/{quoteId}/Emails/Preview | Preview the rendered email for an invoice.
[**QuotesAPI_quoteLineExists**](QuotesAPI.md#QuotesAPI_quoteLineExists) | **GET** /api/v2/QuotesService/Quotes/{quoteId}/Lines/Exists | Check if a quote line exists.
[**QuotesAPI_reopenQuote**](QuotesAPI.md#QuotesAPI_reopenQuote) | **PUT** /api/v2/QuotesService/Quotes/{quoteId}/Reopen | Reopen a closed quote.
[**QuotesAPI_sendQuoteEmail**](QuotesAPI.md#QuotesAPI_sendQuoteEmail) | **POST** /api/v2/QuotesService/Quotes/{quoteId}/Emails/Send | Send a quote transactional email to recipients.
[**QuotesAPI_updateQuote**](QuotesAPI.md#QuotesAPI_updateQuote) | **PUT** /api/v2/QuotesService/Quotes/{quoteId} | Update an existing quote.
[**QuotesAPI_updateQuoteLine**](QuotesAPI.md#QuotesAPI_updateQuoteLine) | **PUT** /api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId} | Update a quote line.
[**QuotesAPI_upsertQuoteLine**](QuotesAPI.md#QuotesAPI_upsertQuoteLine) | **PUT** /api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId}/Upsert | Upsert a quote line.


# **QuotesAPI_calculateQuote**
```c
// Calculate a quote.
//
// Performs calculation logic for the specified quote.
//
empty_envelope_t* QuotesAPI_calculateQuote(apiClient_t *apiClient, char *tenantId, char *quoteId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_calculateQuoteLine**
```c
// Calculate a quote line.
//
// Performs calculation logic for the specified quote line.
//
empty_envelope_t* QuotesAPI_calculateQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 
**quoteLineId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_closeQuote**
```c
// Close a quote.
//
// Closes the specified quote for the tenant.
//
empty_envelope_t* QuotesAPI_closeQuote(apiClient_t *apiClient, char *tenantId, char *quoteId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_createOrderFromQuote**
```c
// Create an order from a quote.
//
// Creates an order based on the specified quote for the tenant.
//
empty_envelope_t* QuotesAPI_createOrderFromQuote(apiClient_t *apiClient, char *tenantId, char *quoteId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_createQuote**
```c
// Create a new quote.
//
// Creates a new quote for the specified tenant.
//
empty_envelope_t* QuotesAPI_createQuote(apiClient_t *apiClient, char *tenantId, quote_create_dto_t *quote_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quote_create_dto** | **[quote_create_dto_t](quote_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_createQuoteLine**
```c
// Create a new quote line.
//
// Creates a new quote line for the specified quote and tenant.
//
empty_envelope_t* QuotesAPI_createQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, quote_line_create_dto_t *quote_line_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 
**quote_line_create_dto** | **[quote_line_create_dto_t](quote_line_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_deleteQuote**
```c
// Delete a quote.
//
// Deletes the specified quote for the tenant.
//
empty_envelope_t* QuotesAPI_deleteQuote(apiClient_t *apiClient, char *quoteId, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**quoteId** | **char \*** |  | 
**tenantId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_deleteQuoteLine**
```c
// Delete a quote line.
//
// Deletes the specified quote line for the quote and tenant.
//
empty_envelope_t* QuotesAPI_deleteQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 
**quoteLineId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_getExtendedQuotes**
```c
// Get a list of extended quotes.
//
// Retrieves a list of extended quotes for the specified tenant, supporting OData query options.
//
extended_quote_dto_list_envelope_t* QuotesAPI_getExtendedQuotes(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[extended_quote_dto_list_envelope_t](extended_quote_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_getQuote**
```c
// Get a quote by ID.
//
// Retrieves a single quote by its unique identifier for the specified tenant.
//
quote_dto_envelope_t* QuotesAPI_getQuote(apiClient_t *apiClient, char *tenantId, char *quoteId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 

### Return type

[quote_dto_envelope_t](quote_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_getQuoteLine**
```c
// Get a quote line by ID.
//
// Retrieves a single quote line by its unique identifier for the specified quote and tenant.
//
quote_line_dto_envelope_t* QuotesAPI_getQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 
**quoteLineId** | **char \*** |  | 

### Return type

[quote_line_dto_envelope_t](quote_line_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_getQuoteLines**
```c
// Get quote lines for a quote.
//
// Retrieves all quote lines for the specified quote and tenant.
//
quote_line_dto_list_envelope_t* QuotesAPI_getQuoteLines(apiClient_t *apiClient, char *tenantId, char *quoteId, char *itemId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 
**itemId** | **char \*** |  | [optional] 

### Return type

[quote_line_dto_list_envelope_t](quote_line_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_getQuoteLinesCount**
```c
// Get the count of quote lines.
//
// Retrieves the total count of quote lines for the specified quote and tenant.
//
int32_envelope_t* QuotesAPI_getQuoteLinesCount(apiClient_t *apiClient, char *tenantId, char *quoteId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_getQuotes**
```c
// Get a list of quotes.
//
// Retrieves a list of quotes for the specified tenant, supporting OData query options.
//
quote_dto_list_envelope_t* QuotesAPI_getQuotes(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[quote_dto_list_envelope_t](quote_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_getQuotesCount**
```c
// Get the count of quotes.
//
// Retrieves the total count of quotes for the specified tenant, supporting OData query options.
//
int32_envelope_t* QuotesAPI_getQuotesCount(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_previewQuoteEmailTemplate**
```c
// Preview the rendered email for an invoice.
//
// This action is only available for users with the 'send_email' permission.
//
void QuotesAPI_previewQuoteEmailTemplate(apiClient_t *apiClient, char *quoteId, char *tenantId, email_dispatch_request_t *email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**quoteId** | **char \*** |  | 
**tenantId** | **char \*** |  | 
**email_dispatch_request** | **[email_dispatch_request_t](email_dispatch_request.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_quoteLineExists**
```c
// Check if a quote line exists.
//
// Checks if a quote line exists for the specified quote and tenant, by quote line ID or item ID.
//
boolean_envelope_t* QuotesAPI_quoteLineExists(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId, char *itemId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 
**quoteLineId** | **char \*** |  | [optional] 
**itemId** | **char \*** |  | [optional] 

### Return type

[boolean_envelope_t](boolean_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_reopenQuote**
```c
// Reopen a closed quote.
//
// Reopens a previously closed quote for the tenant.
//
empty_envelope_t* QuotesAPI_reopenQuote(apiClient_t *apiClient, char *tenantId, char *quoteId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_sendQuoteEmail**
```c
// Send a quote transactional email to recipients.
//
// This action is only available for users with the 'send_email' permission.
//
empty_envelope_t* QuotesAPI_sendQuoteEmail(apiClient_t *apiClient, char *tenantId, char *quoteId, email_dispatch_request_t *email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 
**email_dispatch_request** | **[email_dispatch_request_t](email_dispatch_request.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_updateQuote**
```c
// Update an existing quote.
//
// Updates an existing quote for the specified tenant and quote ID.
//
empty_envelope_t* QuotesAPI_updateQuote(apiClient_t *apiClient, char *tenantId, char *quoteId, quote_update_dto_t *quote_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 
**quote_update_dto** | **[quote_update_dto_t](quote_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_updateQuoteLine**
```c
// Update a quote line.
//
// Updates an existing quote line for the specified quote and tenant.
//
empty_envelope_t* QuotesAPI_updateQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId, quote_line_update_dto_t *quote_line_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 
**quoteLineId** | **char \*** |  | 
**quote_line_update_dto** | **[quote_line_update_dto_t](quote_line_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuotesAPI_upsertQuoteLine**
```c
// Upsert a quote line.
//
// Creates or updates a quote line for the specified quote and tenant.
//
empty_envelope_t* QuotesAPI_upsertQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId, quote_line_upsert_dto_t *quote_line_upsert_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**quoteId** | **char \*** |  | 
**quoteLineId** | **char \*** |  | 
**quote_line_upsert_dto** | **[quote_line_upsert_dto_t](quote_line_upsert_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

