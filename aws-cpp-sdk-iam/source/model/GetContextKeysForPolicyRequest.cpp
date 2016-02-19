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
#include <aws/iam/model/GetContextKeysForPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

GetContextKeysForPolicyRequest::GetContextKeysForPolicyRequest() : 
    m_getPolicyForHasBeenSet(false),
    m_policyInputListHasBeenSet(false)
{
}

Aws::String GetContextKeysForPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetContextKeysForPolicy&";
  if(m_getPolicyForHasBeenSet)
  {
    ss << "GetPolicyFor=" << StringUtils::URLEncode(m_getPolicyFor.c_str()) << "&";
  }
  if(m_policyInputListHasBeenSet)
  {
    unsigned policyInputListCount = 1;
    for(auto& item : m_policyInputList)
    {
      ss << "PolicyInputList.member." << policyInputListCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      policyInputListCount++;
    }
  }
  ss << "Version=2010-05-08";
  return ss.str();
}

