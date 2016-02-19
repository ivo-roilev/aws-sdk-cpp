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
#include <aws/swf/model/WorkflowTypeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

WorkflowTypeConfiguration::WorkflowTypeConfiguration() : 
    m_defaultTaskStartToCloseTimeoutHasBeenSet(false),
    m_defaultExecutionStartToCloseTimeoutHasBeenSet(false),
    m_defaultTaskListHasBeenSet(false),
    m_defaultTaskPriorityHasBeenSet(false),
    m_defaultChildPolicyHasBeenSet(false),
    m_defaultLambdaRoleHasBeenSet(false)
{
}

WorkflowTypeConfiguration::WorkflowTypeConfiguration(const JsonValue& jsonValue) : 
    m_defaultTaskStartToCloseTimeoutHasBeenSet(false),
    m_defaultExecutionStartToCloseTimeoutHasBeenSet(false),
    m_defaultTaskListHasBeenSet(false),
    m_defaultTaskPriorityHasBeenSet(false),
    m_defaultChildPolicyHasBeenSet(false),
    m_defaultLambdaRoleHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowTypeConfiguration& WorkflowTypeConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("defaultTaskStartToCloseTimeout"))
  {
    m_defaultTaskStartToCloseTimeout = jsonValue.GetString("defaultTaskStartToCloseTimeout");

    m_defaultTaskStartToCloseTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultExecutionStartToCloseTimeout"))
  {
    m_defaultExecutionStartToCloseTimeout = jsonValue.GetString("defaultExecutionStartToCloseTimeout");

    m_defaultExecutionStartToCloseTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultTaskList"))
  {
    m_defaultTaskList = jsonValue.GetObject("defaultTaskList");

    m_defaultTaskListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultTaskPriority"))
  {
    m_defaultTaskPriority = jsonValue.GetString("defaultTaskPriority");

    m_defaultTaskPriorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultChildPolicy"))
  {
    m_defaultChildPolicy = ChildPolicyMapper::GetChildPolicyForName(jsonValue.GetString("defaultChildPolicy"));

    m_defaultChildPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultLambdaRole"))
  {
    m_defaultLambdaRole = jsonValue.GetString("defaultLambdaRole");

    m_defaultLambdaRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowTypeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_defaultTaskStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("defaultTaskStartToCloseTimeout", m_defaultTaskStartToCloseTimeout);

  }

  if(m_defaultExecutionStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("defaultExecutionStartToCloseTimeout", m_defaultExecutionStartToCloseTimeout);

  }

  if(m_defaultTaskListHasBeenSet)
  {
   payload.WithObject("defaultTaskList", m_defaultTaskList.Jsonize());

  }

  if(m_defaultTaskPriorityHasBeenSet)
  {
   payload.WithString("defaultTaskPriority", m_defaultTaskPriority);

  }

  if(m_defaultChildPolicyHasBeenSet)
  {
   payload.WithString("defaultChildPolicy", ChildPolicyMapper::GetNameForChildPolicy(m_defaultChildPolicy));
  }

  if(m_defaultLambdaRoleHasBeenSet)
  {
   payload.WithString("defaultLambdaRole", m_defaultLambdaRole);

  }

  return std::move(payload);
}