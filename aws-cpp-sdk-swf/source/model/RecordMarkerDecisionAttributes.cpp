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
#include <aws/swf/model/RecordMarkerDecisionAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RecordMarkerDecisionAttributes::RecordMarkerDecisionAttributes() : 
    m_markerNameHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

RecordMarkerDecisionAttributes::RecordMarkerDecisionAttributes(const JsonValue& jsonValue) : 
    m_markerNameHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

RecordMarkerDecisionAttributes& RecordMarkerDecisionAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("markerName"))
  {
    m_markerName = jsonValue.GetString("markerName");

    m_markerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetString("details");

    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordMarkerDecisionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_markerNameHasBeenSet)
  {
   payload.WithString("markerName", m_markerName);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  return std::move(payload);
}