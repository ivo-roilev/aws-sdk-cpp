﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/WorkflowType.h>
#include <aws/swf/model/StartChildWorkflowExecutionFailedCause.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
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
   * <p>Provides details of the <code>StartChildWorkflowExecutionFailed</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/StartChildWorkflowExecutionFailedEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API StartChildWorkflowExecutionFailedEventAttributes
  {
  public:
    StartChildWorkflowExecutionFailedEventAttributes();
    StartChildWorkflowExecutionFailedEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    StartChildWorkflowExecutionFailedEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The workflow type provided in the <code>StartChildWorkflowExecution</code>
     * decision that failed.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The workflow type provided in the <code>StartChildWorkflowExecution</code>
     * decision that failed.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The workflow type provided in the <code>StartChildWorkflowExecution</code>
     * decision that failed.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }

    /**
     * <p>The workflow type provided in the <code>StartChildWorkflowExecution</code>
     * decision that failed.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The workflow type provided in the <code>StartChildWorkflowExecution</code>
     * decision that failed.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline const StartChildWorkflowExecutionFailedCause& GetCause() const{ return m_cause; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline void SetCause(const StartChildWorkflowExecutionFailedCause& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline void SetCause(StartChildWorkflowExecutionFailedCause&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithCause(const StartChildWorkflowExecutionFailedCause& value) { SetCause(value); return *this;}

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithCause(StartChildWorkflowExecutionFailedCause&& value) { SetCause(std::move(value)); return *this;}

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> decision to start
     * this child workflow execution. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetInitiatedEventId() const{ return m_initiatedEventId; }

    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> decision to start
     * this child workflow execution. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetInitiatedEventId(long long value) { m_initiatedEventIdHasBeenSet = true; m_initiatedEventId = value; }

    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> decision to start
     * this child workflow execution. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithInitiatedEventId(long long value) { SetInitiatedEventId(value); return *this;}

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartChildWorkflowExecution</code>
     * decision to request this child workflow execution. This information can be
     * useful for diagnosing problems by tracing back the cause of events.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartChildWorkflowExecution</code>
     * decision to request this child workflow execution. This information can be
     * useful for diagnosing problems by tracing back the cause of events.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartChildWorkflowExecution</code>
     * decision to request this child workflow execution. This information can be
     * useful for diagnosing problems by tracing back the cause of events.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

    
    inline const Aws::String& GetControl() const{ return m_control; }

    
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }

    
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    
    inline StartChildWorkflowExecutionFailedEventAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    
    inline StartChildWorkflowExecutionFailedEventAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}

    
    inline StartChildWorkflowExecutionFailedEventAttributes& WithControl(const char* value) { SetControl(value); return *this;}

  private:
    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet;
    StartChildWorkflowExecutionFailedCause m_cause;
    bool m_causeHasBeenSet;
    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet;
    long long m_initiatedEventId;
    bool m_initiatedEventIdHasBeenSet;
    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;
    Aws::String m_control;
    bool m_controlHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
