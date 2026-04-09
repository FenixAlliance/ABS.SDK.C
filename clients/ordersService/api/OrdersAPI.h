#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/email_dispatch_request.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/extended_order_dto_list_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/order_create_dto.h"
#include "../model/order_dto_envelope.h"
#include "../model/order_dto_list_envelope.h"
#include "../model/order_line_create_dto.h"
#include "../model/order_line_dto_envelope.h"
#include "../model/order_line_dto_list_envelope.h"
#include "../model/order_line_update_dto.h"
#include "../model/order_update_dto.h"


// Calculates totals for an order.
//
// Performs calculation of totals and taxes for the specified order.
//
empty_envelope_t*
OrdersAPI_calculateOrder(apiClient_t *apiClient, char *tenantId, char *orderId);


// Calculates totals for an order line.
//
// Performs calculation of totals and taxes for the specified order line.
//
empty_envelope_t*
OrdersAPI_calculateOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, char *orderLineId);


// Creates a new order.
//
// Creates a new order for the specified tenant.
//
empty_envelope_t*
OrdersAPI_createOrder(apiClient_t *apiClient, char *tenantId, order_create_dto_t *order_create_dto);


// Creates a new order line.
//
// Creates a new line (item) for the specified order.
//
empty_envelope_t*
OrdersAPI_createOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, order_line_create_dto_t *order_line_create_dto);


// Deletes an order.
//
// Deletes the specified order.
//
empty_envelope_t*
OrdersAPI_deleteOrder(apiClient_t *apiClient, char *tenantId, char *orderId);


// Deletes an order line.
//
// Deletes the specified order line.
//
empty_envelope_t*
OrdersAPI_deleteOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, char *orderLineId);


// Gets a list of extended orders for a tenant.
//
// Retrieves a list of extended order details for the specified tenant.
//
extended_order_dto_list_envelope_t*
OrdersAPI_getExtendedOrders(apiClient_t *apiClient, char *tenantId);


// Gets a specific order by ID.
//
// Retrieves the details of a specific order by its ID.
//
order_dto_envelope_t*
OrdersAPI_getOrder(apiClient_t *apiClient, char *tenantId, char *orderId);


// Gets a specific order line.
//
// Retrieves the details of a specific order line by its ID.
//
order_line_dto_envelope_t*
OrdersAPI_getOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, char *orderLineId);


// Gets order lines for an order.
//
// Retrieves the lines (items) for the specified order.
//
order_line_dto_list_envelope_t*
OrdersAPI_getOrderLines(apiClient_t *apiClient, char *tenantId, char *orderId, char *itemId);


// Gets the count of order lines for an order.
//
// Retrieves the total number of lines for the specified order.
//
int32_envelope_t*
OrdersAPI_getOrderLinesCount(apiClient_t *apiClient, char *tenantId, char *orderId);


// Gets a list of orders for a tenant.
//
// Retrieves a list of orders for the specified tenant.
//
order_dto_list_envelope_t*
OrdersAPI_getOrders(apiClient_t *apiClient, char *tenantId);


// Gets the count of orders for a tenant.
//
// Retrieves the total number of orders for the specified tenant.
//
int32_envelope_t*
OrdersAPI_getOrdersCount(apiClient_t *apiClient, char *tenantId);


// Preview the rendered email for an Order.
//
// Previews the rendered email template for the specified order. Only users with the 'send_email' permission are permitted.
//
void
OrdersAPI_previewOrderEmailTemplate(apiClient_t *apiClient, char *orderId, char *tenantId, email_dispatch_request_t *email_dispatch_request);


// Send a transactional email for an order.
//
// Sends a transactional email for the specified order. Only users with the 'send_email' permission are permitted.
//
empty_envelope_t*
OrdersAPI_sendOrderEmail(apiClient_t *apiClient, char *tenantId, char *orderId, email_dispatch_request_t *email_dispatch_request);


// Submits a cart and creates an order.
//
// Submits the specified cart and creates an order for the authenticated user.
//
order_dto_envelope_t*
OrdersAPI_submitCart(apiClient_t *apiClient, char *cartId);


// Updates an existing order.
//
// Updates the details of an existing order.
//
empty_envelope_t*
OrdersAPI_updateOrder(apiClient_t *apiClient, char *tenantId, char *orderId, order_update_dto_t *order_update_dto);


// Updates an order line.
//
// Updates the details of a specific order line.
//
empty_envelope_t*
OrdersAPI_updateOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, char *orderLineId, order_line_update_dto_t *order_line_update_dto);


