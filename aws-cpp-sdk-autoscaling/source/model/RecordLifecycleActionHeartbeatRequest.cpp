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
#include <aws/autoscaling/model/RecordLifecycleActionHeartbeatRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

RecordLifecycleActionHeartbeatRequest::RecordLifecycleActionHeartbeatRequest() : 
    m_lifecycleHookNameHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_lifecycleActionTokenHasBeenSet(false)
{
}

Aws::String RecordLifecycleActionHeartbeatRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RecordLifecycleActionHeartbeat&";
  if(m_lifecycleHookNameHasBeenSet)
  {
    ss << "LifecycleHookName=" << StringUtils::URLEncode(m_lifecycleHookName.c_str()) << "&";
  }
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }
  if(m_lifecycleActionTokenHasBeenSet)
  {
    ss << "LifecycleActionToken=" << StringUtils::URLEncode(m_lifecycleActionToken.c_str()) << "&";
  }
  ss << "Version=2011-01-01";
  return ss.str();
}

