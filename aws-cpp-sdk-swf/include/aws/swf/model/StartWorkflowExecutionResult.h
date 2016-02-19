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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{
  /**
   * <p>Specifies the <code>runId</code> of a workflow execution.</p>
   */
  class AWS_SWF_API StartWorkflowExecutionResult
  {
  public:
    StartWorkflowExecutionResult();
    StartWorkflowExecutionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartWorkflowExecutionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The <code>runId</code> of a workflow execution. This ID is generated by the
     * service and can be used to uniquely identify the workflow execution within a
     * domain.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The <code>runId</code> of a workflow execution. This ID is generated by the
     * service and can be used to uniquely identify the workflow execution within a
     * domain.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runId = value; }

    /**
     * <p>The <code>runId</code> of a workflow execution. This ID is generated by the
     * service and can be used to uniquely identify the workflow execution within a
     * domain.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runId = value; }

    /**
     * <p>The <code>runId</code> of a workflow execution. This ID is generated by the
     * service and can be used to uniquely identify the workflow execution within a
     * domain.</p>
     */
    inline void SetRunId(const char* value) { m_runId.assign(value); }

    /**
     * <p>The <code>runId</code> of a workflow execution. This ID is generated by the
     * service and can be used to uniquely identify the workflow execution within a
     * domain.</p>
     */
    inline StartWorkflowExecutionResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The <code>runId</code> of a workflow execution. This ID is generated by the
     * service and can be used to uniquely identify the workflow execution within a
     * domain.</p>
     */
    inline StartWorkflowExecutionResult& WithRunId(Aws::String&& value) { SetRunId(value); return *this;}

    /**
     * <p>The <code>runId</code> of a workflow execution. This ID is generated by the
     * service and can be used to uniquely identify the workflow execution within a
     * domain.</p>
     */
    inline StartWorkflowExecutionResult& WithRunId(const char* value) { SetRunId(value); return *this;}

  private:
    Aws::String m_runId;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
