# OrdersAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OrdersAPI_calculateOrder**](OrdersAPI.md#OrdersAPI_calculateOrder) | **PUT** /api/v2/OrdersService/Orders/{orderId}/Calculate | Calculates totals for an order.
[**OrdersAPI_calculateOrderLine**](OrdersAPI.md#OrdersAPI_calculateOrderLine) | **PUT** /api/v2/OrdersService/Orders/{orderId}/Lines/{orderLineId}/Calculate | Calculates totals for an order line.
[**OrdersAPI_createOrder**](OrdersAPI.md#OrdersAPI_createOrder) | **POST** /api/v2/OrdersService/Orders | Creates a new order.
[**OrdersAPI_createOrderLine**](OrdersAPI.md#OrdersAPI_createOrderLine) | **POST** /api/v2/OrdersService/Orders/{orderId}/Lines | Creates a new order line.
[**OrdersAPI_deleteOrder**](OrdersAPI.md#OrdersAPI_deleteOrder) | **DELETE** /api/v2/OrdersService/Orders/{orderId} | Deletes an order.
[**OrdersAPI_deleteOrderLine**](OrdersAPI.md#OrdersAPI_deleteOrderLine) | **DELETE** /api/v2/OrdersService/Orders/{orderId}/Lines/{orderLineId} | Deletes an order line.
[**OrdersAPI_getExtendedOrders**](OrdersAPI.md#OrdersAPI_getExtendedOrders) | **GET** /api/v2/OrdersService/Orders/Extended | Gets a list of extended orders for a tenant.
[**OrdersAPI_getOrder**](OrdersAPI.md#OrdersAPI_getOrder) | **GET** /api/v2/OrdersService/Orders/{orderId} | Gets a specific order by ID.
[**OrdersAPI_getOrderLine**](OrdersAPI.md#OrdersAPI_getOrderLine) | **GET** /api/v2/OrdersService/Orders/{orderId}/Lines/{orderLineId} | Gets a specific order line.
[**OrdersAPI_getOrderLines**](OrdersAPI.md#OrdersAPI_getOrderLines) | **GET** /api/v2/OrdersService/Orders/{orderId}/Lines | Gets order lines for an order.
[**OrdersAPI_getOrderLinesCount**](OrdersAPI.md#OrdersAPI_getOrderLinesCount) | **GET** /api/v2/OrdersService/Orders/{orderId}/Lines/Count | Gets the count of order lines for an order.
[**OrdersAPI_getOrders**](OrdersAPI.md#OrdersAPI_getOrders) | **GET** /api/v2/OrdersService/Orders | Gets a list of orders for a tenant.
[**OrdersAPI_getOrdersCount**](OrdersAPI.md#OrdersAPI_getOrdersCount) | **GET** /api/v2/OrdersService/Orders/Count | Gets the count of orders for a tenant.
[**OrdersAPI_previewOrderEmailTemplate**](OrdersAPI.md#OrdersAPI_previewOrderEmailTemplate) | **POST** /api/v2/OrdersService/Orders/{orderId}/Emails/Preview | Preview the rendered email for an Order.
[**OrdersAPI_sendOrderEmail**](OrdersAPI.md#OrdersAPI_sendOrderEmail) | **POST** /api/v2/OrdersService/Orders/{orderId}/Emails/Send | Send a transactional email for an order.
[**OrdersAPI_submitCart**](OrdersAPI.md#OrdersAPI_submitCart) | **POST** /api/v2/OrdersService/Orders/SubmitCart | Submits a cart and creates an order.
[**OrdersAPI_updateOrder**](OrdersAPI.md#OrdersAPI_updateOrder) | **PUT** /api/v2/OrdersService/Orders/{orderId} | Updates an existing order.
[**OrdersAPI_updateOrderLine**](OrdersAPI.md#OrdersAPI_updateOrderLine) | **PUT** /api/v2/OrdersService/Orders/{orderId}/Lines/{orderLineId} | Updates an order line.


# **OrdersAPI_calculateOrder**
```c
// Calculates totals for an order.
//
// Performs calculation of totals and taxes for the specified order.
//
empty_envelope_t* OrdersAPI_calculateOrder(apiClient_t *apiClient, char *tenantId, char *orderId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**orderId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_calculateOrderLine**
```c
// Calculates totals for an order line.
//
// Performs calculation of totals and taxes for the specified order line.
//
empty_envelope_t* OrdersAPI_calculateOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, char *orderLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**orderId** | **char \*** |  | 
**orderLineId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_createOrder**
```c
// Creates a new order.
//
// Creates a new order for the specified tenant.
//
empty_envelope_t* OrdersAPI_createOrder(apiClient_t *apiClient, char *tenantId, order_create_dto_t *order_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**order_create_dto** | **[order_create_dto_t](order_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_createOrderLine**
```c
// Creates a new order line.
//
// Creates a new line (item) for the specified order.
//
empty_envelope_t* OrdersAPI_createOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, order_line_create_dto_t *order_line_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**orderId** | **char \*** |  | 
**order_line_create_dto** | **[order_line_create_dto_t](order_line_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_deleteOrder**
```c
// Deletes an order.
//
// Deletes the specified order.
//
empty_envelope_t* OrdersAPI_deleteOrder(apiClient_t *apiClient, char *tenantId, char *orderId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**orderId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_deleteOrderLine**
```c
// Deletes an order line.
//
// Deletes the specified order line.
//
empty_envelope_t* OrdersAPI_deleteOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, char *orderLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**orderId** | **char \*** |  | 
**orderLineId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_getExtendedOrders**
```c
// Gets a list of extended orders for a tenant.
//
// Retrieves a list of extended order details for the specified tenant.
//
extended_order_dto_list_envelope_t* OrdersAPI_getExtendedOrders(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[extended_order_dto_list_envelope_t](extended_order_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_getOrder**
```c
// Gets a specific order by ID.
//
// Retrieves the details of a specific order by its ID.
//
order_dto_envelope_t* OrdersAPI_getOrder(apiClient_t *apiClient, char *tenantId, char *orderId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**orderId** | **char \*** |  | 

### Return type

[order_dto_envelope_t](order_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_getOrderLine**
```c
// Gets a specific order line.
//
// Retrieves the details of a specific order line by its ID.
//
order_line_dto_envelope_t* OrdersAPI_getOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, char *orderLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**orderId** | **char \*** |  | 
**orderLineId** | **char \*** |  | 

### Return type

[order_line_dto_envelope_t](order_line_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_getOrderLines**
```c
// Gets order lines for an order.
//
// Retrieves the lines (items) for the specified order.
//
order_line_dto_list_envelope_t* OrdersAPI_getOrderLines(apiClient_t *apiClient, char *tenantId, char *orderId, char *itemId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**orderId** | **char \*** |  | 
**itemId** | **char \*** |  | [optional] 

### Return type

[order_line_dto_list_envelope_t](order_line_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_getOrderLinesCount**
```c
// Gets the count of order lines for an order.
//
// Retrieves the total number of lines for the specified order.
//
int32_envelope_t* OrdersAPI_getOrderLinesCount(apiClient_t *apiClient, char *tenantId, char *orderId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**orderId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_getOrders**
```c
// Gets a list of orders for a tenant.
//
// Retrieves a list of orders for the specified tenant.
//
order_dto_list_envelope_t* OrdersAPI_getOrders(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[order_dto_list_envelope_t](order_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_getOrdersCount**
```c
// Gets the count of orders for a tenant.
//
// Retrieves the total number of orders for the specified tenant.
//
int32_envelope_t* OrdersAPI_getOrdersCount(apiClient_t *apiClient, char *tenantId);
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

# **OrdersAPI_previewOrderEmailTemplate**
```c
// Preview the rendered email for an Order.
//
// Previews the rendered email template for the specified order. Only users with the 'send_email' permission are permitted.
//
void OrdersAPI_previewOrderEmailTemplate(apiClient_t *apiClient, char *orderId, char *tenantId, email_dispatch_request_t *email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**orderId** | **char \*** |  | 
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

# **OrdersAPI_sendOrderEmail**
```c
// Send a transactional email for an order.
//
// Sends a transactional email for the specified order. Only users with the 'send_email' permission are permitted.
//
empty_envelope_t* OrdersAPI_sendOrderEmail(apiClient_t *apiClient, char *tenantId, char *orderId, email_dispatch_request_t *email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**orderId** | **char \*** |  | 
**email_dispatch_request** | **[email_dispatch_request_t](email_dispatch_request.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_submitCart**
```c
// Submits a cart and creates an order.
//
// Submits the specified cart and creates an order for the authenticated user.
//
order_dto_envelope_t* OrdersAPI_submitCart(apiClient_t *apiClient, char *cartId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 

### Return type

[order_dto_envelope_t](order_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_updateOrder**
```c
// Updates an existing order.
//
// Updates the details of an existing order.
//
empty_envelope_t* OrdersAPI_updateOrder(apiClient_t *apiClient, char *tenantId, char *orderId, order_update_dto_t *order_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**orderId** | **char \*** |  | 
**order_update_dto** | **[order_update_dto_t](order_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrdersAPI_updateOrderLine**
```c
// Updates an order line.
//
// Updates the details of a specific order line.
//
empty_envelope_t* OrdersAPI_updateOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, char *orderLineId, order_line_update_dto_t *order_line_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**orderId** | **char \*** |  | 
**orderLineId** | **char \*** |  | 
**order_line_update_dto** | **[order_line_update_dto_t](order_line_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

