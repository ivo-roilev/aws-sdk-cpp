/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/dynamodb/model/BatchGetItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetItemRequest::BatchGetItemRequest() : 
    m_requestItemsHasBeenSet(false),
    m_returnConsumedCapacityHasBeenSet(false)
{
}

Aws::String BatchGetItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestItemsHasBeenSet)
  {
   JsonValue requestItemsJsonMap;
   for(auto& requestItemsItem : m_requestItems)
   {
     requestItemsJsonMap.WithObject(requestItemsItem.first, requestItemsItem.second.Jsonize());
   }
   payload.WithObject("RequestItems", std::move(requestItemsJsonMap));

  }

  if(m_returnConsumedCapacityHasBeenSet)
  {
   payload.WithString("ReturnConsumedCapacity", ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_returnConsumedCapacity));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.BatchGetItem"));
  return std::move(headers);

}



