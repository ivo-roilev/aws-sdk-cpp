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
#include <aws/ec2/model/StartInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

StartInstancesRequest::StartInstancesRequest() : 
    m_instanceIdsHasBeenSet(false),
    m_additionalInfoHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String StartInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartInstances&";
  if(m_instanceIdsHasBeenSet)
  {
    unsigned instanceIdsCount = 1;
    for(auto& item : m_instanceIds)
    {
      ss << "InstanceId." << instanceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      instanceIdsCount++;
    }
  }
  if(m_additionalInfoHasBeenSet)
  {
    ss << "AdditionalInfo=" << StringUtils::URLEncode(m_additionalInfo.c_str()) << "&";
  }
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }
  ss << "Version=2015-04-15";
  return ss.str();
}

