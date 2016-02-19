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
#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Projection.h>
#include <aws/dynamodb/model/ProvisionedThroughput.h>
#include <aws/dynamodb/model/KeySchemaElement.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the properties of a global secondary index.</p>
   */
  class AWS_DYNAMODB_API GlobalSecondaryIndex
  {
  public:
    GlobalSecondaryIndex();
    GlobalSecondaryIndex(const Aws::Utils::Json::JsonValue& jsonValue);
    GlobalSecondaryIndex& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline GlobalSecondaryIndex& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline GlobalSecondaryIndex& WithIndexName(Aws::String&& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline GlobalSecondaryIndex& WithIndexName(const char* value) { SetIndexName(value); return *this;}

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types (<code>HASH</code> or
     * <code>RANGE</code>).</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types (<code>HASH</code> or
     * <code>RANGE</code>).</p>
     */
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types (<code>HASH</code> or
     * <code>RANGE</code>).</p>
     */
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types (<code>HASH</code> or
     * <code>RANGE</code>).</p>
     */
    inline GlobalSecondaryIndex& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types (<code>HASH</code> or
     * <code>RANGE</code>).</p>
     */
    inline GlobalSecondaryIndex& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(value); return *this;}

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types (<code>HASH</code> or
     * <code>RANGE</code>).</p>
     */
    inline GlobalSecondaryIndex& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types (<code>HASH</code> or
     * <code>RANGE</code>).</p>
     */
    inline GlobalSecondaryIndex& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    
    inline const Projection& GetProjection() const{ return m_projection; }

    
    inline void SetProjection(const Projection& value) { m_projectionHasBeenSet = true; m_projection = value; }

    
    inline void SetProjection(Projection&& value) { m_projectionHasBeenSet = true; m_projection = value; }

    
    inline GlobalSecondaryIndex& WithProjection(const Projection& value) { SetProjection(value); return *this;}

    
    inline GlobalSecondaryIndex& WithProjection(Projection&& value) { SetProjection(value); return *this;}

    
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    
    inline GlobalSecondaryIndex& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}

    
    inline GlobalSecondaryIndex& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(value); return *this;}

  private:
    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;
    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet;
    Projection m_projection;
    bool m_projectionHasBeenSet;
    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
